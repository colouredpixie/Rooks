// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "RookAIController.generated.h"

/**
 * 
 */
UCLASS()
class ROOKS_API ARookAIController : public AAIController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Trace();

	UPROPERTY(VisibleAnywhere)
	FVector TraceLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceRadius = 1500.0f;

};
