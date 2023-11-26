// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/PVZ_USFX_LAB02_BDMCGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVZ_USFX_LAB02_BDMCGameMode() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ADificil_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_AFacil_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ASeleccionDificultad_NoRegister();
// End Cross Module References
	void APVZ_USFX_LAB02_BDMCGameMode::StaticRegisterNativesAPVZ_USFX_LAB02_BDMCGameMode()
	{
	}
	UClass* Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_NoRegister()
	{
		return APVZ_USFX_LAB02_BDMCGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dificil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dificil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Facil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dificultad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dificultad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVZ_USFX_LAB02_BDMCGameMode.h" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02_BDMCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificil_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Builder Actor\n" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02_BDMCGameMode.h" },
		{ "ToolTip", "The Builder Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificil = { "Dificil", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB02_BDMCGameMode, Dificil), Z_Construct_UClass_ADificil_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Facil_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Builder Actor\n" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02_BDMCGameMode.h" },
		{ "ToolTip", "The Builder Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Facil = { "Facil", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB02_BDMCGameMode, Facil), Z_Construct_UClass_AFacil_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Facil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Facil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificultad_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Engineer Actor\n" },
		{ "ModuleRelativePath", "PVZ_USFX_LAB02_BDMCGameMode.h" },
		{ "ToolTip", "The Engineer Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificultad = { "Dificultad", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APVZ_USFX_LAB02_BDMCGameMode, Dificultad), Z_Construct_UClass_ASeleccionDificultad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificultad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificultad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Facil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::NewProp_Dificultad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVZ_USFX_LAB02_BDMCGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::ClassParams = {
		&APVZ_USFX_LAB02_BDMCGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVZ_USFX_LAB02_BDMCGameMode, 1564442962);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<APVZ_USFX_LAB02_BDMCGameMode>()
	{
		return APVZ_USFX_LAB02_BDMCGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVZ_USFX_LAB02_BDMCGameMode(Z_Construct_UClass_APVZ_USFX_LAB02_BDMCGameMode, &APVZ_USFX_LAB02_BDMCGameMode::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("APVZ_USFX_LAB02_BDMCGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVZ_USFX_LAB02_BDMCGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
