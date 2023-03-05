// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "MyBTService_LocationIfSeen.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyBTService_LocationIfSeen : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UMyBTService_LocationIfSeen();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float deltaSeconds);

};
