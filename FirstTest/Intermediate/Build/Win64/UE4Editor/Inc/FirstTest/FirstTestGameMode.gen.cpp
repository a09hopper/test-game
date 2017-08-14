// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FirstTestGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstTestGameMode() {}
// Cross Module References
	FIRSTTEST_API UClass* Z_Construct_UClass_AFirstTestGameMode_NoRegister();
	FIRSTTEST_API UClass* Z_Construct_UClass_AFirstTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstTest();
// End Cross Module References
	void AFirstTestGameMode::StaticRegisterNativesAFirstTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstTestGameMode_NoRegister()
	{
		return AFirstTestGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFirstTestGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_FirstTest();
			OuterClass = AFirstTestGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFirstTestGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FirstTestGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FirstTestGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstTestGameMode, 1953167748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstTestGameMode(Z_Construct_UClass_AFirstTestGameMode, &AFirstTestGameMode::StaticClass, TEXT("/Script/FirstTest"), TEXT("AFirstTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
