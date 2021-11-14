// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "andunGameModeBase.generated.h"

DECLARE_EVENT(AandunGameModeBase, FEncounterEvent)

UCLASS()
class ANDUN_API AandunGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AandunGameModeBase();

	UFUNCTION()
	void StartEncounter();
	
	FEncounterEvent EncounterEvent;

};
