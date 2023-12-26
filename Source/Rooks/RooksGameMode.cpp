// Copyright Epic Games, Inc. All Rights Reserved.

#include "RooksGameMode.h"
#include "RooksHUD.h"
#include "RooksCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARooksGameMode::ARooksGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARooksHUD::StaticClass();
}
