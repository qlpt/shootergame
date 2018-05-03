// Fill out your copyright notice in the Description page of Project Settings.

#include "dCharacter_base.h"


// Sets default values
AdCharacter_base::AdCharacter_base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AdCharacter_base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AdCharacter_base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AdCharacter_base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*
FGenericTeamId AdCharacter_base::GetGenericTeamId() const
{
	return TeamID;

}

void AdCharacter_base::SetGenericTeamId(const FGenericTeamId &t)
{
	TeamID = t;
}

int AdCharacter_base::GetTeam()
{
	return GetGenericTeamId().GetId();
}

void AdCharacter_base::SetTeam(int t)
{
	SetGenericTeamId(FGenericTeamId(t));
}
*/
