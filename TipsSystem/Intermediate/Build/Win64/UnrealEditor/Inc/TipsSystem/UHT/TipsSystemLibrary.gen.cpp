// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TipsSystem/Public/TipsSystemLibrary.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsSystemLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
TIPSSYSTEM_API UClass* Z_Construct_UClass_UTipsSystemLibrary();
TIPSSYSTEM_API UClass* Z_Construct_UClass_UTipsSystemLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_TipsSystem();
// End Cross Module References

// Begin Class UTipsSystemLibrary Function TipTextLineBreak
struct Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics
{
	struct TipsSystemLibrary_eventTipTextLineBreak_Parms
	{
		FSlateFontInfo FontInfo;
		FString String;
		float ContainerWidth;
		float OutLineCount;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TipsSystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FontInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContainerWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLineCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_FontInfo = { "FontInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TipsSystemLibrary_eventTipTextLineBreak_Parms, FontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontInfo_MetaData), NewProp_FontInfo_MetaData) }; // 1633227880
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TipsSystemLibrary_eventTipTextLineBreak_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_ContainerWidth = { "ContainerWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TipsSystemLibrary_eventTipTextLineBreak_Parms, ContainerWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_OutLineCount = { "OutLineCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TipsSystemLibrary_eventTipTextLineBreak_Parms, OutLineCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TipsSystemLibrary_eventTipTextLineBreak_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_FontInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_ContainerWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_OutLineCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTipsSystemLibrary, nullptr, "TipTextLineBreak", nullptr, nullptr, Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::TipsSystemLibrary_eventTipTextLineBreak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::TipsSystemLibrary_eventTipTextLineBreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTipsSystemLibrary::execTipTextLineBreak)
{
	P_GET_STRUCT_REF(FSlateFontInfo,Z_Param_Out_FontInfo);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ContainerWidth);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLineCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UTipsSystemLibrary::TipTextLineBreak(Z_Param_Out_FontInfo,Z_Param_String,Z_Param_ContainerWidth,Z_Param_Out_OutLineCount);
	P_NATIVE_END;
}
// End Class UTipsSystemLibrary Function TipTextLineBreak

// Begin Class UTipsSystemLibrary
void UTipsSystemLibrary::StaticRegisterNativesUTipsSystemLibrary()
{
	UClass* Class = UTipsSystemLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TipTextLineBreak", &UTipsSystemLibrary::execTipTextLineBreak },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTipsSystemLibrary);
UClass* Z_Construct_UClass_UTipsSystemLibrary_NoRegister()
{
	return UTipsSystemLibrary::StaticClass();
}
struct Z_Construct_UClass_UTipsSystemLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TipsSystemLibrary.h" },
		{ "ModuleRelativePath", "Public/TipsSystemLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTipsSystemLibrary_TipTextLineBreak, "TipTextLineBreak" }, // 2220642882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTipsSystemLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTipsSystemLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TipsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsSystemLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTipsSystemLibrary_Statics::ClassParams = {
	&UTipsSystemLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTipsSystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTipsSystemLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTipsSystemLibrary()
{
	if (!Z_Registration_Info_UClass_UTipsSystemLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTipsSystemLibrary.OuterSingleton, Z_Construct_UClass_UTipsSystemLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTipsSystemLibrary.OuterSingleton;
}
template<> TIPSSYSTEM_API UClass* StaticClass<UTipsSystemLibrary>()
{
	return UTipsSystemLibrary::StaticClass();
}
UTipsSystemLibrary::UTipsSystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTipsSystemLibrary);
UTipsSystemLibrary::~UTipsSystemLibrary() {}
// End Class UTipsSystemLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTipsSystemLibrary, UTipsSystemLibrary::StaticClass, TEXT("UTipsSystemLibrary"), &Z_Registration_Info_UClass_UTipsSystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTipsSystemLibrary), 71559104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_571850465(TEXT("/Script/TipsSystem"),
	Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
