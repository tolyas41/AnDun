// Copyright Epic Games, Inc. All Rights Reserved.


#include "andunGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Control.h"
#include "Enemy.h"


AandunGameModeBase::AandunGameModeBase()
{
	EncounterEvent.AddUFunction(this, FName("StartEncounter"));
}

void AandunGameModeBase::StartEncounter()
{
	UE_LOG(LogTemp, Warning, TEXT("Encounter starts"));
	
	Cast<AControl>(UGameplayStatics::GetPlayerController(GetWorld(), 0))->IsInBattle = true;
	SpawnEnemy();
}

void AandunGameModeBase::SpawnEnemy()
{
	int32 min_range = 1;
	int32 max_range = 4;
	int32 EnemyNumber = FMath::RandRange(min_range, max_range);

	FVector SpawnLocation = UGameplayStatics::GetActorOfClass(GetWorld(), FirstHero)->GetActorLocation();
	SpawnLocation.Y -= 200.0f;
	FRotator SpawnRotation = UGameplayStatics::GetActorOfClass(GetWorld(), FirstHero)->GetActorRotation();
	UE_LOG(LogTemp, Warning, TEXT("Enemies %i"), EnemyNumber);

	for (int32 i = 1; i <= EnemyNumber; i++)
	{
		if (i == 1)
			GetWorld()->SpawnActor<AEnemy>(FirstEnemyClass, SpawnLocation, SpawnRotation);
		if (i == 2)
			GetWorld()->SpawnActor<AEnemy>(SecondEnemyClass, SpawnLocation, SpawnRotation);
		if (i == 3)
			GetWorld()->SpawnActor<AEnemy>(ThirdEnemyClass, SpawnLocation, SpawnRotation);
		if (i == 4)
			GetWorld()->SpawnActor<AEnemy>(FourthEnemyClass, SpawnLocation, SpawnRotation);
		SpawnLocation.Y -= 50.0f;
	}

}