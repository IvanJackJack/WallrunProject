// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterController() {}
// Cross Module References
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FInput();
	UPackage* Z_Construct_UPackage__Script_Playground();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Input;
class UScriptStruct* FInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Input.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Input.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInput, Z_Construct_UPackage__Script_Playground(), TEXT("Input"));
	}
	return Z_Registration_Info_UScriptStruct_Input.OuterSingleton;
}
template<> PLAYGROUND_API UScriptStruct* StaticStruct<FInput>()
{
	return FInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpInput_MetaData[];
#endif
		static void NewProp_bJumpInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSprintInput_MetaData[];
#endif
		static void NewProp_bSprintInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSlideInput_MetaData[];
#endif
		static void NewProp_bSlideInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput = { "moveInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInput, moveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_SetBit(void* Obj)
	{
		((FInput*)Obj)->bJumpInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput = { "bJumpInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInput), &Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput_SetBit(void* Obj)
	{
		((FInput*)Obj)->bSprintInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput = { "bSprintInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInput), &Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput_SetBit(void* Obj)
	{
		((FInput*)Obj)->bSlideInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput = { "bSlideInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInput), &Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSprintInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_bSlideInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		&NewStructOps,
		"Input",
		sizeof(FInput),
		alignof(FInput),
		Z_Construct_UScriptStruct_FInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInput()
	{
		if (!Z_Registration_Info_UScriptStruct_Input.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Input.InnerSingleton, Z_Construct_UScriptStruct_FInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Input.InnerSingleton;
	}
	DEFINE_FUNCTION(ACharacterController::execGetWallrunDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWallrunDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execGetWallrun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWallrunComponent**)Z_Param__Result=P_THIS->GetWallrun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execGetStaminaRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaminaRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execLanded)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Landed(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
		UClass* Class = ACharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStaminaRatio", &ACharacterController::execGetStaminaRatio },
			{ "GetWallrun", &ACharacterController::execGetWallrun },
			{ "GetWallrunDirection", &ACharacterController::execGetWallrunDirection },
			{ "Landed", &ACharacterController::execLanded },
			{ "OnBeginOverlap", &ACharacterController::execOnBeginOverlap },
			{ "OnEndOverlap", &ACharacterController::execOnEndOverlap },
			{ "OnHit", &ACharacterController::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics
	{
		struct CharacterController_eventGetStaminaRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventGetStaminaRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "GetStaminaRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::CharacterController_eventGetStaminaRatio_Parms), Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_GetStaminaRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_GetWallrun_Statics
	{
		struct CharacterController_eventGetWallrun_Parms
		{
			UWallrunComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventGetWallrun_Parms, ReturnValue), Z_Construct_UClass_UWallrunComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "GetWallrun", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::CharacterController_eventGetWallrun_Parms), Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_GetWallrun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_GetWallrun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics
	{
		struct CharacterController_eventGetWallrunDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventGetWallrunDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "GetWallrunDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::CharacterController_eventGetWallrunDirection_Parms), Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_GetWallrunDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_GetWallrunDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_Landed_Statics
	{
		struct CharacterController_eventLanded_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_Landed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "Landed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_Landed_Statics::CharacterController_eventLanded_Parms), Z_Construct_UFunction_ACharacterController_Landed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Landed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_Landed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Landed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_Landed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_Landed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics
	{
		struct CharacterController_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CharacterController_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterController_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::CharacterController_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics
	{
		struct CharacterController_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::CharacterController_eventOnEndOverlap_Parms), Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_OnHit_Statics
	{
		struct CharacterController_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_OnHit_Statics::CharacterController_eventOnHit_Parms), Z_Construct_UFunction_ACharacterController_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterController);
	UClass* Z_Construct_UClass_ACharacterController_NoRegister()
	{
		return ACharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallrunComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WallrunComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inputValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[];
#endif
		static void NewProp_bIsGrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpRequested_MetaData[];
#endif
		static void NewProp_bJumpRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jumpsLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverlappingPlatform_MetaData[];
#endif
		static void NewProp_bIsOverlappingPlatform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverlappingPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlapBodyCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_overlapBodyCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterSideward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterSideward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpsMax_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jumpsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaLoseAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaLoseAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaRecoverAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaRecoverAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_GetStaminaRatio, "GetStaminaRatio" }, // 2182117867
		{ &Z_Construct_UFunction_ACharacterController_GetWallrun, "GetWallrun" }, // 1260020995
		{ &Z_Construct_UFunction_ACharacterController_GetWallrunDirection, "GetWallrunDirection" }, // 2688233132
		{ &Z_Construct_UFunction_ACharacterController_Landed, "Landed" }, // 3520855159
		{ &Z_Construct_UFunction_ACharacterController_OnBeginOverlap, "OnBeginOverlap" }, // 2613736878
		{ &Z_Construct_UFunction_ACharacterController_OnEndOverlap, "OnEndOverlap" }, // 724854843
		{ &Z_Construct_UFunction_ACharacterController_OnHit, "OnHit" }, // 3330004272
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Controllers/CapsuleCharacter/CharacterController.h" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, StateMachine), Z_Construct_UClass_UStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController = { "CharacterPlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, CharacterPlayerController), Z_Construct_UClass_ACharacterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_WallrunComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_WallrunComponent = { "WallrunComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, WallrunComponent), Z_Construct_UClass_UWallrunComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_WallrunComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_WallrunComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues_MetaData[] = {
		{ "Category", "Structs" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues = { "inputValues", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, inputValues), Z_Construct_UScriptStruct_FInput, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues_MetaData)) }; // 2164437505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bIsGrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bJumpRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested = { "bJumpRequested", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsLeft_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsLeft = { "jumpsLeft", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, jumpsLeft), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bIsOverlappingPlatform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform = { "bIsOverlappingPlatform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_overlapBodyCount_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_overlapBodyCount = { "overlapBodyCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, overlapBodyCount), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_overlapBodyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_overlapBodyCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_characterForward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_characterForward = { "characterForward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, characterForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_characterSideward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_characterSideward = { "characterSideward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, characterSideward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterSideward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterSideward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_moveDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_moveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_moveDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_lookingDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_lookingDirection = { "lookingDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, lookingDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_lookingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_lookingDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_stamina_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_stamina = { "stamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, stamina), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed = { "cameraRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, cameraRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina = { "maxStamina", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, maxStamina), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax = { "jumpsMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, jumpsMax), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount = { "staminaLoseAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, staminaLoseAmount), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount = { "staminaRecoverAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, staminaRecoverAmount), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_WallrunComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bJumpRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsOverlappingPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_overlapBodyCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_characterForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_characterSideward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_moveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_lookingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
		&ACharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterController()
	{
		if (!Z_Registration_Info_UClass_ACharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterController.OuterSingleton, Z_Construct_UClass_ACharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterController.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<ACharacterController>()
	{
		return ACharacterController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics::ScriptStructInfo[] = {
		{ FInput::StaticStruct, Z_Construct_UScriptStruct_FInput_Statics::NewStructOps, TEXT("Input"), &Z_Registration_Info_UScriptStruct_Input, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInput), 2164437505U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 1448811026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_3924945682(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
