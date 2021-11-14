// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EncounterTrigger.generated.h"

/**
 * 
 */
UCLASS()
class ANDUN_API AEncounterTrigger : public ATriggerBox
{
	GENERATED_BODY()
public:
	AEncounterTrigger();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

};
