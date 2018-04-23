// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPCController_base.generated.h"

/**
 * 
 */
UCLASS()
class CS461_PROTOTYPE_API ANPCController_base : public AAIController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Team")
		int GetTeam();
	UFUNCTION(BlueprintCallable, Category = "Team")
		void SetTeam(int t);
	
	
};
