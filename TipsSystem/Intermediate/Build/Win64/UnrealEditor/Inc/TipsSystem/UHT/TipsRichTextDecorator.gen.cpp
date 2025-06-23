// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TipsSystem/Public/TipsRichTextDecorator.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsRichTextDecorator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
TIPSSYSTEM_API UClass* Z_Construct_UClass_UTipsRichTextDecorator();
TIPSSYSTEM_API UClass* Z_Construct_UClass_UTipsRichTextDecorator_NoRegister();
TIPSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature();
TIPSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
UPackage* Z_Construct_UPackage__Script_TipsSystem();
// End Cross Module References

// Begin Delegate FTipTextDelegate
struct Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics
{
	struct _Script_TipsSystem_eventTipTextDelegate_Parms
	{
		FText InTipText;
		FString InTipName;
		FName InTipRowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTipText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTipName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTipRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InTipText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTipName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTipRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::NewProp_InTipText = { "InTipText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TipsSystem_eventTipTextDelegate_Parms, InTipText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTipText_MetaData), NewProp_InTipText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::NewProp_InTipName = { "InTipName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TipsSystem_eventTipTextDelegate_Parms, InTipName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTipName_MetaData), NewProp_InTipName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::NewProp_InTipRowName = { "InTipRowName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TipsSystem_eventTipTextDelegate_Parms, InTipRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTipRowName_MetaData), NewProp_InTipRowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::NewProp_InTipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::NewProp_InTipName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::NewProp_InTipRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TipsSystem, nullptr, "TipTextDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::_Script_TipsSystem_eventTipTextDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::_Script_TipsSystem_eventTipTextDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTipTextDelegate_DelegateWrapper(const FMulticastScriptDelegate& TipTextDelegate, FText const& InTipText, const FString& InTipName, FName const& InTipRowName)
{
	struct _Script_TipsSystem_eventTipTextDelegate_Parms
	{
		FText InTipText;
		FString InTipName;
		FName InTipRowName;
	};
	_Script_TipsSystem_eventTipTextDelegate_Parms Parms;
	Parms.InTipText=InTipText;
	Parms.InTipName=InTipName;
	Parms.InTipRowName=InTipRowName;
	TipTextDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTipTextDelegate

// Begin Delegate FUnderlineDelegate
struct Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics
{
	struct _Script_TipsSystem_eventUnderlineDelegate_Parms
	{
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((_Script_TipsSystem_eventUnderlineDelegate_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TipsSystem_eventUnderlineDelegate_Parms), &Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TipsSystem, nullptr, "UnderlineDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::_Script_TipsSystem_eventUnderlineDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::_Script_TipsSystem_eventUnderlineDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUnderlineDelegate_DelegateWrapper(const FScriptDelegate& UnderlineDelegate, bool bVisible)
{
	struct _Script_TipsSystem_eventUnderlineDelegate_Parms
	{
		bool bVisible;
	};
	_Script_TipsSystem_eventUnderlineDelegate_Parms Parms;
	Parms.bVisible=bVisible ? true : false;
	UnderlineDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FUnderlineDelegate

// Begin Class UTipsRichTextDecorator
void UTipsRichTextDecorator::StaticRegisterNativesUTipsRichTextDecorator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTipsRichTextDecorator);
UClass* Z_Construct_UClass_UTipsRichTextDecorator_NoRegister()
{
	return UTipsRichTextDecorator::StaticClass();
}
struct Z_Construct_UClass_UTipsRichTextDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UTipsRichTextDecorator\n" },
#endif
		{ "IncludePath", "TipsRichTextDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UTipsRichTextDecorator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHoveredTipText_MetaData[] = {
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnhoveredTipText_MetaData[] = {
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClickedTipText_MetaData[] = {
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipsSet_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/TipsSystem.TipTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipTextColor_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipNameColor_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipHoverUnderlineBrush_MetaData[] = {
		{ "Category", "Tips" },
		{ "ModuleRelativePath", "Public/TipsRichTextDecorator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredTipText;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhoveredTipText;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClickedTipText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TipsSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipNameColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipHoverUnderlineBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTipsRichTextDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_OnHoveredTipText = { "OnHoveredTipText", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, OnHoveredTipText), Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHoveredTipText_MetaData), NewProp_OnHoveredTipText_MetaData) }; // 733141951
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_OnUnhoveredTipText = { "OnUnhoveredTipText", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, OnUnhoveredTipText), Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnhoveredTipText_MetaData), NewProp_OnUnhoveredTipText_MetaData) }; // 733141951
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_OnClickedTipText = { "OnClickedTipText", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, OnClickedTipText), Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClickedTipText_MetaData), NewProp_OnClickedTipText_MetaData) }; // 733141951
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipsSet = { "TipsSet", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, TipsSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipsSet_MetaData), NewProp_TipsSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipTextColor = { "TipTextColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, TipTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipTextColor_MetaData), NewProp_TipTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipNameColor = { "TipNameColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, TipNameColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipNameColor_MetaData), NewProp_TipNameColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipHoverUnderlineBrush = { "TipHoverUnderlineBrush", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTipsRichTextDecorator, TipHoverUnderlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipHoverUnderlineBrush_MetaData), NewProp_TipHoverUnderlineBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTipsRichTextDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_OnHoveredTipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_OnUnhoveredTipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_OnClickedTipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipsSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipNameColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTipsRichTextDecorator_Statics::NewProp_TipHoverUnderlineBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsRichTextDecorator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTipsRichTextDecorator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_TipsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsRichTextDecorator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTipsRichTextDecorator_Statics::ClassParams = {
	&UTipsRichTextDecorator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTipsRichTextDecorator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTipsRichTextDecorator_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsRichTextDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UTipsRichTextDecorator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTipsRichTextDecorator()
{
	if (!Z_Registration_Info_UClass_UTipsRichTextDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTipsRichTextDecorator.OuterSingleton, Z_Construct_UClass_UTipsRichTextDecorator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTipsRichTextDecorator.OuterSingleton;
}
template<> TIPSSYSTEM_API UClass* StaticClass<UTipsRichTextDecorator>()
{
	return UTipsRichTextDecorator::StaticClass();
}
UTipsRichTextDecorator::UTipsRichTextDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTipsRichTextDecorator);
UTipsRichTextDecorator::~UTipsRichTextDecorator() {}
// End Class UTipsRichTextDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTipsRichTextDecorator, UTipsRichTextDecorator::StaticClass, TEXT("UTipsRichTextDecorator"), &Z_Registration_Info_UClass_UTipsRichTextDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTipsRichTextDecorator), 2718815124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_283736664(TEXT("/Script/TipsSystem"),
	Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
