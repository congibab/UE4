// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/Pawn.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTCLASS_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UMyAnimInstance(const FObjectInitializer& ObjectInitializer);

		virtual void NativeBeginPlay() override;
		virtual void NativeInitializeAnimation() override;
		virtual void NativeUpdateAnimation(float DeltaTime) override;
		virtual void NativeUninitializeAnimation() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimMotion")
		bool isMoving = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimMotion")
		bool isRun;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimMotion")
		bool test;

	APawn * OwningPawn;
};
