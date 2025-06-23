#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TipsSystemLibrary.generated.h"


UCLASS()
class TIPSSYSTEM_API UTipsSystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static FString TipTextLineBreak(const FSlateFontInfo& FontInfo, const FString& String, float ContainerWidth, float& OutLineCount);
};
