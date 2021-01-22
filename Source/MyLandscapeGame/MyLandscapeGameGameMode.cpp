// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyLandscapeGameGameMode.h"
#include "MyLandscapeGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyLandscapeGameGameMode::AMyLandscapeGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
