// Fill out your copyright notice in the Description page of Project Settings.


#include "KillGameModeBase.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"

void AKillGameModeBase::PawnKilled(APawn* PawnKilled)
{
	Super::PawnKilled(PawnKilled);


	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr)
	{
		EndGame(false);
	}
	UE_LOG(LogTemp, Warning, TEXT("Player Killed!"));
}

void AKillGameModeBase::EndGame(bool bIsPlayerWinner)
{
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsPlayerController = Controller->IsPlayerController();
		if (bIsPlayerWinner)
		{
			Controller->GameHasEnded(Controller->GetPawn(), bIsPlayerController);
		}
		
	}
}
