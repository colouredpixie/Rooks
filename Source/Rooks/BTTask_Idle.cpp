#include "BTTask_Idle.h"
#include "Rook.h"
#include "RookAIController.h"
#include "Math/UnrealMathUtility.h"


UBTTask_Idle::UBTTask_Idle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Idle Action";
}

EBTNodeResult::Type UBTTask_Idle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
	FBTWaitTaskMemory* MyMemory = (FBTWaitTaskMemory*)NodeMemory;
	MyMemory->RemainingWaitTime = FMath::FRandRange(FMath::Max(0.0f, WaitTime - RandomDeviation), (WaitTime + RandomDeviation));

	ARookAIController* Controller = Cast<ARookAIController>(OwnerComp.GetOwner());
	ARook* Character = Cast<ARook>(Controller->GetPawn());

	if (Character != nullptr)
	{
		Character->IsMoving = false;

		Character->IdleAnimation = FMath::RandRange(0.f, 4.f);
	}

	return EBTNodeResult::InProgress;
}