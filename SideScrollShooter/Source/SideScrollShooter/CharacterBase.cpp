// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterBase.h"
#include "Engine/World.h"
#include "WeaponBase.h"

ACharacterBase::ACharacterBase() {
	//charHealth = 100.0f;
}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	directionChar = "Right";

	hasWeapon = false;

	/*hasWeapon = true;

	weaponTypeAttach = "Rifle";
	CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(WeaponType, GetActorLocation(), GetActorRotation());
	CurrentWeapon->weaponType = weaponTypeAttach;
	CurrentWeapon->directionWeap = directionChar;*/
}

void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FVector newWeaponLocation = GetActorLocation();
	
	if (hasWeapon) {
		CurrentWeapon->SetActorLocation(GetActorLocation());
	}
}

void ACharacterBase::AttachWeapon(FString weaponTypeAttach) {
	hasWeapon = true;

	CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(WeaponType, GetActorLocation(), GetActorRotation());

	CurrentWeapon->weaponType = weaponTypeAttach;
	CurrentWeapon->directionWeap = directionChar;
}