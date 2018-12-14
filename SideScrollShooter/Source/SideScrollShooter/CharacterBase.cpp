// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterBase.h"
#include "Engine/World.h"
#include "WeaponBase.h"

ACharacterBase::ACharacterBase() {

}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(WeaponType,GetActorLocation(), GetActorRotation());
}

void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FVector newWeaponLocation = GetActorLocation();
	CurrentWeapon->SetActorLocation(GetActorLocation());
}