// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject3GameMode.h"
#include "MyProject3PlayerController.h"
#include "MyProject3Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject3GameMode::AMyProject3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMyProject3PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Character/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}