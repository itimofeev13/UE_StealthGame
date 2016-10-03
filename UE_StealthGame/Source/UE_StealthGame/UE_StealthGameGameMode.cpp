// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UE_StealthGame.h"
#include "UE_StealthGameGameMode.h"
#include "UE_StealthGameCharacter.h"

AUE_StealthGameGameMode::AUE_StealthGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
