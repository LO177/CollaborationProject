// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponBase.h"
#include "Engine/GameEngine.h"
#include "ProjectileBase.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::FireWeapon()
{
	//FString GetWorld()->SpawnActor<AProjectileBase>(ProjectileType, GetActorLocation(), GetActorRotation());
}

void AWeaponBase::AttachWeapon() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Weapon attached!"));

	//weaponType = 1;

	/*playerPointer = &2DSideScrollerCharacter;

	FVector Location(playerPointer.x, playerPointer.y, playerPointer.z);
	FVector Rotation(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor<WeaponRifle>(Location, Rotation);*/
}