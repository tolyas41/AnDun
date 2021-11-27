// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "andunGameModeBase.generated.h"

DECLARE_EVENT(AandunGameModeBase, FEncounterEvent)

class AEnemy;

UCLASS()
class ANDUN_API AandunGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AandunGameModeBase();

	UFUNCTION()
	void StartEncounter();
	
	FEncounterEvent EncounterEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AEnemy> FirstEnemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AEnemy> SecondEnemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AEnemy> ThirdEnemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AEnemy> FourthEnemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> FirstHero;

	UFUNCTION()
	void SpawnEnemy();

	//bool IsFirstEnemyDead;
	//bool IsSecondEnemyDead;
	//bool IsThirdEnemyDead;
	//bool IsFourthEnemyDead;
};
