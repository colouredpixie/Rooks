// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROOKS_BTService_WatchOut_generated_h
#error "BTService_WatchOut.generated.h already included, missing '#pragma once' in BTService_WatchOut.h"
#endif
#define ROOKS_BTService_WatchOut_generated_h

#define Rooks_Source_Rooks_BTService_WatchOut_h_13_SPARSE_DATA
#define Rooks_Source_Rooks_BTService_WatchOut_h_13_RPC_WRAPPERS
#define Rooks_Source_Rooks_BTService_WatchOut_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Rooks_Source_Rooks_BTService_WatchOut_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService_WatchOut(); \
	friend struct Z_Construct_UClass_UBTService_WatchOut_Statics; \
public: \
	DECLARE_CLASS(UBTService_WatchOut, UBTService_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(UBTService_WatchOut)


#define Rooks_Source_Rooks_BTService_WatchOut_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBTService_WatchOut(); \
	friend struct Z_Construct_UClass_UBTService_WatchOut_Statics; \
public: \
	DECLARE_CLASS(UBTService_WatchOut, UBTService_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(UBTService_WatchOut)


#define Rooks_Source_Rooks_BTService_WatchOut_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService_WatchOut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_WatchOut) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_WatchOut); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_WatchOut); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService_WatchOut(UBTService_WatchOut&&); \
	NO_API UBTService_WatchOut(const UBTService_WatchOut&); \
public:


#define Rooks_Source_Rooks_BTService_WatchOut_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService_WatchOut(UBTService_WatchOut&&); \
	NO_API UBTService_WatchOut(const UBTService_WatchOut&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_WatchOut); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_WatchOut); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_WatchOut)


#define Rooks_Source_Rooks_BTService_WatchOut_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerKey() { return STRUCT_OFFSET(UBTService_WatchOut, PlayerKey); } \
	FORCEINLINE static uint32 __PPO__WatchRadius() { return STRUCT_OFFSET(UBTService_WatchOut, WatchRadius); }


#define Rooks_Source_Rooks_BTService_WatchOut_h_10_PROLOG
#define Rooks_Source_Rooks_BTService_WatchOut_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_SPARSE_DATA \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_RPC_WRAPPERS \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_INCLASS \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rooks_Source_Rooks_BTService_WatchOut_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_SPARSE_DATA \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_INCLASS_NO_PURE_DECLS \
	Rooks_Source_Rooks_BTService_WatchOut_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOKS_API UClass* StaticClass<class UBTService_WatchOut>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rooks_Source_Rooks_BTService_WatchOut_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
