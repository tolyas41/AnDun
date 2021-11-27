// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Control.generated.h"

class ADungeonChar;
class AEnemy;
class ASelectionArrow;

UCLASS()
class ANDUN_API AControl : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

private:
	void MoveForward(float Value);
	void Attack();
	void SelectTarget();
	void TargetEnemyAssign(FName Tag);
	void SpawnArrow(FVector ArrowLocation);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInBattle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ASelectionArrow> ArrowClass;

	TArray<AActor*> CharArray;
	TArray<AActor*> EnemyArray;
	ADungeonChar* Char1;
	ADungeonChar* Char2;
	ADungeonChar* Char3;
	ADungeonChar* Char4;

	AEnemy* TargetEnemy;
	ASelectionArrow* SelectionArrow;
	int32 TargetID;
};
