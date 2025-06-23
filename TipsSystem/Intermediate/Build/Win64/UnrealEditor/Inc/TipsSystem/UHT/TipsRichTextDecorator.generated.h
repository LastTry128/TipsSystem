// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TipsRichTextDecorator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIPSSYSTEM_TipsRichTextDecorator_generated_h
#error "TipsRichTextDecorator.generated.h already included, missing '#pragma once' in TipsRichTextDecorator.h"
#endif
#define TIPSSYSTEM_TipsRichTextDecorator_generated_h

#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_7_DELEGATE \
TIPSSYSTEM_API void FTipTextDelegate_DelegateWrapper(const FMulticastScriptDelegate& TipTextDelegate, FText const& InTipText, const FString& InTipName, FName const& InTipRowName);


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_8_DELEGATE \
TIPSSYSTEM_API void FUnderlineDelegate_DelegateWrapper(const FScriptDelegate& UnderlineDelegate, bool bVisible);


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTipsRichTextDecorator(); \
	friend struct Z_Construct_UClass_UTipsRichTextDecorator_Statics; \
public: \
	DECLARE_CLASS(UTipsRichTextDecorator, URichTextBlockDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TipsSystem"), NO_API) \
	DECLARE_SERIALIZER(UTipsRichTextDecorator)


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTipsRichTextDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTipsRichTextDecorator(UTipsRichTextDecorator&&); \
	UTipsRichTextDecorator(const UTipsRichTextDecorator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTipsRichTextDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTipsRichTextDecorator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTipsRichTextDecorator) \
	NO_API virtual ~UTipsRichTextDecorator();


#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_12_PROLOG
#define FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_15_INCLASS_NO_PURE_DECLS \
	FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIPSSYSTEM_API UClass* StaticClass<class UTipsRichTextDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorkHouse_UE5_TipsRichText_Plugins_TipsSystem_Source_TipsSystem_Public_TipsRichTextDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
