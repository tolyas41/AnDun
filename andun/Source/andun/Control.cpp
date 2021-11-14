// Fill out your copyright notice in the Description page of Project Settings.


#include "Control.h"
#include "DungeonChar.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"

void AControl::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "One", CharArray);
	Char1 = Cast<ADungeonChar>(CharArray[0]);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Two", CharArray);
	Char2 = Cast<ADungeonChar>(CharArray[0]);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Three", CharArray);
	Char3 = Cast<ADungeonChar>(CharArray[0]);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Four", CharArray);
	Char4 = Cast<ADungeonChar>(CharArray[0]);

	IsInBattle = false;
}


void AControl::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &AControl::MoveForward);
	InputComponent->BindAction("Attack", IE_Pressed, this, &AControl::Attack);
	InputComponent->BindAction("SelectTarget", IE_Pressed, this, &AControl::SelectTarget);

}


void AControl::SelectTarget()
{
	if (IsInBattle) 
	{
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EnemyOne", EnemyArray);
		TargetEnemy = Cast<AEnemy>(EnemyArray[0]);
	}
}

void AControl::Attack()
{
	if (TargetEnemy)
	{
		TargetEnemy->Health -= Char1->Damage;
		if (TargetEnemy->Health <= 0)
			TargetEnemy->Destroy();
	}
}

void AControl::MoveForward(float Value)
{
	if (!IsInBattle)
	{
		if (Char1)
			Char1->AddMovementInput(FVector(0, Value, 0));
		if (Char2)
			Char2->AddMovementInput(FVector(0, Value, 0));
		if (Char3)
			Char3->AddMovementInput(FVector(0, Value, 0));
		if (Char4)
			Char4->AddMovementInput(FVector(0, Value, 0));

		GetPawn()->AddActorLocalOffset(FVector(0, -2 * Value, 0));
	}
}

