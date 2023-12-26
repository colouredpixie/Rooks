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
struct FVector;
struct FHitResult;
#ifdef ROOKS_RooksProjectile_generated_h
#error "RooksProjectile.generated.h already included, missing '#pragma once' in RooksProjectile.h"
#endif
#define ROOKS_RooksProjectile_generated_h

#define Rooks_Source_Rooks_RooksProjectile_h_15_SPARSE_DATA
#define Rooks_Source_Rooks_RooksProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Rooks_Source_Rooks_RooksProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Rooks_Source_Rooks_RooksProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARooksProjectile(); \
	friend struct Z_Construct_UClass_ARooksProjectile_Statics; \
public: \
	DECLARE_CLASS(ARooksProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARooksProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Rooks_Source_Rooks_RooksProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARooksProjectile(); \
	friend struct Z_Construct_UClass_ARooksProjectile_Statics; \
public: \
	DECLARE_CLASS(ARooksProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARooksProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Rooks_Source_Rooks_RooksProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARooksProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARooksProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARooksProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARooksProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARooksProjectile(ARooksProjectile&&); \
	NO_API ARooksProjectile(const ARooksProjectile&); \
public:


#define Rooks_Source_Rooks_RooksProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARooksProjectile(ARooksProjectile&&); \
	NO_API ARooksProjectile(const ARooksProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARooksProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARooksProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARooksProjectile)


#define Rooks_Source_Rooks_RooksProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ARooksProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ARooksProjectile, ProjectileMovement); }


#define Rooks_Source_Rooks_RooksProjectile_h_12_PROLOG
#define Rooks_Source_Rooks_RooksProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RooksProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RooksProjectile_h_15_SPARSE_DATA \
	Rooks_Source_Rooks_RooksProjectile_h_15_RPC_WRAPPERS \
	Rooks_Source_Rooks_RooksProjectile_h_15_INCLASS \
	Rooks_Source_Rooks_RooksProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rooks_Source_Rooks_RooksProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RooksProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RooksProjectile_h_15_SPARSE_DATA \
	Rooks_Source_Rooks_RooksProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RooksProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RooksProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOKS_API UClass* StaticClass<class ARooksProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rooks_Source_Rooks_RooksProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
