// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYGROUND_WallrunComponent_generated_h
#error "WallrunComponent.generated.h already included, missing '#pragma once' in WallrunComponent.h"
#endif
#define PLAYGROUND_WallrunComponent_generated_h

#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_SPARSE_DATA
#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCharacterNearWall); \
	DECLARE_FUNCTION(execHasValidHit);


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCharacterNearWall); \
	DECLARE_FUNCTION(execHasValidHit);


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWallrunComponent(); \
	friend struct Z_Construct_UClass_UWallrunComponent_Statics; \
public: \
	DECLARE_CLASS(UWallrunComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(UWallrunComponent)


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUWallrunComponent(); \
	friend struct Z_Construct_UClass_UWallrunComponent_Statics; \
public: \
	DECLARE_CLASS(UWallrunComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(UWallrunComponent)


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWallrunComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWallrunComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWallrunComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWallrunComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWallrunComponent(UWallrunComponent&&); \
	NO_API UWallrunComponent(const UWallrunComponent&); \
public:


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWallrunComponent(UWallrunComponent&&); \
	NO_API UWallrunComponent(const UWallrunComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWallrunComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWallrunComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWallrunComponent)


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_52_PROLOG
#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_SPARSE_DATA \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_RPC_WRAPPERS \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_INCLASS \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_SPARSE_DATA \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_INCLASS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class UWallrunComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h


#define FOREACH_ENUM_EWALLRUNSIDE(op) \
	op(EWallrunSide::Left) \
	op(EWallrunSide::Right) \
	op(EWallrunSide::Front) \
	op(EWallrunSide::None) 

enum class EWallrunSide : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunSide>();

#define FOREACH_ENUM_EWALLRUNENDREASON(op) \
	op(EWallrunEndreason::LowVelocity) \
	op(EWallrunEndreason::Jump) \
	op(EWallrunEndreason::SideChange) \
	op(EWallrunEndreason::NoHit) \
	op(EWallrunEndreason::WrongDirection) \
	op(EWallrunEndreason::WrongMode) \
	op(EWallrunEndreason::Forced) 

enum class EWallrunEndreason : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunEndreason>();

#define FOREACH_ENUM_EWALLRUNMODE(op) \
	op(EWallrunMode::Projected) \
	op(EWallrunMode::Visual) \
	op(EWallrunMode::Hybrid) \
	op(EWallrunMode::None) 

enum class EWallrunMode : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunMode>();

#define FOREACH_ENUM_EGRAVITYMODE(op) \
	op(EGravityMode::Zero) \
	op(EGravityMode::Reduced) 

enum class EGravityMode : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EGravityMode>();

#define FOREACH_ENUM_EWALLRUNENDCONDITIONS(op) \
	op(EWallrunEndConditions::Standard) \
	op(EWallrunEndConditions::Stamina) 

enum class EWallrunEndConditions : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunEndConditions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
