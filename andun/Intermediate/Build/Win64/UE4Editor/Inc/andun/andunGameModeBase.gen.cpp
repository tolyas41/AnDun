// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "andun/andunGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeandunGameModeBase() {}
// Cross Module References
	ANDUN_API UClass* Z_Construct_UClass_AandunGameModeBase_NoRegister();
	ANDUN_API UClass* Z_Construct_UClass_AandunGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_andun();
// End Cross Module References
	DEFINE_FUNCTION(AandunGameModeBase::execStartEncounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEncounter();
		P_NATIVE_END;
	}
	void AandunGameModeBase::StaticRegisterNativesAandunGameModeBase()
	{
		UClass* Class = AandunGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartEncounter", &AandunGameModeBase::execStartEncounter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AandunGameModeBase_StartEncounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AandunGameModeBase_StartEncounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AandunGameModeBase_StartEncounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AandunGameModeBase, nullptr, "StartEncounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AandunGameModeBase_StartEncounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AandunGameModeBase_StartEncounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AandunGameModeBase_StartEncounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AandunGameModeBase_StartEncounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AandunGameModeBase_NoRegister()
	{
		return AandunGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AandunGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AandunGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_andun,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AandunGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AandunGameModeBase_StartEncounter, "StartEncounter" }, // 1125124402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AandunGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "andunGameModeBase.h" },
		{ "ModuleRelativePath", "andunGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AandunGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AandunGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AandunGameModeBase_Statics::ClassParams = {
		&AandunGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AandunGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AandunGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AandunGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AandunGameModeBase, 3167714311);
	template<> ANDUN_API UClass* StaticClass<AandunGameModeBase>()
	{
		return AandunGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AandunGameModeBase(Z_Construct_UClass_AandunGameModeBase, &AandunGameModeBase::StaticClass, TEXT("/Script/andun"), TEXT("AandunGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AandunGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
