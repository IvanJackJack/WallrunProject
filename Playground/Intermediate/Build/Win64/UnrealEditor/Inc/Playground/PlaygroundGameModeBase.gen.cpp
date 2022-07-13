// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/PlaygroundGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaygroundGameModeBase() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_APlaygroundGameModeBase_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_APlaygroundGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void APlaygroundGameModeBase::StaticRegisterNativesAPlaygroundGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaygroundGameModeBase);
	UClass* Z_Construct_UClass_APlaygroundGameModeBase_NoRegister()
	{
		return APlaygroundGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlaygroundGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaygroundGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaygroundGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlaygroundGameModeBase.h" },
		{ "ModuleRelativePath", "PlaygroundGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaygroundGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaygroundGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaygroundGameModeBase_Statics::ClassParams = {
		&APlaygroundGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlaygroundGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaygroundGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaygroundGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APlaygroundGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaygroundGameModeBase.OuterSingleton, Z_Construct_UClass_APlaygroundGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaygroundGameModeBase.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<APlaygroundGameModeBase>()
	{
		return APlaygroundGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaygroundGameModeBase);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlaygroundGameModeBase, APlaygroundGameModeBase::StaticClass, TEXT("APlaygroundGameModeBase"), &Z_Registration_Info_UClass_APlaygroundGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaygroundGameModeBase), 385009500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameModeBase_h_3798807171(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_PlaygroundGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
