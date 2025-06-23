#include "TipsSystemLibrary.h"

#include "Fonts/FontMeasure.h"

FString UTipsSystemLibrary::TipTextLineBreak(const FSlateFontInfo& FontInfo, const FString& String, float ContainerWidth, float& OutLineCount)
{
    TSharedPtr<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();

    FString Result;
    float CharWidth = 0;
    bool bInTag = false;
    FString TagBuffer;
    FString TagStart; // 记录完整起始标签
    int TagTextLength = 0; // 标签包裹文本长度
    int OriginTagTextLength = 0;

    for (int32 i = 0; i < String.Len(); ++i)
    {
        TCHAR Ch = String[i];

        // 处理标签
        if (Ch == '<')
        {
            int32 TagEnd = String.Find(TEXT(">"), ESearchCase::IgnoreCase, ESearchDir::FromStart, i);
            if (TagEnd != INDEX_NONE)
            {
                FString Tag = String.Mid(i, TagEnd - i + 1);
                // 处理标签结束
                if (Tag.StartsWith(TEXT("</")))
                {

                    // 标签结束，写入缓冲区内容和结束标签
                    Result += TagBuffer;
                    Result += Tag;
                    TagBuffer.Empty();
                    bInTag = false;
                    TagStart.Empty();
                    OriginTagTextLength = 0;
                    TagTextLength = 0;
                }
                // 处理标签开始
                else if (Tag.StartsWith(TEXT("<")) && !Tag.StartsWith(TEXT("</")))
                {
                    bInTag = true;
                    TagStart = Tag;
                    Result += Tag;

                    // 计算原始包裹文本长度
                    OriginTagTextLength = 0;
                    int32 TagContentStart = TagEnd + 1;
                    int32 TagContentEnd = String.Find(TEXT("</"), ESearchCase::IgnoreCase, ESearchDir::FromStart, TagContentStart);
                    if (TagContentEnd != INDEX_NONE)
                    {
                        for (int32 j = TagContentStart; j < TagContentEnd; ++j)
                        {
                            if (String[j] != '<' && String[j] != '>')
                            {
                                ++OriginTagTextLength;
                            }
                        }
                    }
                    TagTextLength = 0;
                }
                i = TagEnd;
                continue;
            }
        }

        if (bInTag)
        {
            TagBuffer.AppendChar(Ch);
            ++TagTextLength;
            FString CharStr(1, &Ch);
            CharWidth += FontMeasure->Measure(CharStr, FontInfo).X;
            if (CharWidth >= ContainerWidth)
            {
                // 计算比值
                float Ratio = OriginTagTextLength > 0 ? static_cast<float>(TagTextLength) / OriginTagTextLength : 0.0f;
                FString RatioAAttr = FString::Printf(TEXT(" ratio=\"%.2f,%.2f\""), 0.0f,Ratio);

                int32 InsertAPos = TagStart.Find(TEXT(">"));
                if (InsertAPos != INDEX_NONE)
                {
                    FString NewTagAStart = TagStart.Left(InsertAPos) + RatioAAttr + TagStart.Mid(InsertAPos);
                    
                    int32 LastTagPos = Result.Find(TagStart, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
                    if (LastTagPos != INDEX_NONE)
                    {
                        Result.RemoveAt(LastTagPos, TagStart.Len());
                        Result.InsertAt(LastTagPos, NewTagAStart);
                    }
                }

                Result += TagBuffer;
                Result += TEXT("</>");
                Result += TEXT("\n");
                
                int32 InsertBPos = TagStart.Find(TEXT(">"));
                FString NewTagBStart = TagStart;
                if (InsertBPos != INDEX_NONE)
                {
                    FString RatioBAttr = FString::Printf(TEXT(" ratio=\"%.2f,%.2f\""), Ratio,1.0f);
                    NewTagBStart = TagStart.Left(InsertBPos) + RatioBAttr + TagStart.Mid(InsertBPos);
                }
                Result += NewTagBStart;
                TagBuffer.Empty();
                CharWidth = 0;
                TagTextLength = 0;
            }
        }
        else
        {
            Result.AppendChar(Ch);
            if (Ch != '\n')
            {
                FString CharStr(1, &Ch);
                CharWidth += FontMeasure->Measure(CharStr, FontInfo).X;
                if (CharWidth >= ContainerWidth)
                {
                    Result.AppendChar('\n');
                    CharWidth = 0;
                }
            }
        }
    }

    // 处理剩余的标签内容
    if (!TagBuffer.IsEmpty())
    {
        Result += TagBuffer;
    }

    int32 LineCount = 1;
    for (int32 i = 0; i < Result.Len(); ++i)
    {
        if (Result[i] == '\n')
        {
            ++LineCount;
        }
    }
    OutLineCount = static_cast<float>(LineCount);

    if (OutLineCount == 0 && !Result.IsEmpty())
    {
        OutLineCount = 1; // 如果没有换行，至少算一行
    }
    
    // 打结果
    // 印UE_LOG(LogTemp, Log, TEXT("Result: %s"), *Result);

    return Result;
}
