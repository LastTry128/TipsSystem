#include "TipsRichTextDecorator.h"

#include "TipsContainer.h"
#include "Fonts/FontMeasure.h"
#include "Framework/Text/TextLayout.h"

TSharedPtr<ITextDecorator> UTipsRichTextDecorator::CreateDecorator(URichTextBlock* InOwner)
{
	return MakeShareable(new FTipRichTextDecorator(InOwner, this));
}

FString UTipsRichTextDecorator::GetTipName(FName TipKey) const
{
	if (!TipsSet) return FString();

	FTipTableRow* TipRow = TipsSet->FindRow<FTipTableRow>(TipKey, TEXT(""));
	if (!TipRow) return FString();

	
	return TipRow->TipName;
}

// ReSharper disable once CppMemberFunctionMayBeStatic
float UTipsRichTextDecorator::JustifyText(const FString& Text, float ContainerWidth, const FSlateFontInfo& FontInfo)
{
	auto FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	float TextWidth = FontMeasure->Measure(Text, FontInfo).X;

	int32 NumChars = Text.Len();
	if (NumChars <= 1 || TextWidth >= ContainerWidth)
	{
		return 0.f;
	}

	float ExtraSpace = ContainerWidth - TextWidth;
	int32 NumGaps = NumChars - 1;
	float LetterSpacing = ExtraSpace / NumGaps;
	
	return LetterSpacing;
}

// FTipRichTextDecorator

bool FTipRichTextDecorator::Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const
{
    // 捕获 <tip key="xxx"> 标签
	if (RunParseResult.Name == TEXT("tip"))
	{
		for (const auto& Meta : RunParseResult.MetaData)
		{
			if (Meta.Key == TEXT("key") && !Meta.Value.IsEmpty())
			{
				return true;
			}
		}
	}
	return false;
}

