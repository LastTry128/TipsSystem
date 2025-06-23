// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TipsSystem/Public/TipsContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TIPSSYSTEM_API UClass* Z_Construct_UClass_UTipsContainer();
TIPSSYSTEM_API UClass* Z_Construct_UClass_UTipsContainer_NoRegister();
TIPSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogTableRow();
TIPSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTipTableRow();
UPackage* Z_Construct_UPackage__Script_TipsSystem();
// End Cross Module References

// Begin ScriptStruct FTipTableRow
static_assert(std::is_polymorphic<FTipTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTipTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TipTableRow;
class UScriptStruct* FTipTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TipTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TipTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipTableRow, (UObject*)Z_Construct_UPackage__Script_TipsSystem(), TEXT("TipTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_TipTableRow.OuterSingleton;
}
template<> TIPSSYSTEM_API UScriptStruct* StaticStruct<FTipTableRow>()
{
	return FTipTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTipTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipName_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipShortDescription_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipLongDescription_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
		{ "MultiLine", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TipName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TipShortDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TipLongDescription_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TipLongDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipTableRow, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipName = { "TipName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipTableRow, TipName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipName_MetaData), NewProp_TipName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipShortDescription = { "TipShortDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipTableRow, TipShortDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipShortDescription_MetaData), NewProp_TipShortDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipLongDescription_Inner = { "TipLongDescription", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipLongDescription = { "TipLongDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipTableRow, TipLongDescription), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipLongDescription_MetaData), NewProp_TipLongDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipShortDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipLongDescription_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipTableRow_Statics::NewProp_TipLongDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TipsSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TipTableRow",
	Z_Construct_UScriptStruct_FTipTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipTableRow_Statics::PropPointers),
	sizeof(FTipTableRow),
	alignof(FTipTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTipTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTipTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_TipTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TipTableRow.InnerSingleton, Z_Construct_UScriptStruct_FTipTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TipTableRow.InnerSingleton;
}
// End ScriptStruct FTipTableRow

// Begin ScriptStruct FDialogTableRow
static_assert(std::is_polymorphic<FDialogTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogTableRow;
class UScriptStruct* FDialogTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogTableRow, (UObject*)Z_Construct_UPackage__Script_TipsSystem(), TEXT("DialogTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_DialogTableRow.OuterSingleton;
}
template<> TIPSSYSTEM_API UScriptStruct* StaticStruct<FDialogTableRow>()
{
	return FDialogTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogText_MetaData[] = {
		{ "Category", "Dialog" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogTableRow_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogTableRow, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogTableRow_Statics::NewProp_DialogText = { "DialogText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogTableRow, DialogText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogText_MetaData), NewProp_DialogText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogTableRow_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogTableRow_Statics::NewProp_DialogText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TipsSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogTableRow",
	Z_Construct_UScriptStruct_FDialogTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTableRow_Statics::PropPointers),
	sizeof(FDialogTableRow),
	alignof(FDialogTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_DialogTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogTableRow.InnerSingleton, Z_Construct_UScriptStruct_FDialogTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogTableRow.InnerSingleton;
}
// End ScriptStruct FDialogTableRow

// Begin Class UTipsContainer
void UTipsContainer::StaticRegisterNativesUTipsContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTipsContainer);
UClass* Z_Construct_UClass_UTipsContainer_NoRegister()
{
	return UTipsContainer::StaticClass();
}
struct Z_Construct_UClass_UTipsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TipsContainer.h" },
		{ "ModuleRelativePath", "Public/TipsContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTipsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTipsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TipsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTipsContainer_Statics::ClassParams = {
	&UTipsContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UTipsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTipsContainer()
{
	if (!Z_Registration_Info_UClass_UTipsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTipsContainer.OuterSingleton, Z_Construct_UClass_UTipsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTipsContainer.OuterSingleton;
}
template<> TIPSSYSTEM_API UClass* StaticClass<UTipsContainer>()
{
	return UTipsContainer::StaticClass();
}
UTipsContainer::UTipsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTipsContainer);
UTipsContainer::~UTipsContainer() {}
// End Class UTipsContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTipTableRow::StaticStruct, Z_Construct_UScriptStruct_FTipTableRow_Statics::NewStructOps, TEXT("TipTableRow"), &Z_Registration_Info_UScriptStruct_TipTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTipTableRow), 3446224218U) },
		{ FDialogTableRow::StaticStruct, Z_Construct_UScriptStruct_FDialogTableRow_Statics::NewStructOps, TEXT("DialogTableRow"), &Z_Registration_Info_UScriptStruct_DialogTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogTableRow), 4009443066U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTipsContainer, UTipsContainer::StaticClass, TEXT("UTipsContainer"), &Z_Registration_Info_UClass_UTipsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTipsContainer), 3709116228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_1342207128(TEXT("/Script/TipsSystem"),
	Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
