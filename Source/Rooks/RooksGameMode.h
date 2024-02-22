// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Rook.h"
#include "RooksGameMode.generated.h"

UCLASS(minimalapi)
class ARooksGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARooksGameMode();

	UPROPERTY(EditAnywhere, Category = Rooks)
	int MaxRookNumber = 15;

	UPROPERTY(VisibleAnywhere, Category = Rooks)
	int CurrentRookNumber = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int RooksLeft;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Rooks)
	TSubclassOf<ARook> RookClass;

	// Listen to delegate from rooks
	UFUNCTION()
	void RooksListener();

	UFUNCTION()
	void SpawnRooks();

protected:
	virtual void BeginPlay();
};



