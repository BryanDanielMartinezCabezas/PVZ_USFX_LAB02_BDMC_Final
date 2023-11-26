// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/SeleccionDificultad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeleccionDificultad() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ASeleccionDificultad_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ASeleccionDificultad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
// End Cross Module References
	void ASeleccionDificultad::StaticRegisterNativesASeleccionDificultad()
	{
	}
	UClass* Z_Construct_UClass_ASeleccionDificultad_NoRegister()
	{
		return ASeleccionDificultad::StaticClass();
	}
	struct Z_Construct_UClass_ASeleccionDificultad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeleccionDificultad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeleccionDificultad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SeleccionDificultad.h" },
		{ "ModuleRelativePath", "SeleccionDificultad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeleccionDificultad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeleccionDificultad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASeleccionDificultad_Statics::ClassParams = {
		&ASeleccionDificultad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASeleccionDificultad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASeleccionDificultad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASeleccionDificultad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASeleccionDificultad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASeleccionDificultad, 3407070989);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<ASeleccionDificultad>()
	{
		return ASeleccionDificultad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeleccionDificultad(Z_Construct_UClass_ASeleccionDificultad, &ASeleccionDificultad::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("ASeleccionDificultad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeleccionDificultad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
