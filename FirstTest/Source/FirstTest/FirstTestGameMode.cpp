// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FirstTestGameMode.h"
#include "FirstTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstTestGameMode::AFirstTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
