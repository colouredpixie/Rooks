// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Rook.generated.h"

DECLARE_DYNAMIC_DELEGATE(FRookLeft);

UCLASS()
class ROOKS_API ARook : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARook();

	//Perception sphere
	UPROPERTY(VisibleAnywhere)
	USphereComponent* RetreatSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsMoving;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsClose;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsFlying;

	float FlyingSpeed = 300.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float IdleAnimation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Fly away logic when player too close
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void FlyAway(float DeltaTime);

	// Delegate execution
	UPROPERTY()
	FRookLeft OnRookLeft;
};
