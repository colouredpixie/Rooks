// Copyright Epic Games, Inc. All Rights Reserved.

#include "RooksGameMode.h"
#include "RooksHUD.h"
#include "RooksCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ARooksGameMode::ARooksGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARooksHUD::StaticClass();

	RooksLeft = 0;
}

void ARooksGameMode::BeginPlay() 
{
	// Call the base class  
	Super::BeginPlay();

	// Set current number of rooks based on level design
	TArray< AActor* > OutActors;
	TArray<ARook*> MyActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), OutActors);
	for (AActor* a : OutActors)
	{
		ARook* RookPTR = Cast<ARook>(a);
		if (RookPTR) {
			MyActors.Add(RookPTR);
		}
	}
	CurrentRookNumber += MyActors.Num();

	// Start state spawn
	SpawnRooks();
}

void ARooksGameMode::RooksListener() {
	CurrentRookNumber--;
	RooksLeft++;

	SpawnRooks();
}

void ARooksGameMode::SpawnRooks()
{
	while (CurrentRookNumber < MaxRookNumber) {
		FVector RandLocation{ FMath::RandRange(-7500.f, 7500.f), FMath::RandRange(-7500.f, 7500.f), 210.f };
		FRotator Rotation = FRotator::ZeroRotator;
		FActorSpawnParameters SpawnParameters;

		// Spawning rooks characters. Delegate has to be bound to actual instance of class
		ARook* Rook = GetWorld()->SpawnActor<ARook>(RookClass, RandLocation, Rotation, SpawnParameters);
		Rook->OnRookLeft.BindDynamic(this, &ARooksGameMode::RooksListener);			

		CurrentRookNumber++;
	}
}

