// Fill out your copyright notice in the Description page of Project Settings.

#include "dCharacter.h"


// Sets default values
AdCharacter::AdCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AdCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AdCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AdCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

