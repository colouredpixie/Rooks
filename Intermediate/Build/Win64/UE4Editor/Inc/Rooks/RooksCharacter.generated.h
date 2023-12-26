// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROOKS_RooksCharacter_generated_h
#error "RooksCharacter.generated.h already included, missing '#pragma once' in RooksCharacter.h"
#endif
#define ROOKS_RooksCharacter_generated_h

#define Rooks_Source_Rooks_RooksCharacter_h_20_SPARSE_DATA
#define Rooks_Source_Rooks_RooksCharacter_h_20_RPC_WRAPPERS
#define Rooks_Source_Rooks_RooksCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Rooks_Source_Rooks_RooksCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARooksCharacter(); \
	friend struct Z_Construct_UClass_ARooksCharacter_Statics; \
public: \
	DECLARE_CLASS(ARooksCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARooksCharacter)


#define Rooks_Source_Rooks_RooksCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesARooksCharacter(); \
	friend struct Z_Construct_UClass_ARooksCharacter_Statics; \
public: \
	DECLARE_CLASS(ARooksCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARooksCharacter)


#define Rooks_Source_Rooks_RooksCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARooksCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARooksCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARooksCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARooksCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARooksCharacter(ARooksCharacter&&); \
	NO_API ARooksCharacter(const ARooksCharacter&); \
public:


#define Rooks_Source_Rooks_RooksCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARooksCharacter(ARooksCharacter&&); \
	NO_API ARooksCharacter(const ARooksCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARooksCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARooksCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARooksCharacter)


#define Rooks_Source_Rooks_RooksCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ARooksCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ARooksCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ARooksCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ARooksCharacter, L_MotionController); }


#define Rooks_Source_Rooks_RooksCharacter_h_17_PROLOG
#define Rooks_Source_Rooks_RooksCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RooksCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RooksCharacter_h_20_SPARSE_DATA \
	Rooks_Source_Rooks_RooksCharacter_h_20_RPC_WRAPPERS \
	Rooks_Source_Rooks_RooksCharacter_h_20_INCLASS \
	Rooks_Source_Rooks_RooksCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rooks_Source_Rooks_RooksCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RooksCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RooksCharacter_h_20_SPARSE_DATA \
	Rooks_Source_Rooks_RooksCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RooksCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RooksCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOKS_API UClass* StaticClass<class ARooksCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rooks_Source_Rooks_RooksCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
