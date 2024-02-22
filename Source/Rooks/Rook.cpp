// Fill out your copyright notice in the Description page of Project Settings.


#include "Rook.h"
#include "RooksCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"


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
	RetreatSphere->bHiddenInGame = true;

	IsMoving = false;
	IsClose = false;
	IsFlying = false;
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

	if (IsFlying) {
		FlyAway(DeltaTime);
	}
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
		IsMoving = false;
		IsClose = false;
		IsFlying = true;
	}
}

void ARook::FlyAway(float DeltaTime)
{
	ACharacter::GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	
	// Set rotation away from the character
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());
	NewRotation.Yaw += 180.f;
	SetActorRotation(NewRotation);

	// Fly away from the character
	FVector NewLocation = GetActorLocation();
	FVector NewMovement = UKismetMathLibrary::GetForwardVector(NewRotation);
	NewLocation.X += NewMovement.X * FlyingSpeed * 2.f * DeltaTime;
	NewLocation.Y += NewMovement.Y * FlyingSpeed * 2.f * DeltaTime;
	NewLocation.Z += FlyingSpeed * DeltaTime;
	SetActorLocation(NewLocation);

	if (GetActorLocation().Z > 1500) {
		Destroy();

		// Delegate execution in Game Mode to spawn new rooks
		OnRookLeft.ExecuteIfBound(); 
	}
} 