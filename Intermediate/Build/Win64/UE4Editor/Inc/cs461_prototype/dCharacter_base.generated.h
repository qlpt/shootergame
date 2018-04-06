// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CS461_PROTOTYPE_dCharacter_base_generated_h
#error "dCharacter_base.generated.h already included, missing '#pragma once' in dCharacter_base.h"
#endif
#define CS461_PROTOTYPE_dCharacter_base_generated_h

#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_t); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeam(Z_Param_t); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeam(); \
		P_NATIVE_END; \
	}


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_t); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeam(Z_Param_t); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeam(); \
		P_NATIVE_END; \
	}


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAdCharacter_base(); \
	friend CS461_PROTOTYPE_API class UClass* Z_Construct_UClass_AdCharacter_base(); \
public: \
	DECLARE_CLASS(AdCharacter_base, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/cs461_prototype"), NO_API) \
	DECLARE_SERIALIZER(AdCharacter_base) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AdCharacter_base*>(this); }


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAdCharacter_base(); \
	friend CS461_PROTOTYPE_API class UClass* Z_Construct_UClass_AdCharacter_base(); \
public: \
	DECLARE_CLASS(AdCharacter_base, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/cs461_prototype"), NO_API) \
	DECLARE_SERIALIZER(AdCharacter_base) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AdCharacter_base*>(this); }


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AdCharacter_base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AdCharacter_base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AdCharacter_base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdCharacter_base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AdCharacter_base(AdCharacter_base&&); \
	NO_API AdCharacter_base(const AdCharacter_base&); \
public:


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AdCharacter_base(AdCharacter_base&&); \
	NO_API AdCharacter_base(const AdCharacter_base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AdCharacter_base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdCharacter_base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AdCharacter_base)


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_PRIVATE_PROPERTY_OFFSET
#define shootergame_Source_cs461_prototype_dCharacter_base_h_11_PROLOG
#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_PRIVATE_PROPERTY_OFFSET \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_RPC_WRAPPERS \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_INCLASS \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define shootergame_Source_cs461_prototype_dCharacter_base_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_PRIVATE_PROPERTY_OFFSET \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_INCLASS_NO_PURE_DECLS \
	shootergame_Source_cs461_prototype_dCharacter_base_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID shootergame_Source_cs461_prototype_dCharacter_base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
