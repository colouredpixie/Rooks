// Fill out your copyright notice in the Description page of Project Settings.


#include "Rook.h"
#include "RooksCharacter.h"

// Sets default values
ARook::ARook()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RetreatSphere = CreateDefaultSubobject<USphereComponent>(TEXT("RetreatSphere"));
	RetreatSphere->SetSphereRadius(500.f, true);
	RetreatSphere->SetGenerateOverlapEvents(true);
	RetreatSphere->SetupAttachment(RootComponent);
	RetreatSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	RetreatSphere->bHiddenInGame = false;

	IsMoving = false;
	IsClose = false;
	IsFlying = false;;
}

// Called when the game starts or when spawned
void ARook::BeginPlay()
{
	Super::BeginPlay();
	RetreatSphere->OnComponentBeginOverlap.AddDynamic(this, &ARook::OnBeginOverlap);
}

// Called every frame
void ARook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARook::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARook::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComponent,
	int OtherBodyIndex, bool FromSweep,
	const FHitResult& SweepResult)
{
	ARooksCharacter* Character = Cast<ARooksCharacter>(OtherActor);
	if (Character) {
		IsFlying = true;

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 10.f, FColor::Red, FString::Printf(TEXT("Flying away!")));
		}
	}

}

void ARook::OnEndOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComponent,
	int OtherBodyIndex)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 10.f, FColor::Purple, FString::Printf(TEXT("End overlapped with %s"), *OtherActor->GetName()));
	}
}

