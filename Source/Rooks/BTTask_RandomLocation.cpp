#include "BTTask_RandomLocation.h"
#include "NavigationSystem.h"
#include "Rook.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "RookAIController.h"


UBTTask_RandomLocation::UBTTask_RandomLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Get Random Location";
	RandomLocationKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_RandomLocation, RandomLocationKey));
}

EBTNodeResult::Type UBTTask_RandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ARookAIController* Controller = Cast<ARookAIController>(OwnerComp.GetOwner());

	if (Controller == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	FNavLocation ResultLocation;

	if (UNavigationSystemV1::GetNavigationSystem(&OwnerComp)->GetRandomReachablePointInRadius(Controller->GetNavAgentLocation(), 
		PatrolRadius, ResultLocation))
	{
		ARook* Character = Cast<ARook>(Controller->GetPawn());
		
		if (Character != nullptr)
		{

			Controller->GetBlackboardComponent()->SetValueAsVector(RandomLocationKey.SelectedKeyName, ResultLocation.Location);

			return EBTNodeResult::Succeeded;
		}
	}	

	return EBTNodeResult::Failed;
}
