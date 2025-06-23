#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "TipsRichTextDecorator.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTipTextDelegate, const FText&, InTipText, const FString&, InTipName, const FName&, InTipRowName);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUnderlineDelegate, const bool, bVisible);

// UTipsRichTextDecorator

UCLASS(Abstract, Blueprintable)
class TIPSSYSTEM_API UTipsRichTextDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FTipTextDelegate OnHoveredTipText;
	UPROPERTY(BlueprintAssignable)
	FTipTextDelegate OnUnhoveredTipText;
	UPROPERTY(BlueprintAssignable)
	FTipTextDelegate OnClickedTipText;
	
protected:
	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Tips", meta = (RequiredAssetDataTags = "RowStructure=/Script/TipsSystem.TipTableRow"))
	TObjectPtr<UDataTable> TipsSet;
	UPROPERTY(EditAnywhere, Category = "Tips")
	FLinearColor TipTextColor = FLinearColor::Yellow;
	UPROPERTY(EditAnywhere, Category = "Tips")
	FLinearColor TipNameColor = FLinearColor::White;
	UPROPERTY(EditAnywhere, Category = "Tips")
	FSlateBrush TipHoverUnderlineBrush;

public:
	float JustifyText(const FString& Text, float ContainerWidth, const FSlateFontInfo& FontInfo);
	FString GetTipName(FName TipKey) const;
	const FLinearColor& GetTipTextColor() const { return TipTextColor; }
	const FLinearColor& GetTipNameColor() const { return TipNameColor; }
	const FSlateBrush& GetTipHoverUnderlineBrush() const { return TipHoverUnderlineBrush; }

private:
	TWeakPtr<class SRichInlineText> InlineTextWidget;
public:
	void SetWaitLinkInlineTextWidget(const TWeakPtr<SRichInlineText>& InWidget){ InlineTextWidget = InWidget;}
	TWeakPtr<SRichInlineText> GetWaitLinkInlineTextWidget() const { return InlineTextWidget; }
	void ClearWaitLinkInlineTextWidget()
	{
		if (InlineTextWidget.IsValid())
			InlineTextWidget.Reset();
	}
};

class SRichInlineText : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SRichInlineText)
	{}
		SLATE_ARGUMENT(FTextBlockStyle, TipTextStyle)
		SLATE_ARGUMENT(FText, TipText)
		SLATE_ARGUMENT(FTextBlockStyle, TipNameStyle)
		SLATE_ARGUMENT(FText, TipNameText)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, UTipsRichTextDecorator* InDecorator, const FName& TipKey, bool bIsWaitLink);

private:
	TSharedPtr<SImage> HoverUnderlineImage;
public:
	TWeakPtr<SRichInlineText> LinkedRichInlineText;
	
public:
	void ShowHoverUnderline(bool bVisible);
};

// FTipRichTextDecorator

class FTipRichTextDecorator : public FRichTextDecorator
{
public:
	FTipRichTextDecorator(URichTextBlock* InOwner, UTipsRichTextDecorator* InDecorator);

	virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override;
	virtual TSharedPtr<SWidget> CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const override;

private:
	UTipsRichTextDecorator* Decorator;
};
