// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsSystem_init() {}
	TIPSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature();
	TIPSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TipsSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TipsSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_TipsSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TipsSystem_TipTextDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TipsSystem_UnderlineDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TipsSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA6E52F06,
				0x5FB92F96,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TipsSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TipsSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TipsSystem(Z_Construct_UPackage__Script_TipsSystem, TEXT("/Script/TipsSystem"), Z_Registration_Info_UPackage__Script_TipsSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA6E52F06, 0x5FB92F96));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
