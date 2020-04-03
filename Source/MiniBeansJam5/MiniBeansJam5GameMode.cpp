// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MiniBeansJam5GameMode.h"
#include "MiniBeansJam5Character.h"
#include "UObject/ConstructorHelpers.h"

AMiniBeansJam5GameMode::AMiniBeansJam5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
