// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/TransformacionNoche.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformacionNoche() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UTransformacionNoche_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UTransformacionNoche();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
// End Cross Module References
	void UTransformacionNoche::StaticRegisterNativesUTransformacionNoche()
	{
	}
	UClass* Z_Construct_UClass_UTransformacionNoche_NoRegister()
	{
		return UTransformacionNoche::StaticClass();
	}
	struct Z_Construct_UClass_UTransformacionNoche_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformacionNoche_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformacionNoche_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "TransformacionNoche.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformacionNoche_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITransformacionNoche>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTransformacionNoche_Statics::ClassParams = {
		&UTransformacionNoche::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformacionNoche_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformacionNoche_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformacionNoche()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTransformacionNoche_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTransformacionNoche, 2811749149);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<UTransformacionNoche>()
	{
		return UTransformacionNoche::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTransformacionNoche(Z_Construct_UClass_UTransformacionNoche, &UTransformacionNoche::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("UTransformacionNoche"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformacionNoche);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
