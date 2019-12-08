// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, text);

#include "MyAnimInstance.h"
#include "Engine/Engine.h"
#include "kismet/GameplayStatics.h"

UMyAnimInstance::UMyAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UMyAnimInstance::NativeBeginPlay()
{
}

void UMyAnimInstance::NativeInitializeAnimation()
{
	OwningPawn = TryGetPawnOwner();
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	if (!OwningPawn) return;

	 GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("player Name=%s"), *OwningPawn->GetName()));

}


void UMyAnimInstance::NativeUninitializeAnimation()
{
}
