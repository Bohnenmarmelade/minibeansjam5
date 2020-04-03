// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/BoxComponent.h"
#include "HimmelsTor.h"

// Sets default values
AHimmelsTor::AHimmelsTor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(FName("Scene"));
	Scene->SetupAttachment(RootComponent);
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(FName("Collision Box"));
	CollisionBox->SetupAttachment(Scene);
	CollisionBox->SetBoxExtent(FVector(500, 500, 500));
}

// Called when the game starts or when spawned
void AHimmelsTor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHimmelsTor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

