// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROOKS_RookAIController_generated_h
#error "RookAIController.generated.h already included, missing '#pragma once' in RookAIController.h"
#endif
#define ROOKS_RookAIController_generated_h

#define Rooks_Source_Rooks_RookAIController_h_18_SPARSE_DATA
#define Rooks_Source_Rooks_RookAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTrace);


#define Rooks_Source_Rooks_RookAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTrace);


#define Rooks_Source_Rooks_RookAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARookAIController(); \
	friend struct Z_Construct_UClass_ARookAIController_Statics; \
public: \
	DECLARE_CLASS(ARookAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARookAIController)


#define Rooks_Source_Rooks_RookAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARookAIController(); \
	friend struct Z_Construct_UClass_ARookAIController_Statics; \
public: \
	DECLARE_CLASS(ARookAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rooks"), NO_API) \
	DECLARE_SERIALIZER(ARookAIController)


#define Rooks_Source_Rooks_RookAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARookAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARookAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARookAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARookAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARookAIController(ARookAIController&&); \
	NO_API ARookAIController(const ARookAIController&); \
public:


#define Rooks_Source_Rooks_RookAIController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARookAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARookAIController(ARookAIController&&); \
	NO_API ARookAIController(const ARookAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARookAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARookAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARookAIController)


#define Rooks_Source_Rooks_RookAIController_h_18_PRIVATE_PROPERTY_OFFSET
#define Rooks_Source_Rooks_RookAIController_h_15_PROLOG
#define Rooks_Source_Rooks_RookAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RookAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RookAIController_h_18_SPARSE_DATA \
	Rooks_Source_Rooks_RookAIController_h_18_RPC_WRAPPERS \
	Rooks_Source_Rooks_RookAIController_h_18_INCLASS \
	Rooks_Source_Rooks_RookAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rooks_Source_Rooks_RookAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rooks_Source_Rooks_RookAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	Rooks_Source_Rooks_RookAIController_h_18_SPARSE_DATA \
	Rooks_Source_Rooks_RookAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RookAIController_h_18_INCLASS_NO_PURE_DECLS \
	Rooks_Source_Rooks_RookAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOKS_API UClass* StaticClass<class ARookAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rooks_Source_Rooks_RookAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
