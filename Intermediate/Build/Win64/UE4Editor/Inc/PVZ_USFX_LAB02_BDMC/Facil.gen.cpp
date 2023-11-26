// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/Facil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacil() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AFacil_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AFacil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ANormal_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UModificarDificultad_NoRegister();
// End Cross Module References
	void AFacil::StaticRegisterNativesAFacil()
	{
	}
	UClass* Z_Construct_UClass_AFacil_NoRegister()
	{
		return AFacil::StaticClass();
	}
	struct Z_Construct_UClass_AFacil_Statics
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
	UObject* (*const Z_Construct_UClass_AFacil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Facil.h" },
		{ "ModuleRelativePath", "Facil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacil_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Dificultad facil" },
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "Facil.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFacil_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFacil, Normal), Z_Construct_UClass_ANormal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFacil_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFacil_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFacil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacil_Statics::NewProp_Normal,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFacil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UModificarDificultad_NoRegister, (int32)VTABLE_OFFSET(AFacil, IModificarDificultad), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacil_Statics::ClassParams = {
		&AFacil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFacil_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFacil_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacil, 1172785309);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<AFacil>()
	{
		return AFacil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacil(Z_Construct_UClass_AFacil, &AFacil::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("AFacil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
