// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTTEST_FirstTestCharacter_generated_h
#error "FirstTestCharacter.generated.h already included, missing '#pragma once' in FirstTestCharacter.h"
#endif
#define FIRSTTEST_FirstTestCharacter_generated_h

#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_RPC_WRAPPERS
#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstTestCharacter(); \
	friend FIRSTTEST_API class UClass* Z_Construct_UClass_AFirstTestCharacter(); \
public: \
	DECLARE_CLASS(AFirstTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstTest"), NO_API) \
	DECLARE_SERIALIZER(AFirstTestCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstTestCharacter(); \
	friend FIRSTTEST_API class UClass* Z_Construct_UClass_AFirstTestCharacter(); \
public: \
	DECLARE_CLASS(AFirstTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstTest"), NO_API) \
	DECLARE_SERIALIZER(AFirstTestCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstTestCharacter(AFirstTestCharacter&&); \
	NO_API AFirstTestCharacter(const AFirstTestCharacter&); \
public:


#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstTestCharacter(AFirstTestCharacter&&); \
	NO_API AFirstTestCharacter(const AFirstTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstTestCharacter)


#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFirstTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFirstTestCharacter, FollowCamera); }


#define FirstTest_Source_FirstTest_FirstTestCharacter_h_9_PROLOG
#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_RPC_WRAPPERS \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_INCLASS \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstTest_Source_FirstTest_FirstTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FirstTest_Source_FirstTest_FirstTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstTest_Source_FirstTest_FirstTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
