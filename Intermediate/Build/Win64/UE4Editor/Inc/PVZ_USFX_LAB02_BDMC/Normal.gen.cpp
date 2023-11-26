// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/Normal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormal() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ANormal_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ANormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UNivelDificultad_NoRegister();
// End Cross Module References
	void ANormal::StaticRegisterNativesANormal()
	{
	}
	UClass* Z_Construct_UClass_ANormal_NoRegister()
	{
		return ANormal::StaticClass();
	}
	struct Z_Construct_UClass_ANormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Normal.h" },
		{ "ModuleRelativePath", "Normal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANormal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNivelDificultad_NoRegister, (int32)VTABLE_OFFSET(ANormal, INivelDificultad), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANormal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANormal_Statics::ClassParams = {
		&ANormal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANormal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANormal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANormal, 3504377235);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<ANormal>()
	{
		return ANormal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANormal(Z_Construct_UClass_ANormal, &ANormal::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("ANormal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANormal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
