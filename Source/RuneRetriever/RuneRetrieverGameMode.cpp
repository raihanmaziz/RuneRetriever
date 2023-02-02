// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuneRetrieverGameMode.h"
#include "RuneRetrieverCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARuneRetrieverGameMode::ARuneRetrieverGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
