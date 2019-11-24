// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TESTCLASS_JumpPad_generated_h
#error "JumpPad.generated.h already included, missing '#pragma once' in JumpPad.h"
#endif
#define TESTCLASS_JumpPad_generated_h

#define testClass_Source_testClass_JumpPad_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define testClass_Source_testClass_JumpPad_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define testClass_Source_testClass_JumpPad_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJumpPad(); \
	friend struct Z_Construct_UClass_AJumpPad_Statics; \
public: \
	DECLARE_CLASS(AJumpPad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/testClass"), NO_API) \
	DECLARE_SERIALIZER(AJumpPad)


#define testClass_Source_testClass_JumpPad_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAJumpPad(); \
	friend struct Z_Construct_UClass_AJumpPad_Statics; \
public: \
	DECLARE_CLASS(AJumpPad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/testClass"), NO_API) \
	DECLARE_SERIALIZER(AJumpPad)


#define testClass_Source_testClass_JumpPad_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJumpPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJumpPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumpPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumpPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJumpPad(AJumpPad&&); \
	NO_API AJumpPad(const AJumpPad&); \
public:


#define testClass_Source_testClass_JumpPad_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJumpPad(AJumpPad&&); \
	NO_API AJumpPad(const AJumpPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumpPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumpPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJumpPad)


#define testClass_Source_testClass_JumpPad_h_14_PRIVATE_PROPERTY_OFFSET
#define testClass_Source_testClass_JumpPad_h_11_PROLOG
#define testClass_Source_testClass_JumpPad_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testClass_Source_testClass_JumpPad_h_14_PRIVATE_PROPERTY_OFFSET \
	testClass_Source_testClass_JumpPad_h_14_RPC_WRAPPERS \
	testClass_Source_testClass_JumpPad_h_14_INCLASS \
	testClass_Source_testClass_JumpPad_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define testClass_Source_testClass_JumpPad_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testClass_Source_testClass_JumpPad_h_14_PRIVATE_PROPERTY_OFFSET \
	testClass_Source_testClass_JumpPad_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	testClass_Source_testClass_JumpPad_h_14_INCLASS_NO_PURE_DECLS \
	testClass_Source_testClass_JumpPad_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testClass_Source_testClass_JumpPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
