// Fill out your copyright notice in the Description page of Project Settings.


#include "Control.h"
#include "DungeonChar.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"
#include "SelectionArrow.h"

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
	TargetID = 1;
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
		switch (TargetID)
		{
			case 1:
			{
				TargetEnemyAssign("EnemyOne");
				SpawnArrow(TargetEnemy->GetActorLocation());
				break;
			}
			case 2:
			{
				TargetEnemyAssign("EnemyTwo");
				SpawnArrow(TargetEnemy->GetActorLocation());
				break;
			}
			case 3:
			{
				TargetEnemyAssign("EnemyThree");
				SpawnArrow(TargetEnemy->GetActorLocation());
				break;
			}
			case 4:
			{
				TargetEnemyAssign("EnemyFour");
				SpawnArrow(TargetEnemy->GetActorLocation());
				break;
			}
			case 5:
			{
				TargetEnemyAssign("EnemyOne");
				SpawnArrow(TargetEnemy->GetActorLocation());
				TargetID = 1;
				break;
			}
		}
		TargetID++;
		//if (TargetID == 5)
		UE_LOG(LogTemp, Warning, TEXT("Target %i"), TargetID);

	}
}

void AControl::TargetEnemyAssign(FName Tag)
{
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), Tag, EnemyArray);
	if (EnemyArray.IsValidIndex(0))
	{
		TargetEnemy = Cast<AEnemy>(EnemyArray[0]);
		EnemyArray.Empty();
	}
}

void AControl::SpawnArrow(FVector ArrowLocation)
{
	if (!SelectionArrow)
	{ 
		FRotator SpawnRotation;
		SelectionArrow = GetWorld()->SpawnActor<ASelectionArrow>(ArrowClass, ArrowLocation, SpawnRotation);
	}
	else
	{
		FRotator SpawnRotation;
		SelectionArrow->TeleportTo(ArrowLocation, SpawnRotation);
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

