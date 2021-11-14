// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonChar.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ADungeonChar::ADungeonChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetConstraintMode(EDOFMode::YZPlane);

}

// Called when the game starts or when spawned
void ADungeonChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADungeonChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADungeonChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADungeonChar::MoveForward(float Value)
{
	AddMovementInput(FVector(0, Value, 0));
}
