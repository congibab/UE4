#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, text);

// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "Engine.h"
#include "Components/InputComponent.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraattachmentArm"));
	SpringArm->SetupAttachment(GetCapsuleComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ActualCamera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	movement = 0;
	print("We are using MyCharacter");
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
	//LaunchCharacter(FVector(1.0f, 1.0f, 0.0f), true, false);
	
	/*LerpTest
	SetActorLocation(FVector(FMath::Lerp(0, 50, movement)
	, FMath::Lerp(0, 50, movement)
	, FMath::Lerp(0, 50, movement)
	));
	 movement += 100 * DeltaTime;
	 */
	//AnimationControllvariable
	 isMoveing = PressForward||PressRight;
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);



	InputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);

	InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);


	InputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::OnStartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::OnStopJump);
}

void AMyCharacter::MoveForward(float Val)
{
	if ((Controller != NULL) && (Val != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Val);
		PressForward = true;
	}
	else 
	{
		PressForward = false;
	}

}
void AMyCharacter::MoveRight(float Val)
{

	if ((Controller != NULL) && (Val != 0.0f))
	{

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);		
		AddMovementInput(Direction, Val);
		PressRight = true;
	}
	else 
	{
		PressRight = false;
	}
}

void AMyCharacter::OnStartJump()
{
	isJumping = true;
	Jump();
}

void AMyCharacter::OnStopJump()
{
	isJumping = false;

}
void AMyCharacter::AddMessage()
{
	print("test cast");
}

