#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RandomLocation.generated.h"

/**
 * 
 */
UCLASS()
class ROOKS_API UBTTask_RandomLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	UBTTask_RandomLocation(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector RandomLocationKey;

	UPROPERTY(EditInstanceOnly)
	float PatrolRadius;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
