// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/RooksHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRooksHUD() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_ARooksHUD_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_ARooksHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Rooks();
// End Cross Module References
	void ARooksHUD::StaticRegisterNativesARooksHUD()
	{
	}
	UClass* Z_Construct_UClass_ARooksHUD_NoRegister()
	{
		return ARooksHUD::StaticClass();
	}
	struct Z_Construct_UClass_ARooksHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARooksHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARooksHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RooksHUD.h" },
		{ "ModuleRelativePath", "RooksHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARooksHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARooksHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARooksHUD_Statics::ClassParams = {
		&ARooksHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARooksHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARooksHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARooksHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARooksHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARooksHUD, 3706642727);
	template<> ROOKS_API UClass* StaticClass<ARooksHUD>()
	{
		return ARooksHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARooksHUD(Z_Construct_UClass_ARooksHUD, &ARooksHUD::StaticClass, TEXT("/Script/Rooks"), TEXT("ARooksHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARooksHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
