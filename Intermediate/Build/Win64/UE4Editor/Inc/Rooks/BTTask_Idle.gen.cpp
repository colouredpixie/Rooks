// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/BTTask_Idle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Idle() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_Idle_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_Idle();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_Rooks();
// End Cross Module References
	void UBTTask_Idle::StaticRegisterNativesUBTTask_Idle()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Idle_NoRegister()
	{
		return UBTTask_Idle::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Idle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Idle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Idle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_Idle.h" },
		{ "ModuleRelativePath", "BTTask_Idle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Idle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Idle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Idle_Statics::ClassParams = {
		&UBTTask_Idle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Idle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Idle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Idle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Idle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Idle, 1340870744);
	template<> ROOKS_API UClass* StaticClass<UBTTask_Idle>()
	{
		return UBTTask_Idle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Idle(Z_Construct_UClass_UBTTask_Idle, &UBTTask_Idle::StaticClass, TEXT("/Script/Rooks"), TEXT("UBTTask_Idle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Idle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
