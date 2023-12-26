// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/BTTask_MoveToRandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveToRandomLocation() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_Rooks();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_MoveToRandomLocation::StaticRegisterNativesUBTTask_MoveToRandomLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation_NoRegister()
	{
		return UBTTask_MoveToRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_MoveToRandomLocation.h" },
		{ "ModuleRelativePath", "BTTask_MoveToRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::NewProp_RandomLocationKey_MetaData[] = {
		{ "Category", "BTTask_MoveToRandomLocation" },
		{ "ModuleRelativePath", "BTTask_MoveToRandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::NewProp_RandomLocationKey = { "RandomLocationKey", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_MoveToRandomLocation, RandomLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::NewProp_RandomLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::NewProp_RandomLocationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::NewProp_RandomLocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveToRandomLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::ClassParams = {
		&UBTTask_MoveToRandomLocation::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveToRandomLocation, 3720311704);
	template<> ROOKS_API UClass* StaticClass<UBTTask_MoveToRandomLocation>()
	{
		return UBTTask_MoveToRandomLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveToRandomLocation(Z_Construct_UClass_UBTTask_MoveToRandomLocation, &UBTTask_MoveToRandomLocation::StaticClass, TEXT("/Script/Rooks"), TEXT("UBTTask_MoveToRandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveToRandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
