// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#include "BTTask_RotateToPlayer.generated.h"

/**
 * 
 */
UCLASS()
class ROOKS_API UBTTask_RotateToPlayer : public UBTTask_RotateToFaceBBEntry
{
	GENERATED_BODY()

	UBTTask_RotateToPlayer(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector PlayerKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};