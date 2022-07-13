// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/UI/CustomHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomHUD() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomHUD_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomHUD::execCloseGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetWallrunMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_wallrunMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_keyMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWallrunMode(Z_Param_wallrunMode,Z_Param_keyMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetGravityMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityMode(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetReducedGravity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReducedGravity(Z_Param_value);
		P_NATIVE_END;
	}
	void UCustomHUD::StaticRegisterNativesUCustomHUD()
	{
		UClass* Class = UCustomHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseGame", &UCustomHUD::execCloseGame },
			{ "SetGravityMode", &UCustomHUD::execSetGravityMode },
			{ "SetReducedGravity", &UCustomHUD::execSetReducedGravity },
			{ "SetWallrunMode", &UCustomHUD::execSetWallrunMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomHUD_CloseGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_CloseGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_CloseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "CloseGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_CloseGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_CloseGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_CloseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_CloseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics
	{
		struct CustomHUD_eventSetGravityMode_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetGravityMode_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetGravityMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::CustomHUD_eventSetGravityMode_Parms), Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetGravityMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetGravityMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics
	{
		struct CustomHUD_eventSetReducedGravity_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetReducedGravity_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetReducedGravity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::CustomHUD_eventSetReducedGravity_Parms), Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetReducedGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetReducedGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics
	{
		struct CustomHUD_eventSetWallrunMode_Parms
		{
			int32 wallrunMode;
			int32 keyMode;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_wallrunMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_keyMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::NewProp_wallrunMode = { "wallrunMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetWallrunMode_Parms, wallrunMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::NewProp_keyMode = { "keyMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetWallrunMode_Parms, keyMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::NewProp_wallrunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::NewProp_keyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetWallrunMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::CustomHUD_eventSetWallrunMode_Parms), Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetWallrunMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetWallrunMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomHUD);
	UClass* Z_Construct_UClass_UCustomHUD_NoRegister()
	{
		return UCustomHUD::StaticClass();
	}
	struct Z_Construct_UClass_UCustomHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomHUD_CloseGame, "CloseGame" }, // 1905079554
		{ &Z_Construct_UFunction_UCustomHUD_SetGravityMode, "SetGravityMode" }, // 1088535885
		{ &Z_Construct_UFunction_UCustomHUD_SetReducedGravity, "SetReducedGravity" }, // 3385571336
		{ &Z_Construct_UFunction_UCustomHUD_SetWallrunMode, "SetWallrunMode" }, // 3667336452
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/CustomHUD.h" },
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController_MetaData[] = {
		{ "Category", "CustomHUD" },
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController = { "CharacterController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomHUD, CharacterController), Z_Construct_UClass_ACharacterController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine_MetaData[] = {
		{ "Category", "CustomHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomHUD, StateMachine), Z_Construct_UClass_UStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomHUD_Statics::ClassParams = {
		&UCustomHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomHUD()
	{
		if (!Z_Registration_Info_UClass_UCustomHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomHUD.OuterSingleton, Z_Construct_UClass_UCustomHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomHUD.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UCustomHUD>()
	{
		return UCustomHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomHUD);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomHUD, UCustomHUD::StaticClass, TEXT("UCustomHUD"), &Z_Registration_Info_UClass_UCustomHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHUD), 1352095146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_831911996(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
