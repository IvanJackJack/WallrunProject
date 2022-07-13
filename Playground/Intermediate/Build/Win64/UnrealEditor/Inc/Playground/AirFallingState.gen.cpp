// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/FiniteStateMachine/States/AirFallingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirFallingState() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UAirFallingState_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UAirFallingState();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateBase();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UAirFallingState::StaticRegisterNativesUAirFallingState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAirFallingState);
	UClass* Z_Construct_UClass_UAirFallingState_NoRegister()
	{
		return UAirFallingState::StaticClass();
	}
	struct Z_Construct_UClass_UAirFallingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAirFallingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAirFallingState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FiniteStateMachine/States/AirFallingState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FiniteStateMachine/States/AirFallingState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAirFallingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirFallingState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAirFallingState_Statics::ClassParams = {
		&UAirFallingState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAirFallingState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAirFallingState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAirFallingState()
	{
		if (!Z_Registration_Info_UClass_UAirFallingState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAirFallingState.OuterSingleton, Z_Construct_UClass_UAirFallingState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAirFallingState.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UAirFallingState>()
	{
		return UAirFallingState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAirFallingState);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirFallingState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirFallingState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAirFallingState, UAirFallingState::StaticClass, TEXT("UAirFallingState"), &Z_Registration_Info_UClass_UAirFallingState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAirFallingState), 3557263814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirFallingState_h_555848346(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirFallingState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirFallingState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
