// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyProjectGameModeBase.h"
#include "KillGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AKillGameModeBase : public AMyProjectGameModeBase
{
	GENERATED_BODY()
public:
	virtual void PawnKilled(APawn* PawnKilled) override;
private:
	void EndGame(bool IsPlayerWinner);
};
