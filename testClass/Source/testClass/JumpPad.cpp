#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, text);

// Fill out your copyright notice in the Description page of Project Settings.

#include "JumpPad.h"
#include "Engine.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AJumpPad::AJumpPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	BoxComp = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	BoxComp -> SetupAttachment(RootComponent);

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AJumpPad::OnOverlapBegin);
//	BoxComp->OnComponentEndOverlap.AddDynamic(this, &AJumpPad::OnOverlapEnd);

}

// Called when the game starts or when spawned
void AJumpPad::BeginPlay()
{
	Super::BeginPlay();
	MyCharacter = Cast<AMyCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	UE_LOG(LogTemp, Warning, TEXT("%s, %s"), *MyCharacter->GetName(), *MyCharacter -> GetActorLocation().ToString());
	
}

// Called every frame
void AJumpPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("%s"), *MyCharacter->GetActorLocation().ToString()));
	}
	*/
}


/* overlap component*/
void AJumpPad::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
								int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if (MyCharacter && MyCharacter == OtherActor) 
	{
		MyCharacter->AddMessage();
		MyCharacter->LaunchCharacter(FVector(0, 0, 1000.f), true, false);
		//Destroy();
	}
	bFromSweep = true;
}

void AJumpPad::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	bFromSweep = false;

	
}