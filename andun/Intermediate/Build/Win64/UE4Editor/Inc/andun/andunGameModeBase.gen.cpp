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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ANDUN_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AandunGameModeBase::execSpawnEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy();
		P_NATIVE_END;
	}
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
			{ "SpawnEnemy", &AandunGameModeBase::execSpawnEnemy },
			{ "StartEncounter", &AandunGameModeBase::execStartEncounter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AandunGameModeBase, nullptr, "SpawnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstEnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FirstEnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondEnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SecondEnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdEnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ThirdEnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourthEnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FourthEnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstHero_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FirstHero;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AandunGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_andun,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AandunGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AandunGameModeBase_SpawnEnemy, "SpawnEnemy" }, // 1317970138
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstEnemyClass_MetaData[] = {
		{ "Category", "andunGameModeBase" },
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstEnemyClass = { "FirstEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AandunGameModeBase, FirstEnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstEnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstEnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_SecondEnemyClass_MetaData[] = {
		{ "Category", "andunGameModeBase" },
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_SecondEnemyClass = { "SecondEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AandunGameModeBase, SecondEnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_SecondEnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_SecondEnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_ThirdEnemyClass_MetaData[] = {
		{ "Category", "andunGameModeBase" },
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_ThirdEnemyClass = { "ThirdEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AandunGameModeBase, ThirdEnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_ThirdEnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_ThirdEnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FourthEnemyClass_MetaData[] = {
		{ "Category", "andunGameModeBase" },
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FourthEnemyClass = { "FourthEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AandunGameModeBase, FourthEnemyClass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FourthEnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FourthEnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstHero_MetaData[] = {
		{ "Category", "andunGameModeBase" },
		{ "ModuleRelativePath", "andunGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstHero = { "FirstHero", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AandunGameModeBase, FirstHero), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstHero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstHero_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AandunGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstEnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_SecondEnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_ThirdEnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FourthEnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AandunGameModeBase_Statics::NewProp_FirstHero,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AandunGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AandunGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AandunGameModeBase_Statics::ClassParams = {
		&AandunGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AandunGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AandunGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AandunGameModeBase, 3291990277);
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
