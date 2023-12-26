// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/BTTask_RandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RandomLocation() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_RandomLocation_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_RandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Rooks();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_RandomLocation::StaticRegisterNativesUBTTask_RandomLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RandomLocation_NoRegister()
	{
		return UBTTask_RandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_RandomLocation.h" },
		{ "ModuleRelativePath", "BTTask_RandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_RandomLocationKey_MetaData[] = {
		{ "Category", "BTTask_RandomLocation" },
		{ "ModuleRelativePath", "BTTask_RandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_RandomLocationKey = { "RandomLocationKey", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RandomLocation, RandomLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_RandomLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_RandomLocationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "BTTask_RandomLocation" },
		{ "ModuleRelativePath", "BTTask_RandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RandomLocation, PatrolRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_PatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_PatrolRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RandomLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_RandomLocationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RandomLocation_Statics::NewProp_PatrolRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RandomLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RandomLocation_Statics::ClassParams = {
		&UBTTask_RandomLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RandomLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RandomLocation, 547478941);
	template<> ROOKS_API UClass* StaticClass<UBTTask_RandomLocation>()
	{
		return UBTTask_RandomLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RandomLocation(Z_Construct_UClass_UBTTask_RandomLocation, &UBTTask_RandomLocation::StaticClass, TEXT("/Script/Rooks"), TEXT("UBTTask_RandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
