// Copyright Epic Games, Inc. All Rights Reserved.


#include "andunGameModeBase.h"


AandunGameModeBase::AandunGameModeBase()
{
	EncounterEvent.AddUFunction(this, FName("StartEncounter"));
}

void AandunGameModeBase::StartEncounter()
{
	UE_LOG(LogTemp, Warning, TEXT("Encounter starts"));
	
}
