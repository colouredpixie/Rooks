#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_WatchOut.generated.h"

/**
 * 
 */
UCLASS()
class ROOKS_API UBTService_WatchOut : public UBTService_BlackboardBase
{
	GENERATED_BODY()

	UBTService_WatchOut(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector PlayerKey;

	UPROPERTY(EditInstanceOnly)
	float WatchRadius;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
