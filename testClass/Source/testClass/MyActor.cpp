// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"
#include "JumpPad.h"
#include "kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	GetJumpPad();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::GetJumpPad()// Find Object
{
	TArray<AActor*> Object;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AJumpPad::StaticClass(), Object);// (Getworld(), FindClass, Variabble)

	if (Object.Num())
	{
	
		for (int i = 0; i < Object.Num(); i++)
		{
			AJumpPad* test = Cast<AJumpPad>(Object[i]);

			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("Acctor Name=%s"), *test->GetName()));
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::FromInt(Object.Num()));
	}
}	



