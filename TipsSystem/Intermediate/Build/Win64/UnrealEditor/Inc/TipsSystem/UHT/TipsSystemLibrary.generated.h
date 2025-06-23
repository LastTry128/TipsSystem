// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TipsSystemLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateFontInfo;
#ifdef TIPSSYSTEM_TipsSystemLibrary_generated_h
#error "TipsSystemLibrary.generated.h already included, missing '#pragma once' in TipsSystemLibrary.h"
#endif
#define TIPSSYSTEM_TipsSystemLibrary_generated_h

#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTipTextLineBreak);


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTipsSystemLibrary(); \
	friend struct Z_Construct_UClass_UTipsSystemLibrary_Statics; \
public: \
	DECLARE_CLASS(UTipsSystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TipsSystem"), NO_API) \
	DECLARE_SERIALIZER(UTipsSystemLibrary)


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTipsSystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTipsSystemLibrary(UTipsSystemLibrary&&); \
	UTipsSystemLibrary(const UTipsSystemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTipsSystemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTipsSystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTipsSystemLibrary) \
	NO_API virtual ~UTipsSystemLibrary();


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_8_PROLOG
#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIPSSYSTEM_API UClass* StaticClass<class UTipsSystemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsSystemLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
