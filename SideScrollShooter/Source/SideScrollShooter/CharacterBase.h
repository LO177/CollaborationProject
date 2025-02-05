// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLSHOOTER_API ACharacterBase : public APaperCharacter
{
	GENERATED_BODY()

	ACharacterBase();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AWeaponBase> WeaponType;

	AWeaponBase* CurrentWeapon;

	UFUNCTION(BlueprintCallable)
		void AttachWeapon(FString weaponTypeAttach);
	
	bool hasWeapon = false;
	FString weaponTypeAttach;

public:

	UPROPERTY(BlueprintReadWrite, Category = Health)
		float charHealth = 100.0f;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
		FString directionChar;

	UFUNCTION(BlueprintCallable, Category = Movement)
		void UpdateFireDirection();
};
