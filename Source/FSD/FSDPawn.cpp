// Fill out your copyright notice in the Description page of Project Settings.


#include "FSDPawn.h"

// Sets default values
AFSDPawn::AFSDPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFSDPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFSDPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFSDPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

