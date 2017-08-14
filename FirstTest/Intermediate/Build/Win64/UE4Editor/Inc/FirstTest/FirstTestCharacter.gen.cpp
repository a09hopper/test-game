// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FirstTestCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstTestCharacter() {}
// Cross Module References
	FIRSTTEST_API UClass* Z_Construct_UClass_AFirstTestCharacter_NoRegister();
	FIRSTTEST_API UClass* Z_Construct_UClass_AFirstTestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FirstTest();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AFirstTestCharacter::StaticRegisterNativesAFirstTestCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFirstTestCharacter_NoRegister()
	{
		return AFirstTestCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFirstTestCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FirstTest();
			OuterClass = AFirstTestCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AFirstTestCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AFirstTestCharacter), 0x0010000000020015);
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, AFirstTestCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AFirstTestCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AFirstTestCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FirstTestCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FirstTestCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("FirstTestCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("FirstTestCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("FirstTestCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("FirstTestCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstTestCharacter, 2425615748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstTestCharacter(Z_Construct_UClass_AFirstTestCharacter, &AFirstTestCharacter::StaticClass, TEXT("/Script/FirstTest"), TEXT("AFirstTestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstTestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
