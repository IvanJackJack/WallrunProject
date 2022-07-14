// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYGROUND_CustomHUD_generated_h
#error "CustomHUD.generated.h already included, missing '#pragma once' in CustomHUD.h"
#endif
#define PLAYGROUND_CustomHUD_generated_h

#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_SPARSE_DATA
#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseGame); \
	DECLARE_FUNCTION(execSetWallrunMode); \
	DECLARE_FUNCTION(execSetGravityMode); \
	DECLARE_FUNCTION(execSetReducedGravity);


#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseGame); \
	DECLARE_FUNCTION(execSetWallrunMode); \
	DECLARE_FUNCTION(execSetGravityMode); \
	DECLARE_FUNCTION(execSetReducedGravity);


#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomHUD(); \
	friend struct Z_Construct_UClass_UCustomHUD_Statics; \
public: \
	DECLARE_CLASS(UCustomHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(UCustomHUD)


#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCustomHUD(); \
	friend struct Z_Construct_UClass_UCustomHUD_Statics; \
public: \
	DECLARE_CLASS(UCustomHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(UCustomHUD)


#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomHUD(UCustomHUD&&); \
	NO_API UCustomHUD(const UCustomHUD&); \
public:


#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomHUD(UCustomHUD&&); \
	NO_API UCustomHUD(const UCustomHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomHUD)


#define FID_Playground_Source_Playground_UI_CustomHUD_h_12_PROLOG
#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_SPARSE_DATA \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_RPC_WRAPPERS \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_INCLASS \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_UI_CustomHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_SPARSE_DATA \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_UI_CustomHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class UCustomHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_UI_CustomHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
