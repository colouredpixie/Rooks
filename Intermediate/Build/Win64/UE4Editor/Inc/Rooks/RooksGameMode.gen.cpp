// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/RooksGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRooksGameMode() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_ARooksGameMode_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_ARooksGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Rooks();
// End Cross Module References
	void ARooksGameMode::StaticRegisterNativesARooksGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARooksGameMode_NoRegister()
	{
		return ARooksGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARooksGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARooksGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARooksGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RooksGameMode.h" },
		{ "ModuleRelativePath", "RooksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARooksGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARooksGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARooksGameMode_Statics::ClassParams = {
		&ARooksGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARooksGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARooksGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARooksGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARooksGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARooksGameMode, 2462607215);
	template<> ROOKS_API UClass* StaticClass<ARooksGameMode>()
	{
		return ARooksGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARooksGameMode(Z_Construct_UClass_ARooksGameMode, &ARooksGameMode::StaticClass, TEXT("/Script/Rooks"), TEXT("ARooksGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARooksGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