TSharedPtr<SWidget> FTipRichTextDecorator::CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const
{
	
	// TipText文本样式
	FTextBlockStyle TipTextStyle = TextStyle;
	TipTextStyle.ColorAndOpacity = Decorator->GetTipTextColor();
	FText TipText = RunInfo.Content;

    // TipName文本样式
	FTextBlockStyle TipNameStyle = TextStyle;
	TipNameStyle.ColorAndOpacity = Decorator->GetTipNameColor();

	// TipName文本处理
	FString MarkStr = RunInfo.MetaData.FindRef(TEXT("mark"));
	bool bShowTipName = MarkStr.Equals(TEXT("true"), ESearchCase::IgnoreCase);

	FString ClipStr = RunInfo.MetaData.FindRef(TEXT("ratio"));
	float ClipStart = 0.0f;
	float ClipEnd = 1.0f;
	if (!ClipStr.IsEmpty())
	{
		TArray<FString> Parts;
		ClipStr.ParseIntoArray(Parts, TEXT(","), true);
		if (Parts.Num() == 2)
		{
			ClipStart = FCString::Atof(*Parts[0]);
			ClipEnd = FCString::Atof(*Parts[1]);
		}
		else if (Parts.Num() == 1)
		{
			ClipEnd = FCString::Atof(*Parts[0]);
		}
		ClipStart = FMath::Clamp(ClipStart, 0.0f, 1.0f);
		ClipEnd = FMath::Clamp(ClipEnd, 0.0f, 1.0f);
	}

	FName TipKey = FName(RunInfo.MetaData.FindRef(TEXT("key")));
	FString TipNameStr = Decorator->GetTipName(TipKey);

	if (bShowTipName && ClipEnd > ClipStart && !TipNameStr.IsEmpty())
	{
		int32 NameLen = TipNameStr.Len();
		int32 StartIdx = FMath::FloorToInt(NameLen * ClipStart);
		int32 EndIdx = FMath::CeilToInt(NameLen * ClipEnd);
		StartIdx = FMath::Clamp(StartIdx, 0, NameLen);
		EndIdx = FMath::Clamp(EndIdx, 0, NameLen);
		if (EndIdx > StartIdx)
		{
			TipNameStr = TipNameStr.Mid(StartIdx, EndIdx - StartIdx);
		}
		else
		{
			TipNameStr.Empty();
		}
	}
	else if (!bShowTipName)
	{
		TipNameStr.Empty();
	}
	bool bIsClipped = (ClipEnd > ClipStart) && (ClipEnd - ClipStart < 1.0f);
	
	// 尺寸计算
	TipNameStyle.Font.Size = TipTextStyle.Font.Size * 0.8f;
	// 缩放计算
	auto FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	float FixedHeight = TipNameStyle.Font.Size;
	float MaxFontSize = TipNameStyle.Font.Size;
	float MinFontSize = 8.f;
	float BestFontSize = MinFontSize;
	while (MinFontSize <= MaxFontSize)
	{
		float MidFontSize = (MinFontSize + MaxFontSize) * 0.5f;
		TipNameStyle.Font.Size = MidFontSize;
		float TipNameHeight = FontMeasure->Measure(TipNameStr, TipNameStyle.Font).Y;

		if (TipNameHeight <= FixedHeight)
		{
			BestFontSize = MidFontSize;
			MinFontSize = MidFontSize + 1;
		}
		else
		{
			MaxFontSize = MidFontSize - 1;
		}
	}
	TipNameStyle.Font.Size = BestFontSize;
	// 间距计算
	float TextWidth = FontMeasure->Measure(TipText, TipTextStyle.Font).X;
	TipNameStyle.Font.LetterSpacing = Decorator->JustifyText(TipNameStr, TextWidth, TipNameStyle.Font) * 40;

	return SNew(SRichInlineText, Decorator, TipKey, bIsClipped)
		.TipTextStyle(TipTextStyle)
		.TipText(TipText)
		.TipNameStyle(TipNameStyle)
		.TipNameText(FText::FromString(TipNameStr));
	/*// 控件生成
	TSharedPtr<SImage> HoverUnderlineImage = SNew(SImage)
		.Image(&Decorator->GetTipHoverUnderlineBrush())
		.ColorAndOpacity(FLinearColor::White)
		.Visibility(EVisibility::Collapsed);

	return SNew(SButton)
		.ButtonStyle(&FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("NoBorder"))
		.ContentPadding(FMargin(0.f))
		.OnHovered_Lambda([this, TipText,TipNameStr,TipKey,HoverUnderlineImage]()
		{
			if (HoverUnderlineImage.IsValid())
			{
				HoverUnderlineImage->SetVisibility(EVisibility::Visible);
			}
			Decorator->OnHoveredTipText.Broadcast(TipText,TipNameStr,TipKey);
		})
		.OnUnhovered_Lambda([this, TipText,TipNameStr,TipKey,HoverUnderlineImage]()
		{
			if (HoverUnderlineImage.IsValid())
			{
				HoverUnderlineImage->SetVisibility(EVisibility::Collapsed);
			}
			Decorator->OnUnhoveredTipText.Broadcast(TipText,TipNameStr,TipKey);
		})
		.OnClicked_Lambda([this, TipText,TipNameStr,TipKey]()
		{
			Decorator->OnClickedTipText.Broadcast(TipText,TipNameStr,TipKey);
			return FReply::Handled();
		})
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		.VAlign(VAlign_Bottom)
		[
			HoverUnderlineImage.ToSharedRef()
		]
		+ SOverlay::Slot()
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			[
				SNew(STextBlock)
				.Text(TipText)
				.Font(TipTextStyle.Font)
				.ColorAndOpacity(TipTextStyle.ColorAndOpacity)
			]
			+ SOverlay::Slot()
			.VAlign(VAlign_Top)
			.HAlign(HAlign_Center)
			[
				SNew(STextBlock)
				.Text(FText::FromString(TipNameStr))
				.Font(TipNameStyle.Font)
				.ColorAndOpacity(TipNameStyle.ColorAndOpacity)
				.RenderTransform(FSlateRenderTransform(FVector2D(0.f, -12)))
			]
		]
	];*/
}

