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
	CS461_PROTOTYPE_API UFunction* Z_Construct_UFunction_AdCharacter_base_GetTeam();
	CS461_PROTOTYPE_API UFunction* Z_Construct_UFunction_AdCharacter_base_SetTeam();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	void AdCharacter_base::StaticRegisterNativesAdCharacter_base()
	{
		UClass* Class = AdCharacter_base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTeam", &AdCharacter_base::execGetTeam },
			{ "SetTeam", &AdCharacter_base::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AdCharacter_base_GetTeam()
	{
		struct dCharacter_base_eventGetTeam_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(dCharacter_base_eventGetTeam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Team" },
				{ "ModuleRelativePath", "dCharacter_base.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AdCharacter_base, "GetTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(dCharacter_base_eventGetTeam_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AdCharacter_base_SetTeam()
	{
		struct dCharacter_base_eventSetTeam_Parms
		{
			int32 t;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_t = { UE4CodeGen_Private::EPropertyClass::Int, "t", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(dCharacter_base_eventSetTeam_Parms, t), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_t,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Team" },
				{ "ModuleRelativePath", "dCharacter_base.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AdCharacter_base, "SetTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(dCharacter_base_eventSetTeam_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AdCharacter_base_GetTeam, "GetTeam" }, // 2611047218
				{ &Z_Construct_UFunction_AdCharacter_base_SetTeam, "SetTeam" }, // 1939877669
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "dCharacter_base.h" },
				{ "ModuleRelativePath", "dCharacter_base.h" },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AdCharacter_base, IGenericTeamAgentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AdCharacter_base>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AdCharacter_base::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AdCharacter_base, 1474976547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AdCharacter_base(Z_Construct_UClass_AdCharacter_base, &AdCharacter_base::StaticClass, TEXT("/Script/cs461_prototype"), TEXT("AdCharacter_base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AdCharacter_base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
