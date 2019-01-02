// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileBase.h"


// Sets default values
AProjectileBase::AProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	//speedProj = 20.0f;
	//damageProj = 10;

	casterDirection = "Right";
}

// Called every frame
void AProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*direction->SetActorRotation(GetActorRotation());

	if (casterDirection == "Right") {
		MovDirection = 90.0f;
		this->SetActorLocation(GetActorLocation() + speedProj);
	}
	else if (casterDirection == "Left") {
		MovDirection = -90.0f;
		this->SetActorLocation(GetActorLocation() - speedProj);
	}*/
}

void AProjectileBase::FiringSetup_Implementation(const FString& directionFace)
{
}