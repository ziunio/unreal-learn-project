// Fill out your copyright notice in the Description page of Project Settings.

#include "Costam.h"


// Sets default values
ACostam::ACostam()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACostam::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACostam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

