// Copyright Epic Games, Inc. All Rights Reserved.

#include "Plugin_TestGameMode.h"
#include "Plugin_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlugin_TestGameMode::APlugin_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
