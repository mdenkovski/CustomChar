// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomCharGameMode.h"
#include "CustomCharCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACustomCharGameMode::ACustomCharGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
