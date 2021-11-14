// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ANDUN_EncounterTrigger_generated_h
#error "EncounterTrigger.generated.h already included, missing '#pragma once' in EncounterTrigger.h"
#endif
#define ANDUN_EncounterTrigger_generated_h

#define andun_Source_andun_EncounterTrigger_h_15_SPARSE_DATA
#define andun_Source_andun_EncounterTrigger_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define andun_Source_andun_EncounterTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define andun_Source_andun_EncounterTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEncounterTrigger(); \
	friend struct Z_Construct_UClass_AEncounterTrigger_Statics; \
public: \
	DECLARE_CLASS(AEncounterTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AEncounterTrigger)


#define andun_Source_andun_EncounterTrigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEncounterTrigger(); \
	friend struct Z_Construct_UClass_AEncounterTrigger_Statics; \
public: \
	DECLARE_CLASS(AEncounterTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AEncounterTrigger)


#define andun_Source_andun_EncounterTrigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEncounterTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEncounterTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEncounterTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEncounterTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEncounterTrigger(AEncounterTrigger&&); \
	NO_API AEncounterTrigger(const AEncounterTrigger&); \
public:


#define andun_Source_andun_EncounterTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEncounterTrigger(AEncounterTrigger&&); \
	NO_API AEncounterTrigger(const AEncounterTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEncounterTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEncounterTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEncounterTrigger)


#define andun_Source_andun_EncounterTrigger_h_15_PRIVATE_PROPERTY_OFFSET
#define andun_Source_andun_EncounterTrigger_h_12_PROLOG
#define andun_Source_andun_EncounterTrigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_EncounterTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_EncounterTrigger_h_15_SPARSE_DATA \
	andun_Source_andun_EncounterTrigger_h_15_RPC_WRAPPERS \
	andun_Source_andun_EncounterTrigger_h_15_INCLASS \
	andun_Source_andun_EncounterTrigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define andun_Source_andun_EncounterTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_EncounterTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_EncounterTrigger_h_15_SPARSE_DATA \
	andun_Source_andun_EncounterTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	andun_Source_andun_EncounterTrigger_h_15_INCLASS_NO_PURE_DECLS \
	andun_Source_andun_EncounterTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDUN_API UClass* StaticClass<class AEncounterTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID andun_Source_andun_EncounterTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
