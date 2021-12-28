// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkingTest/Public/StaticRefs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticRefs() {}
// Cross Module References
	NETWORKINGTEST_API UClass* Z_Construct_UClass_AStaticRefs_NoRegister();
	NETWORKINGTEST_API UClass* Z_Construct_UClass_AStaticRefs();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkingTest();
// End Cross Module References
	void AStaticRefs::StaticRegisterNativesAStaticRefs()
	{
	}
	UClass* Z_Construct_UClass_AStaticRefs_NoRegister()
	{
		return AStaticRefs::StaticClass();
	}
	struct Z_Construct_UClass_AStaticRefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticRefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkingTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticRefs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StaticRefs.h" },
		{ "ModuleRelativePath", "Public/StaticRefs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticRefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticRefs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticRefs_Statics::ClassParams = {
		&AStaticRefs::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStaticRefs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticRefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticRefs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticRefs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticRefs, 3670105994);
	template<> NETWORKINGTEST_API UClass* StaticClass<AStaticRefs>()
	{
		return AStaticRefs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticRefs(Z_Construct_UClass_AStaticRefs, &AStaticRefs::StaticClass, TEXT("/Script/NetworkingTest"), TEXT("AStaticRefs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticRefs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
