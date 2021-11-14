// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDUN_andunGameModeBase_generated_h
#error "andunGameModeBase.generated.h already included, missing '#pragma once' in andunGameModeBase.h"
#endif
#define ANDUN_andunGameModeBase_generated_h

#define andun_Source_andun_andunGameModeBase_h_14_SPARSE_DATA
#define andun_Source_andun_andunGameModeBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartEncounter);


#define andun_Source_andun_andunGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartEncounter);


#define andun_Source_andun_andunGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAandunGameModeBase(); \
	friend struct Z_Construct_UClass_AandunGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AandunGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AandunGameModeBase)


#define andun_Source_andun_andunGameModeBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAandunGameModeBase(); \
	friend struct Z_Construct_UClass_AandunGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AandunGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AandunGameModeBase)


#define andun_Source_andun_andunGameModeBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AandunGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AandunGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AandunGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AandunGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AandunGameModeBase(AandunGameModeBase&&); \
	NO_API AandunGameModeBase(const AandunGameModeBase&); \
public:


#define andun_Source_andun_andunGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AandunGameModeBase(AandunGameModeBase&&); \
	NO_API AandunGameModeBase(const AandunGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AandunGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AandunGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AandunGameModeBase)


#define andun_Source_andun_andunGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET
#define andun_Source_andun_andunGameModeBase_h_11_PROLOG
#define andun_Source_andun_andunGameModeBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_andunGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_andunGameModeBase_h_14_SPARSE_DATA \
	andun_Source_andun_andunGameModeBase_h_14_RPC_WRAPPERS \
	andun_Source_andun_andunGameModeBase_h_14_INCLASS \
	andun_Source_andun_andunGameModeBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define andun_Source_andun_andunGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_andunGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_andunGameModeBase_h_14_SPARSE_DATA \
	andun_Source_andun_andunGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	andun_Source_andun_andunGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	andun_Source_andun_andunGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDUN_API UClass* StaticClass<class AandunGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID andun_Source_andun_andunGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
