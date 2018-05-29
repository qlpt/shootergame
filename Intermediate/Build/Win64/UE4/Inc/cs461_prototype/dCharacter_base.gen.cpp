// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "dCharacter_base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedCharacter_base() {}
// Cross Module References
	CS461_PROTOTYPE_API UClass* Z_Construct_UClass_AdCharacter_base_NoRegister();
	CS461_PROTOTYPE_API UClass* Z_Construct_UClass_AdCharacter_base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_cs461_prototype();
// End Cross Module References
	void AdCharacter_base::StaticRegisterNativesAdCharacter_base()
	{
	}
	UClass* Z_Construct_UClass_AdCharacter_base_NoRegister()
	{
		return AdCharacter_base::StaticClass();
	}
	UClass* Z_Construct_UClass_AdCharacter_base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_cs461_prototype,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "dCharacter_base.h" },
				{ "ModuleRelativePath", "dCharacter_base.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AdCharacter_base>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AdCharacter_base::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AdCharacter_base, 3641759390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AdCharacter_base(Z_Construct_UClass_AdCharacter_base, &AdCharacter_base::StaticClass, TEXT("/Script/cs461_prototype"), TEXT("AdCharacter_base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AdCharacter_base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
