// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTask_MoveToRandomLocation.generated.h"

/**
 * 
 */
UCLASS()
class ROOKS_API UBTTask_MoveToRandomLocation : public UBTTask_MoveTo
{
	GENERATED_BODY()
	
	UBTTask_MoveToRandomLocation(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector RandomLocationKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
