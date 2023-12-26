// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/RookAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRookAIController() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_ARookAIController_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_ARookAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Rooks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ARookAIController::execTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Trace();
		P_NATIVE_END;
	}
	void ARookAIController::StaticRegisterNativesARookAIController()
	{
		UClass* Class = ARookAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Trace", &ARookAIController::execTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARookAIController_Trace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARookAIController_Trace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RookAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARookAIController_Trace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARookAIController, nullptr, "Trace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARookAIController_Trace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARookAIController_Trace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARookAIController_Trace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARookAIController_Trace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARookAIController_NoRegister()
	{
		return ARookAIController::StaticClass();
	}
	struct Z_Construct_UClass_ARookAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RandomLocationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARookAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARookAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARookAIController_Trace, "Trace" }, // 626274719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARookAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RookAIController.h" },
		{ "ModuleRelativePath", "RookAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceLocation_MetaData[] = {
		{ "Category", "RookAIController" },
		{ "ModuleRelativePath", "RookAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceLocation = { "TraceLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARookAIController, TraceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "RookAIController" },
		{ "ModuleRelativePath", "RookAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARookAIController, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARookAIController_Statics::NewProp_RandomLocationKey_MetaData[] = {
		{ "Category", "RookAIController" },
		{ "ModuleRelativePath", "RookAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARookAIController_Statics::NewProp_RandomLocationKey = { "RandomLocationKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARookAIController, RandomLocationKey), METADATA_PARAMS(Z_Construct_UClass_ARookAIController_Statics::NewProp_RandomLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARookAIController_Statics::NewProp_RandomLocationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARookAIController_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "RookAIController" },
		{ "Comment", "//not used anywhere\n" },
		{ "ModuleRelativePath", "RookAIController.h" },
		{ "ToolTip", "not used anywhere" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARookAIController_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARookAIController, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_ARookAIController_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARookAIController_Statics::NewProp_PlayerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARookAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARookAIController_Statics::NewProp_TraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARookAIController_Statics::NewProp_RandomLocationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARookAIController_Statics::NewProp_PlayerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARookAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARookAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARookAIController_Statics::ClassParams = {
		&ARookAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARookAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARookAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARookAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARookAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARookAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARookAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARookAIController, 686716230);
	template<> ROOKS_API UClass* StaticClass<ARookAIController>()
	{
		return ARookAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARookAIController(Z_Construct_UClass_ARookAIController, &ARookAIController::StaticClass, TEXT("/Script/Rooks"), TEXT("ARookAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARookAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
