// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/FiniteStateMachine/States/IdleState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleState() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UIdleState_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UIdleState();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateBase();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	DEFINE_FUNCTION(UIdleState::execTransitionToGroundMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransitionToGroundMoving();
		P_NATIVE_END;
	}
	void UIdleState::StaticRegisterNativesUIdleState()
	{
		UClass* Class = UIdleState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TransitionToGroundMoving", &UIdleState::execTransitionToGroundMoving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics
	{
		struct IdleState_eventTransitionToGroundMoving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IdleState_eventTransitionToGroundMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IdleState_eventTransitionToGroundMoving_Parms), &Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FiniteStateMachine/States/IdleState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdleState, nullptr, "TransitionToGroundMoving", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::IdleState_eventTransitionToGroundMoving_Parms), Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdleState_TransitionToGroundMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIdleState_TransitionToGroundMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleState);
	UClass* Z_Construct_UClass_UIdleState_NoRegister()
	{
		return UIdleState::StaticClass();
	}
	struct Z_Construct_UClass_UIdleState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIdleState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIdleState_TransitionToGroundMoving, "TransitionToGroundMoving" }, // 3875738254
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FiniteStateMachine/States/IdleState.h" },
		{ "ModuleRelativePath", "FiniteStateMachine/States/IdleState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleState_Statics::ClassParams = {
		&UIdleState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleState()
	{
		if (!Z_Registration_Info_UClass_UIdleState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIdleState.OuterSingleton, Z_Construct_UClass_UIdleState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIdleState.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UIdleState>()
	{
		return UIdleState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleState);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleState, UIdleState::StaticClass, TEXT("UIdleState"), &Z_Registration_Info_UClass_UIdleState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleState), 3183052928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_1137846193(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_IdleState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
