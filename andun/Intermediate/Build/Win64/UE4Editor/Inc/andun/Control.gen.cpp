// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "andun/Control.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControl() {}
// Cross Module References
	ANDUN_API UClass* Z_Construct_UClass_AControl_NoRegister();
	ANDUN_API UClass* Z_Construct_UClass_AControl();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_andun();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ANDUN_API UClass* Z_Construct_UClass_ADungeonChar_NoRegister();
// End Cross Module References
	void AControl::StaticRegisterNativesAControl()
	{
	}
	UClass* Z_Construct_UClass_AControl_NoRegister()
	{
		return AControl::StaticClass();
	}
	struct Z_Construct_UClass_AControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledUnitClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControlledUnitClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_andun,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControl_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Control.h" },
		{ "ModuleRelativePath", "Control.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControl_Statics::NewProp_ControlledUnitClass_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Control.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AControl_Statics::NewProp_ControlledUnitClass = { "ControlledUnitClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AControl, ControlledUnitClass), Z_Construct_UClass_ADungeonChar_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AControl_Statics::NewProp_ControlledUnitClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControl_Statics::NewProp_ControlledUnitClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControl_Statics::NewProp_ControlledUnitClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControl_Statics::ClassParams = {
		&AControl::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AControl_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControl, 2082339581);
	template<> ANDUN_API UClass* StaticClass<AControl>()
	{
		return AControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControl(Z_Construct_UClass_AControl, &AControl::StaticClass, TEXT("/Script/andun"), TEXT("AControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
