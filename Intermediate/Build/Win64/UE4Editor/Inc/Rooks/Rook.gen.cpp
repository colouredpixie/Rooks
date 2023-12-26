// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rooks/Rook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRook() {}
// Cross Module References
	ROOKS_API UClass* Z_Construct_UClass_ARook_NoRegister();
	ROOKS_API UClass* Z_Construct_UClass_ARook();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Rooks();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARook::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARook::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_FromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ARook::StaticRegisterNativesARook()
	{
		UClass* Class = ARook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &ARook::execOnBeginOverlap },
			{ "OnEndOverlap", &ARook::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARook_OnBeginOverlap_Statics
	{
		struct Rook_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool FromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_FromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_FromSweep_SetBit(void* Obj)
	{
		((Rook_eventOnBeginOverlap_Parms*)Obj)->FromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Rook_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_FromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// perception sphere2 - fly away logic\n// delegate broadcast\n" },
		{ "ModuleRelativePath", "Rook.h" },
		{ "ToolTip", "perception sphere2 - fly away logic\ndelegate broadcast" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARook, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Rook_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARook_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARook_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARook_OnEndOverlap_Statics
	{
		struct Rook_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rook_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARook_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARook_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARook_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARook_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARook, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Rook_eventOnEndOverlap_Parms), Z_Construct_UFunction_ARook_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARook_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARook_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARook_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARook_NoRegister()
	{
		return ARook::StaticClass();
	}
	struct Z_Construct_UClass_ARook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetreatSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetreatSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClose_MetaData[];
#endif
		static void NewProp_IsClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFlying_MetaData[];
#endif
		static void NewProp_IsFlying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Rooks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARook_OnBeginOverlap, "OnBeginOverlap" }, // 764162100
		{ &Z_Construct_UFunction_ARook_OnEndOverlap, "OnEndOverlap" }, // 2288416296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARook_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Rook.h" },
		{ "ModuleRelativePath", "Rook.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARook_Statics::NewProp_RetreatSphere_MetaData[] = {
		{ "Category", "Rook" },
		{ "Comment", "//Perception sphere\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rook.h" },
		{ "ToolTip", "Perception sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARook_Statics::NewProp_RetreatSphere = { "RetreatSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARook, RetreatSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARook_Statics::NewProp_RetreatSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::NewProp_RetreatSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARook_Statics::NewProp_IsMoving_MetaData[] = {
		{ "Category", "Rook" },
		{ "ModuleRelativePath", "Rook.h" },
	};
#endif
	void Z_Construct_UClass_ARook_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((ARook*)Obj)->IsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARook_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARook), &Z_Construct_UClass_ARook_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARook_Statics::NewProp_IsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::NewProp_IsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARook_Statics::NewProp_IsClose_MetaData[] = {
		{ "Category", "Rook" },
		{ "ModuleRelativePath", "Rook.h" },
	};
#endif
	void Z_Construct_UClass_ARook_Statics::NewProp_IsClose_SetBit(void* Obj)
	{
		((ARook*)Obj)->IsClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARook_Statics::NewProp_IsClose = { "IsClose", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARook), &Z_Construct_UClass_ARook_Statics::NewProp_IsClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARook_Statics::NewProp_IsClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::NewProp_IsClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARook_Statics::NewProp_IsFlying_MetaData[] = {
		{ "Category", "Rook" },
		{ "ModuleRelativePath", "Rook.h" },
	};
#endif
	void Z_Construct_UClass_ARook_Statics::NewProp_IsFlying_SetBit(void* Obj)
	{
		((ARook*)Obj)->IsFlying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARook_Statics::NewProp_IsFlying = { "IsFlying", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARook), &Z_Construct_UClass_ARook_Statics::NewProp_IsFlying_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARook_Statics::NewProp_IsFlying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::NewProp_IsFlying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARook_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Rook" },
		{ "ModuleRelativePath", "Rook.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARook_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARook, IdleAnimation), METADATA_PARAMS(Z_Construct_UClass_ARook_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::NewProp_IdleAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARook_Statics::NewProp_RetreatSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARook_Statics::NewProp_IsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARook_Statics::NewProp_IsClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARook_Statics::NewProp_IsFlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARook_Statics::NewProp_IdleAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARook_Statics::ClassParams = {
		&ARook::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARook, 139719650);
	template<> ROOKS_API UClass* StaticClass<ARook>()
	{
		return ARook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARook(Z_Construct_UClass_ARook, &ARook::StaticClass, TEXT("/Script/Rooks"), TEXT("ARook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
