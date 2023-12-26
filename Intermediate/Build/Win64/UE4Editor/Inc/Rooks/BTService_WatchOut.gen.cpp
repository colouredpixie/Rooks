// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/BTService_WatchOut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_WatchOut() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_UBTService_WatchOut_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_UBTService_WatchOut();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Rooks();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_WatchOut::StaticRegisterNativesUBTService_WatchOut()
	{
	}
	UClass* Z_Construct_UClass_UBTService_WatchOut_NoRegister()
	{
		return UBTService_WatchOut::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_WatchOut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WatchRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_WatchOut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_WatchOut_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_WatchOut.h" },
		{ "ModuleRelativePath", "BTService_WatchOut.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "BTService_WatchOut" },
		{ "ModuleRelativePath", "BTService_WatchOut.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_WatchOut, PlayerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_WatchRadius_MetaData[] = {
		{ "Category", "BTService_WatchOut" },
		{ "ModuleRelativePath", "BTService_WatchOut.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_WatchRadius = { "WatchRadius", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_WatchOut, WatchRadius), METADATA_PARAMS(Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_WatchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_WatchRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_WatchOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_PlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_WatchOut_Statics::NewProp_WatchRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_WatchOut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_WatchOut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_WatchOut_Statics::ClassParams = {
		&UBTService_WatchOut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_WatchOut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_WatchOut_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_WatchOut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_WatchOut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_WatchOut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_WatchOut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_WatchOut, 371759366);
	template<> ROOKS_API UClass* StaticClass<UBTService_WatchOut>()
	{
		return UBTService_WatchOut::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_WatchOut(Z_Construct_UClass_UBTService_WatchOut, &UBTService_WatchOut::StaticClass, TEXT("/Script/Rooks"), TEXT("UBTService_WatchOut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_WatchOut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
