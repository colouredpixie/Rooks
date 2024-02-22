#include "BTService_WatchOut.h"
#include "AIController.h"
#include "RooksCharacter.h"
#include "Rook.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/KismetSystemLibrary.h"

UBTService_WatchOut::UBTService_WatchOut(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Watch Out";
	PlayerKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTService_WatchOut, PlayerKey), AActor::StaticClass());
}

void UBTService_WatchOut::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIController* Controller = Cast<AAIController>(OwnerComp.GetOwner());
	if (Controller != nullptr)
	{
		ARook* Rook = Cast<ARook>(Controller->GetPawn());
		if (Rook != nullptr)
		{
			FVector Start = Rook->GetActorLocation();
			FHitResult Hit;

			UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), Start, Start, WatchRadius,
				{ UEngineTypes::ConvertToObjectType(ECC_Pawn) }, false, { }, EDrawDebugTrace::None, Hit, true); 

			ARooksCharacter* Player = Cast<ARooksCharacter>(Hit.Actor);
			Controller->GetBlackboardComponent()->SetValueAsObject(PlayerKey.SelectedKeyName, Player);
		}
	}
}