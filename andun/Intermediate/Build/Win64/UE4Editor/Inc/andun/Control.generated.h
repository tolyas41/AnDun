// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDUN_Control_generated_h
#error "Control.generated.h already included, missing '#pragma once' in Control.h"
#endif
#define ANDUN_Control_generated_h

#define andun_Source_andun_Control_h_15_SPARSE_DATA
#define andun_Source_andun_Control_h_15_RPC_WRAPPERS
#define andun_Source_andun_Control_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define andun_Source_andun_Control_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControl(); \
	friend struct Z_Construct_UClass_AControl_Statics; \
public: \
	DECLARE_CLASS(AControl, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AControl)


#define andun_Source_andun_Control_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAControl(); \
	friend struct Z_Construct_UClass_AControl_Statics; \
public: \
	DECLARE_CLASS(AControl, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/andun"), NO_API) \
	DECLARE_SERIALIZER(AControl)


#define andun_Source_andun_Control_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControl(AControl&&); \
	NO_API AControl(const AControl&); \
public:


#define andun_Source_andun_Control_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControl(AControl&&); \
	NO_API AControl(const AControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControl)


#define andun_Source_andun_Control_h_15_PRIVATE_PROPERTY_OFFSET
#define andun_Source_andun_Control_h_12_PROLOG
#define andun_Source_andun_Control_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_Control_h_15_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_Control_h_15_SPARSE_DATA \
	andun_Source_andun_Control_h_15_RPC_WRAPPERS \
	andun_Source_andun_Control_h_15_INCLASS \
	andun_Source_andun_Control_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define andun_Source_andun_Control_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	andun_Source_andun_Control_h_15_PRIVATE_PROPERTY_OFFSET \
	andun_Source_andun_Control_h_15_SPARSE_DATA \
	andun_Source_andun_Control_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	andun_Source_andun_Control_h_15_INCLASS_NO_PURE_DECLS \
	andun_Source_andun_Control_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDUN_API UClass* StaticClass<class AControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID andun_Source_andun_Control_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
