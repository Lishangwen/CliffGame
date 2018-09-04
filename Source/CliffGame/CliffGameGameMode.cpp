// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CliffGameGameMode.h"
#include "CliffGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACliffGameGameMode::ACliffGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
