// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Control.generated.h"

class ADungeonChar;

UCLASS()
class ANDUN_API AControl : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

private:
	void MoveForward(float Value);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ADungeonChar> ControlledUnitClass;

	TArray<AActor*> CharArray;
	ADungeonChar* Char1;
	ADungeonChar* Char2;
	ADungeonChar* Char3;
	ADungeonChar* Char4;
};
