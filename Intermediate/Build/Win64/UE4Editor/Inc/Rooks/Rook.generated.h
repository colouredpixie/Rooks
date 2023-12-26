// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ROOKS_Rook_generated_h
#error "Rook.generated.h already included, missing '#pragma once' in Rook.h"
#endif
#define ROOKS_Rook_generated_h

#define Rooks_Source_Rooks_Rook_h_14_SPARSE_DATA
#define Rooks_Source_Rooks_Rook_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Rooks_Source_Rooks_Rook_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Rooks_Source_Rooks_Rook_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARook(); \
	friend struct Z_Construct_UClass_ARook_Statics; \
public: \
	DECLARE_CLASS(ARook, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARook)


#define Rooks_Source_Rooks_Rook_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARook(); \
	friend struct Z_Construct_UClass_ARook_Statics; \
public: \
	DECLARE_CLASS(ARook, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARook)


#define Rooks_Source_Rooks_Rook_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARook(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARook(ARook&&); \
	NO_API ARook(const ARook&); \
public:


#define Rooks_Source_Rooks_Rook_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARook(ARook&&); \
	NO_API ARook(const ARook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARook); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARook)


#define Rooks_Source_Rooks_Rook_h_14_PRIVATE_PROPERTY_OFFSET
#define Rooks_Source_Rooks_Rook_h_11_PROLOG
#define Rooks_Source_Rooks_Rook_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_Rook_h_14_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_Rook_h_14_SPARSE_DATA \
	Rooks_Source_Rooks_Rook_h_14_RPC_WRAPPERS \
	Rooks_Source_Rooks_Rook_h_14_INCLASS \
	Rooks_Source_Rooks_Rook_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rooks_Source_Rooks_Rook_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_Rook_h_14_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_Rook_h_14_SPARSE_DATA \
	Rooks_Source_Rooks_Rook_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Rooks_Source_Rooks_Rook_h_14_INCLASS_NO_PURE_DECLS \
	Rooks_Source_Rooks_Rook_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOKS_API UClass* StaticClass<class ARook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rooks_Source_Rooks_Rook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
