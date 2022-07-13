// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYGROUND_IdleState_generated_h
#error "IdleState.generated.h already included, missing '#pragma once' in IdleState.h"
#endif
#define PLAYGROUND_IdleState_generated_h

#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_SPARSE_DATA
#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransitionToGroundMoving);


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransitionToGroundMoving);


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIdleState(); \
	friend struct Z_Construct_UClass_UIdleState_Statics; \
public: \
	DECLARE_CLASS(UIdleState, UStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(UIdleState)


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUIdleState(); \
	friend struct Z_Construct_UClass_UIdleState_Statics; \
public: \
	DECLARE_CLASS(UIdleState, UStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(UIdleState)


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIdleState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIdleState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdleState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdleState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdleState(UIdleState&&); \
	NO_API UIdleState(const UIdleState&); \
public:


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIdleState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdleState(UIdleState&&); \
	NO_API UIdleState(const UIdleState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdleState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdleState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIdleState)


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_9_PROLOG
#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_SPARSE_DATA \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_RPC_WRAPPERS \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_INCLASS \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_SPARSE_DATA \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_INCLASS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class UIdleState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
