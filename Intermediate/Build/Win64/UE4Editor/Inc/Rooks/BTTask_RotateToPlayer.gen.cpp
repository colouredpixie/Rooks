// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/BTTask_RotateToPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToPlayer() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_RotateToPlayer_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_UBTTask_RotateToPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry();
	UPackage* Z_Construct_UPackage__Script_Rooks();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_RotateToPlayer::StaticRegisterNativesUBTTask_RotateToPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RotateToPlayer_NoRegister()
	{
		return UBTTask_RotateToPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RotateToPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_RotateToFaceBBEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_RotateToPlayer.h" },
		{ "ModuleRelativePath", "BTTask_RotateToPlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "BTTask_RotateToPlayer" },
		{ "ModuleRelativePath", "BTTask_RotateToPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RotateToPlayer, PlayerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::NewProp_PlayerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::NewProp_PlayerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateToPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::ClassParams = {
		&UBTTask_RotateToPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RotateToPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RotateToPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RotateToPlayer, 3879913593);
	template<> ROOKS_API UClass* StaticClass<UBTTask_RotateToPlayer>()
	{
		return UBTTask_RotateToPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RotateToPlayer(Z_Construct_UClass_UBTTask_RotateToPlayer, &UBTTask_RotateToPlayer::StaticClass, TEXT("/Script/Rooks"), TEXT("UBTTask_RotateToPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