void SRichInlineText::Construct(const FArguments& InArgs, UTipsRichTextDecorator* InDecorator, const FName& TipKey, bool bIsWaitLink)
{
	if (bIsWaitLink)
	{
		if (InDecorator->GetWaitLinkInlineTextWidget().IsValid())
		{
			LinkedRichInlineText = InDecorator->GetWaitLinkInlineTextWidget();
			InDecorator->GetWaitLinkInlineTextWidget().Pin()->LinkedRichInlineText = SharedThis(this);
			
			InDecorator->ClearWaitLinkInlineTextWidget();
		}
		else
		{
			InDecorator->SetWaitLinkInlineTextWidget(SharedThis(this));
		}
	}

	
	HoverUnderlineImage = SNew(SImage)
	.Image(&InDecorator->GetTipHoverUnderlineBrush())
	.ColorAndOpacity(FLinearColor::White)
	.Visibility(EVisibility::Collapsed);
	
	ChildSlot
	[
		SNew(SButton)
		.ButtonStyle(&FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("NoBorder"))
		.ContentPadding(FMargin(0.f))
		.OnHovered_Lambda([InDecorator,InArgs,TipKey,this]()
		{
			if (HoverUnderlineImage.IsValid())
			{
				HoverUnderlineImage->SetVisibility(EVisibility::Visible);
			}
			if (LinkedRichInlineText.IsValid())
			{
				LinkedRichInlineText.Pin()->ShowHoverUnderline(true);
			}
			InDecorator->OnHoveredTipText.Broadcast(InArgs._TipText,InArgs._TipNameText.ToString(),TipKey);
		})
		.OnUnhovered_Lambda([InDecorator,InArgs,TipKey,this]()
		{
			if (HoverUnderlineImage.IsValid())
			{
				HoverUnderlineImage->SetVisibility(EVisibility::Collapsed);
			}
			if (LinkedRichInlineText.IsValid())
			{
				LinkedRichInlineText.Pin()->ShowHoverUnderline(false);
			}
			InDecorator->OnUnhoveredTipText.Broadcast(InArgs._TipText,InArgs._TipNameText.ToString(),TipKey);
		})
		.OnClicked_Lambda([InDecorator,InArgs,TipKey]()
		{
			InDecorator->OnClickedTipText.Broadcast(InArgs._TipText,InArgs._TipNameText.ToString(),TipKey);
			return FReply::Handled();
		})
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.VAlign(VAlign_Bottom)
			[
				HoverUnderlineImage.ToSharedRef()
			]
			+ SOverlay::Slot()
			[
				SNew(SOverlay)
				+ SOverlay::Slot()
				[
					SNew(STextBlock)
					.Text(InArgs._TipText)
					.Font(InArgs._TipTextStyle.Font)
					.ColorAndOpacity(InArgs._TipTextStyle.ColorAndOpacity)
				]
				+ SOverlay::Slot()
				.VAlign(VAlign_Top)
				.HAlign(HAlign_Center)
				[
					SNew(STextBlock)
					.Text(InArgs._TipNameText)
					.Font(InArgs._TipNameStyle.Font)
					.ColorAndOpacity(InArgs._TipNameStyle.ColorAndOpacity)
					.RenderTransform(FSlateRenderTransform(FVector2D(0.f, -12)))
				]
			]
		]
	];
}

void SRichInlineText::ShowHoverUnderline(bool bVisible)
{
	if (HoverUnderlineImage.IsValid())
	{
		HoverUnderlineImage->SetVisibility(bVisible ? EVisibility::Visible : EVisibility::Collapsed);
	}
}

FTipRichTextDecorator::FTipRichTextDecorator(URichTextBlock* InOwner, UTipsRichTextDecorator* InDecorator)
	: FRichTextDecorator(InOwner)
	  , Decorator(InDecorator)
{
}
