#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BTTask_Idle.generated.h"

/**
 * 
 */
UCLASS()
class ROOKS_API UBTTask_Idle : public UBTTask_Wait
{
	GENERATED_BODY()
	
	UBTTask_Idle(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
