// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TipsContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIPSSYSTEM_TipsContainer_generated_h
#error "TipsContainer.generated.h already included, missing '#pragma once' in TipsContainer.h"
#endif
#define TIPSSYSTEM_TipsContainer_generated_h

#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTipTableRow_Statics; \
	TIPSSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TIPSSYSTEM_API UScriptStruct* StaticStruct<struct FTipTableRow>();

#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogTableRow_Statics; \
	TIPSSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TIPSSYSTEM_API UScriptStruct* StaticStruct<struct FDialogTableRow>();

#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTipsContainer(); \
	friend struct Z_Construct_UClass_UTipsContainer_Statics; \
public: \
	DECLARE_CLASS(UTipsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TipsSystem"), NO_API) \
	DECLARE_SERIALIZER(UTipsContainer)


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTipsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTipsContainer(UTipsContainer&&); \
	UTipsContainer(const UTipsContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTipsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTipsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTipsContainer) \
	NO_API virtual ~UTipsContainer();


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_35_PROLOG
#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_38_INCLASS_NO_PURE_DECLS \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIPSSYSTEM_API UClass* StaticClass<class UTipsContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
