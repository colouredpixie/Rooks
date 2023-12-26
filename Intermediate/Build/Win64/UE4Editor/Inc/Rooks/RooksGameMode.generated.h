// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROOKS_RooksGameMode_generated_h
#error "RooksGameMode.generated.h already included, missing '#pragma once' in RooksGameMode.h"
#endif
#define ROOKS_RooksGameMode_generated_h

#define Rooks_Source_Rooks_RooksGameMode_h_12_SPARSE_DATA
#define Rooks_Source_Rooks_RooksGameMode_h_12_RPC_WRAPPERS
#define Rooks_Source_Rooks_RooksGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Rooks_Source_Rooks_RooksGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARooksGameMode(); \
	friend struct Z_Construct_UClass_ARooksGameMode_Statics; \
public: \
	DECLARE_CLASS(ARooksGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), ROOKS_API) \
	DECLARE_SERIALIZER(ARooksGameMode)


#define Rooks_Source_Rooks_RooksGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARooksGameMode(); \
	friend struct Z_Construct_UClass_ARooksGameMode_Statics; \
public: \
	DECLARE_CLASS(ARooksGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), ROOKS_API) \
	DECLARE_SERIALIZER(ARooksGameMode)


#define Rooks_Source_Rooks_RooksGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ROOKS_API ARooksGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARooksGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROOKS_API, ARooksGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARooksGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ROOKS_API ARooksGameMode(ARooksGameMode&&); \
	ROOKS_API ARooksGameMode(const ARooksGameMode&); \
public:


#define Rooks_Source_Rooks_RooksGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ROOKS_API ARooksGameMode(ARooksGameMode&&); \
	ROOKS_API ARooksGameMode(const ARooksGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROOKS_API, ARooksGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARooksGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARooksGameMode)


#define Rooks_Source_Rooks_RooksGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Rooks_Source_Rooks_RooksGameMode_h_9_PROLOG
#define Rooks_Source_Rooks_RooksGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RooksGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RooksGameMode_h_12_SPARSE_DATA \
	Rooks_Source_Rooks_RooksGameMode_h_12_RPC_WRAPPERS \
	Rooks_Source_Rooks_RooksGameMode_h_12_INCLASS \
	Rooks_Source_Rooks_RooksGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rooks_Source_Rooks_RooksGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RooksGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RooksGameMode_h_12_SPARSE_DATA \
	Rooks_Source_Rooks_RooksGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RooksGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RooksGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOKS_API UClass* StaticClass<class ARooksGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rooks_Source_Rooks_RooksGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
