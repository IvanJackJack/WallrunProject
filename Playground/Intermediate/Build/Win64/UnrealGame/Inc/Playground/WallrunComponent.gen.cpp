// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/CustomComponents/WallrunComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallrunComponent() {}
// Cross Module References
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunSide();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunEndreason();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunMode();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EGravityMode();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunEndConditions();
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunSide;
	static UEnum* EWallrunSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunSide, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunSide"));
		}
		return Z_Registration_Info_UEnum_EWallrunSide.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunSide>()
	{
		return EWallrunSide_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enumerators[] = {
		{ "EWallrunSide::Left", (int64)EWallrunSide::Left },
		{ "EWallrunSide::Right", (int64)EWallrunSide::Right },
		{ "EWallrunSide::Front", (int64)EWallrunSide::Front },
		{ "EWallrunSide::None", (int64)EWallrunSide::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Front.DisplayName", "Front" },
		{ "Front.Name", "EWallrunSide::Front" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EWallrunSide::Left" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWallrunSide::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EWallrunSide::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunSide",
		"EWallrunSide",
		Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunSide()
	{
		if (!Z_Registration_Info_UEnum_EWallrunSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunSide.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunSide.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunEndreason;
	static UEnum* EWallrunEndreason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunEndreason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunEndreason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunEndreason, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunEndreason"));
		}
		return Z_Registration_Info_UEnum_EWallrunEndreason.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunEndreason>()
	{
		return EWallrunEndreason_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunEndreason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enumerators[] = {
		{ "EWallrunEndreason::LowVelocity", (int64)EWallrunEndreason::LowVelocity },
		{ "EWallrunEndreason::Jump", (int64)EWallrunEndreason::Jump },
		{ "EWallrunEndreason::SideChange", (int64)EWallrunEndreason::SideChange },
		{ "EWallrunEndreason::NoHit", (int64)EWallrunEndreason::NoHit },
		{ "EWallrunEndreason::WrongDirection", (int64)EWallrunEndreason::WrongDirection },
		{ "EWallrunEndreason::WrongMode", (int64)EWallrunEndreason::WrongMode },
		{ "EWallrunEndreason::Forced", (int64)EWallrunEndreason::Forced },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Forced.DisplayName", "Forced" },
		{ "Forced.Name", "EWallrunEndreason::Forced" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EWallrunEndreason::Jump" },
		{ "LowVelocity.DisplayName", "LowVelocity" },
		{ "LowVelocity.Name", "EWallrunEndreason::LowVelocity" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "NoHit.DisplayName", "NoHit" },
		{ "NoHit.Name", "EWallrunEndreason::NoHit" },
		{ "SideChange.DisplayName", "SideChange" },
		{ "SideChange.Name", "EWallrunEndreason::SideChange" },
		{ "WrongDirection.DisplayName", "WrongDirection" },
		{ "WrongDirection.Name", "EWallrunEndreason::WrongDirection" },
		{ "WrongMode.DisplayName", "WrongMode" },
		{ "WrongMode.Name", "EWallrunEndreason::WrongMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunEndreason",
		"EWallrunEndreason",
		Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunEndreason()
	{
		if (!Z_Registration_Info_UEnum_EWallrunEndreason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunEndreason.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunEndreason.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunMode;
	static UEnum* EWallrunMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunMode, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunMode"));
		}
		return Z_Registration_Info_UEnum_EWallrunMode.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunMode>()
	{
		return EWallrunMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enumerators[] = {
		{ "EWallrunMode::Projected", (int64)EWallrunMode::Projected },
		{ "EWallrunMode::Visual", (int64)EWallrunMode::Visual },
		{ "EWallrunMode::Hybrid", (int64)EWallrunMode::Hybrid },
		{ "EWallrunMode::None", (int64)EWallrunMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hybrid.DisplayName", "Hybrid" },
		{ "Hybrid.Name", "EWallrunMode::Hybrid" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWallrunMode::None" },
		{ "Projected.Comment", "// Horizontal UMETA(DisplayName = \"Horizontal\"),\n// Vertical UMETA(DisplayName = \"Vertical\"),\n" },
		{ "Projected.DisplayName", "Projected" },
		{ "Projected.Name", "EWallrunMode::Projected" },
		{ "Projected.ToolTip", "Horizontal UMETA(DisplayName = \"Horizontal\"),\nVertical UMETA(DisplayName = \"Vertical\")," },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EWallrunMode::Visual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunMode",
		"EWallrunMode",
		Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunMode()
	{
		if (!Z_Registration_Info_UEnum_EWallrunMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunMode.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGravityMode;
	static UEnum* EGravityMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGravityMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGravityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EGravityMode, Z_Construct_UPackage__Script_Playground(), TEXT("EGravityMode"));
		}
		return Z_Registration_Info_UEnum_EGravityMode.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EGravityMode>()
	{
		return EGravityMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EGravityMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EGravityMode_Statics::Enumerators[] = {
		{ "EGravityMode::Zero", (int64)EGravityMode::Zero },
		{ "EGravityMode::Reduced", (int64)EGravityMode::Reduced },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EGravityMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "Reduced.DisplayName", "Reduced" },
		{ "Reduced.Name", "EGravityMode::Reduced" },
		{ "Zero.DisplayName", "Zero" },
		{ "Zero.Name", "EGravityMode::Zero" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EGravityMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EGravityMode",
		"EGravityMode",
		Z_Construct_UEnum_Playground_EGravityMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EGravityMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EGravityMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EGravityMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EGravityMode()
	{
		if (!Z_Registration_Info_UEnum_EGravityMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGravityMode.InnerSingleton, Z_Construct_UEnum_Playground_EGravityMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGravityMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunEndConditions;
	static UEnum* EWallrunEndConditions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunEndConditions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunEndConditions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunEndConditions, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunEndConditions"));
		}
		return Z_Registration_Info_UEnum_EWallrunEndConditions.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunEndConditions>()
	{
		return EWallrunEndConditions_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::Enumerators[] = {
		{ "EWallrunEndConditions::Standard", (int64)EWallrunEndConditions::Standard },
		{ "EWallrunEndConditions::Stamina", (int64)EWallrunEndConditions::Stamina },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "Stamina.DisplayName", "Stamina" },
		{ "Stamina.Name", "EWallrunEndConditions::Stamina" },
		{ "Standard.DisplayName", "Standard" },
		{ "Standard.Name", "EWallrunEndConditions::Standard" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunEndConditions",
		"EWallrunEndConditions",
		Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunEndConditions()
	{
		if (!Z_Registration_Info_UEnum_EWallrunEndConditions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunEndConditions.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunEndConditions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunEndConditions.InnerSingleton;
	}
	DEFINE_FUNCTION(UWallrunComponent::execIsCharacterNearWall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterNearWall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWallrunComponent::execHasValidHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidHit();
		P_NATIVE_END;
	}
	void UWallrunComponent::StaticRegisterNativesUWallrunComponent()
	{
		UClass* Class = UWallrunComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasValidHit", &UWallrunComponent::execHasValidHit },
			{ "IsCharacterNearWall", &UWallrunComponent::execIsCharacterNearWall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics
	{
		struct WallrunComponent_eventHasValidHit_Parms
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
	void Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WallrunComponent_eventHasValidHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WallrunComponent_eventHasValidHit_Parms), &Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// bool LookingDownOverThreshold();\n" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "ToolTip", "bool LookingDownOverThreshold();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallrunComponent, nullptr, "HasValidHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::WallrunComponent_eventHasValidHit_Parms), Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallrunComponent_HasValidHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallrunComponent_HasValidHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics
	{
		struct WallrunComponent_eventIsCharacterNearWall_Parms
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
	void Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WallrunComponent_eventIsCharacterNearWall_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WallrunComponent_eventIsCharacterNearWall_Parms), &Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallrunComponent, nullptr, "IsCharacterNearWall", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::WallrunComponent_eventIsCharacterNearWall_Parms), Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWallrunComponent);
	UClass* Z_Construct_UClass_UWallrunComponent_NoRegister()
	{
		return UWallrunComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWallrunComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWallrunning_MetaData[];
#endif
		static void NewProp_bIsWallrunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallrunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCancelWallrun_MetaData[];
#endif
		static void NewProp_bForceCancelWallrun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCancelWallrun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallUpward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallUpward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSideward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallSideward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastValidWallNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lastValidWallNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentValidHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentValidHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallrunDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallrunVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDirectionAlongWallAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirectionAlongWallAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookingMoveDirectionAlongWallAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookingMoveDirectionAlongWallAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerToWallVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerToWallVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rayCheckForWallLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rayCheckForWallLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_initialAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLaunchOverrideXY_MetaData[];
#endif
		static void NewProp_bLaunchOverrideXY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLaunchOverrideXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLaunchOverrideZ_MetaData[];
#endif
		static void NewProp_bLaunchOverrideZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLaunchOverrideZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reducedGravityMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_reducedGravityMult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_wallrunSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_wallrunSide;
		static const UECodeGen_Private::FBytePropertyParams NewProp_startingLateralWallSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startingLateralWallSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startingLateralWallSide;
		static const UECodeGen_Private::FBytePropertyParams NewProp_lastEndReason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastEndReason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_lastEndReason;
		static const UECodeGen_Private::FBytePropertyParams NewProp_wallrunMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_wallrunMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysStickToWall_MetaData[];
#endif
		static void NewProp_bAlwaysStickToWall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysStickToWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelWallrunWhenSideChanges_MetaData[];
#endif
		static void NewProp_bCancelWallrunWhenSideChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelWallrunWhenSideChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterMaxWalkableAngle_MetaData[];
#endif
		static void NewProp_bUseCharacterMaxWalkableAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterMaxWalkableAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterMaxFlySpeed_MetaData[];
#endif
		static void NewProp_bUseCharacterMaxFlySpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterMaxFlySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLaunchAtBegin_MetaData[];
#endif
		static void NewProp_bLaunchAtBegin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLaunchAtBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_visualWallrunMinVerticalValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_visualWallrunMinVerticalValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunLaunchForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallrunLaunchForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lateralSideDotThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lateralSideDotThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lateralSideChangeDotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lateralSideChangeDotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocityWallrunThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocityWallrunThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallrunAngleThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_gravityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_gravityMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reducedGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_reducedGravity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_desiredHorizontalMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredHorizontalMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_desiredHorizontalMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_desiredVerticalMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredVerticalMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_desiredVerticalMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_desiredDiagonalMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredDiagonalMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_desiredDiagonalMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunLockDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallrunLockDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunLockTimerExpired_MetaData[];
#endif
		static void NewProp_wallrunLockTimerExpired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wallrunLockTimerExpired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallrunComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWallrunComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWallrunComponent_HasValidHit, "HasValidHit" }, // 1235660644
		{ &Z_Construct_UFunction_UWallrunComponent_IsCharacterNearWall, "IsCharacterNearWall" }, // 3790568593
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomComponents/WallrunComponent.h" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bIsWallrunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning = { "bIsWallrunning", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bForceCancelWallrun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun = { "bForceCancelWallrun", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal = { "wallNormal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward = { "wallUpward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallUpward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward = { "wallSideward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallSideward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle = { "wallAngle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallAngle), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastValidWallNormal_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastValidWallNormal = { "lastValidWallNormal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lastValidWallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastValidWallNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastValidWallNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit = { "currentValidHit", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, currentValidHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDirection = { "wallrunDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunVelocity_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunVelocity = { "wallrunVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis = { "moveDirectionAlongWallAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, moveDirectionAlongWallAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis = { "lookingMoveDirectionAlongWallAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lookingMoveDirectionAlongWallAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_playerToWallVector_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_playerToWallVector = { "playerToWallVector", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, playerToWallVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_playerToWallVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_playerToWallVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_rayCheckForWallLength_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_rayCheckForWallLength = { "rayCheckForWallLength", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, rayCheckForWallLength), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_rayCheckForWallLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_rayCheckForWallLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl = { "initialAirControl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, initialAirControl), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bLaunchOverrideXY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY = { "bLaunchOverrideXY", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bLaunchOverrideZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ = { "bLaunchOverrideZ", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravityMult_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravityMult = { "reducedGravityMult", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, reducedGravityMult), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravityMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravityMult_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide = { "wallrunSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunSide), Z_Construct_UEnum_Playground_EWallrunSide, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_MetaData)) }; // 3832065952
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide = { "startingLateralWallSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, startingLateralWallSide), Z_Construct_UEnum_Playground_EWallrunSide, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_MetaData)) }; // 3832065952
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason = { "lastEndReason", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lastEndReason), Z_Construct_UEnum_Playground_EWallrunEndreason, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_MetaData)) }; // 577720531
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode = { "wallrunMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_MetaData)) }; // 3224889954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bAlwaysStickToWall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall = { "bAlwaysStickToWall", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bCancelWallrunWhenSideChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges = { "bCancelWallrunWhenSideChanges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bUseCharacterMaxWalkableAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle = { "bUseCharacterMaxWalkableAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bUseCharacterMaxFlySpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed = { "bUseCharacterMaxFlySpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bLaunchAtBegin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin = { "bLaunchAtBegin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue = { "visualWallrunMinVerticalValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, visualWallrunMinVerticalValue), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLaunchForce_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLaunchForce = { "wallrunLaunchForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunLaunchForce), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLaunchForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLaunchForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideDotThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//put this to 0 to remove front side, or a low value to enable front side\n" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "ToolTip", "put this to 0 to remove front side, or a low value to enable front side" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideDotThreshold = { "lateralSideDotThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lateralSideDotThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideDotThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideDotThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeDotOffset_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//offset used to change side from left to right, and viceversa, when value 0 is approached\n" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "ToolTip", "offset used to change side from left to right, and viceversa, when value 0 is approached" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeDotOffset = { "lateralSideChangeDotOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lateralSideChangeDotOffset), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeDotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeDotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold = { "velocityWallrunThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, velocityWallrunThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunAngleThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//angle of wall normal with horizontal plane must be less than this value\n" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "ToolTip", "angle of wall normal with horizontal plane must be less than this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunAngleThreshold = { "wallrunAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunAngleThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode = { "gravityMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, gravityMode), Z_Construct_UEnum_Playground_EGravityMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode_MetaData)) }; // 3435743570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravity_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravity = { "reducedGravity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, reducedGravity), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode = { "desiredHorizontalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, desiredHorizontalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_MetaData)) }; // 3224889954
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode = { "desiredVerticalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, desiredVerticalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_MetaData)) }; // 3224889954
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode = { "desiredDiagonalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, desiredDiagonalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_MetaData)) }; // 3224889954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockDelay_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockDelay = { "wallrunLockDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunLockDelay), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->wallrunLockTimerExpired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired = { "wallrunLockTimerExpired", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWallrunComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bIsWallrunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bForceCancelWallrun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastValidWallNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_playerToWallVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_rayCheckForWallLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchOverrideZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravityMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bCancelWallrunWhenSideChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxWalkableAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bUseCharacterMaxFlySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bLaunchAtBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLaunchForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideDotThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeDotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_gravityMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_reducedGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunLockTimerExpired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallrunComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallrunComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWallrunComponent_Statics::ClassParams = {
		&UWallrunComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWallrunComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWallrunComponent()
	{
		if (!Z_Registration_Info_UClass_UWallrunComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWallrunComponent.OuterSingleton, Z_Construct_UClass_UWallrunComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWallrunComponent.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UWallrunComponent>()
	{
		return UWallrunComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWallrunComponent);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::EnumInfo[] = {
		{ EWallrunSide_StaticEnum, TEXT("EWallrunSide"), &Z_Registration_Info_UEnum_EWallrunSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832065952U) },
		{ EWallrunEndreason_StaticEnum, TEXT("EWallrunEndreason"), &Z_Registration_Info_UEnum_EWallrunEndreason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 577720531U) },
		{ EWallrunMode_StaticEnum, TEXT("EWallrunMode"), &Z_Registration_Info_UEnum_EWallrunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3224889954U) },
		{ EGravityMode_StaticEnum, TEXT("EGravityMode"), &Z_Registration_Info_UEnum_EGravityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3435743570U) },
		{ EWallrunEndConditions_StaticEnum, TEXT("EWallrunEndConditions"), &Z_Registration_Info_UEnum_EWallrunEndConditions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1417166493U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWallrunComponent, UWallrunComponent::StaticClass, TEXT("UWallrunComponent"), &Z_Registration_Info_UClass_UWallrunComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWallrunComponent), 2677863320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_1808587268(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
