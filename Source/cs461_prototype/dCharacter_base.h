// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GenericTeamAgentInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "dCharacter_base.generated.h"


UCLASS()
class CS461_PROTOTYPE_API AdCharacter_base : public ACharacter//, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AdCharacter_base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//FGenericTeamId TeamID = FGenericTeamId(9);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	/*
	UFUNCTION(BlueprintPure, Category = "Team")
		int GetTeam();
	UFUNCTION(BlueprintCallable, Category = "Team")
		void SetTeam(int t);
		*/
	//virtual FGenericTeamId GetGenericTeamId() const override;
	//virtual void SetGenericTeamId(const FGenericTeamId &t) override;


	
	
};
