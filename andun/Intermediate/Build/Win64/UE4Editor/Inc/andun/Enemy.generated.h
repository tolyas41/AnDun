// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDUN_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define ANDUN_Enemy_generated_h

#define andun_Source_andun_Enemy_h_12_SPARSE_DATA
#define andun_Source_andun_Enemy_h_12_RPC_WRAPPERS
#define andun_Source_andun_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define andun_Source_andun_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define andun_Source_andun_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define andun_Source_andun_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define andun_Source_andun_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define andun_Source_andun_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define andun_Source_andun_Enemy_h_9_PROLOG
#define andun_Source_andun_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_Enemy_h_12_SPARSE_DATA \
	andun_Source_andun_Enemy_h_12_RPC_WRAPPERS \
	andun_Source_andun_Enemy_h_12_INCLASS \
	andun_Source_andun_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define andun_Source_andun_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_Enemy_h_12_SPARSE_DATA \
	andun_Source_andun_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	andun_Source_andun_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	andun_Source_andun_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDUN_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID andun_Source_andun_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
