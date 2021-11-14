// Fill out your copyright notice in the Description page of Project Settings.


#include "EncounterTrigger.h"
#include "Kismet/GameplayStatics.h"
#include "andunGameModeBase.h"

AEncounterTrigger::AEncounterTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &AEncounterTrigger::OnOverlap);
}


void AEncounterTrigger::BeginPlay()
{
	Super::BeginPlay();


}

void AEncounterTrigger::OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(TheWorld);
		AandunGameModeBase* SomeGameMode = Cast<AandunGameModeBase>(GameMode);
		SomeGameMode->EncounterEvent.Broadcast();
	}

}
