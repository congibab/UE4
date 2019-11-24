// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Math/UnrealMathVectorCommon.h"
#include "GameFramework/SpringArmComponent.h"
#include "MyCharacter.generated.h"

UCLASS()
class TESTCLASS_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UParticleSystem* OurPticleSystem;

	UFUNCTION()
		void MoveForward(float Val);
	UFUNCTION()
		void MoveRight(float Val);

	UFUNCTION()
		void OnStartJump();
	UFUNCTION()
		void OnStopJump();

	UFUNCTION()
		void AddMessage();

	/*
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* CameraComponent;
	AMyCharacter(const FObjectInitializer& ObjectInitializer);
	*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = FootPlacement)
		bool isJumping;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = FootPlacement)
		bool isMoveing;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* Camera;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = FootPlacement)
	//bool Moving;

	float movement;

	bool PressForward;
	bool PressRight;


};
