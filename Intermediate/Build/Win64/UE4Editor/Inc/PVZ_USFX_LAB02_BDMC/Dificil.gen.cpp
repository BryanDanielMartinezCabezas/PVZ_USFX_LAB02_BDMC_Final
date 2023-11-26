// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/Dificil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDificil() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ADificil_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ADificil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ANormal_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UModificarDificultad_NoRegister();
// End Cross Module References
	void ADificil::StaticRegisterNativesADificil()
	{
	}
	UClass* Z_Construct_UClass_ADificil_NoRegister()
	{
		return ADificil::StaticClass();
	}
	struct Z_Construct_UClass_ADificil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADificil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADificil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dificil.h" },
		{ "ModuleRelativePath", "Dificil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADificil_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Dificultad Dificil" },
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "Dificil.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADificil_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADificil, Normal), Z_Construct_UClass_ANormal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADificil_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADificil_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADificil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADificil_Statics::NewProp_Normal,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADificil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UModificarDificultad_NoRegister, (int32)VTABLE_OFFSET(ADificil, IModificarDificultad), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADificil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADificil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADificil_Statics::ClassParams = {
		&ADificil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADificil_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADificil_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADificil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADificil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADificil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADificil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADificil, 3380528998);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<ADificil>()
	{
		return ADificil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADificil(Z_Construct_UClass_ADificil, &ADificil::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("ADificil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADificil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
