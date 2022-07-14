// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Utilities/CustomUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomUtils() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomUtils_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UCustomUtils::StaticRegisterNativesUCustomUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomUtils);
	UClass* Z_Construct_UClass_UCustomUtils_NoRegister()
	{
		return UCustomUtils::StaticClass();
	}
	struct Z_Construct_UClass_UCustomUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/CustomUtils.h" },
		{ "ModuleRelativePath", "Utilities/CustomUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomUtils_Statics::ClassParams = {
		&UCustomUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomUtils()
	{
		if (!Z_Registration_Info_UClass_UCustomUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomUtils.OuterSingleton, Z_Construct_UClass_UCustomUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomUtils.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UCustomUtils>()
	{
		return UCustomUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomUtils);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Utilities_CustomUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Utilities_CustomUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomUtils, UCustomUtils::StaticClass, TEXT("UCustomUtils"), &Z_Registration_Info_UClass_UCustomUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomUtils), 3874173340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Utilities_CustomUtils_h_3541341478(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Utilities_CustomUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Utilities_CustomUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
