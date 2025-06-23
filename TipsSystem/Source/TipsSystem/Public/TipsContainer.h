#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TipsContainer.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FTipTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tips")
	FString Group;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tips")
	FString TipName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tips", meta = (MultiLine = true))
	FString TipShortDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tips", meta = (MultiLine = true))
	TArray<FString> TipLongDescription;
};

USTRUCT(Blueprintable, BlueprintType)
struct FDialogTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialog")
	FString CharacterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialog")
	FString DialogText;
};

UCLASS()
class TIPSSYSTEM_API UTipsContainer : public UObject
{
	GENERATED_BODY()

	
	
};
