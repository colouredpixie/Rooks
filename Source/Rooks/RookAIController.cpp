// Fill out your copyright notice in the Description page of Project Settings.


#include "RookAIController.h"


void ARookAIController::Trace()
{
	TraceLocation = GetPawn()->GetActorLocation();
	TraceRadius = 1500.0f;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes = { UEngineTypes::ConvertToObjectType(ECC_Pawn) };
	FHitResult OutHit;

	bool Hit = UKismetSystemLibrary::SphereTraceSingleForObjects(this,
		TraceLocation,
		TraceLocation,
		TraceRadius,
		ObjectTypes,
		true,
		{ this },
		EDrawDebugTrace::ForDuration,
		OutHit,
		true,
		FLinearColor::Yellow,
		FLinearColor::Red,
		1.0f);

	GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Player")), OutHit.GetActor());
}
