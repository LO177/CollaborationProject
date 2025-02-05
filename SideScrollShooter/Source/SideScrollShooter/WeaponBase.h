// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UInputComponent;

UCLASS()
class SIDESCROLLSHOOTER_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponBase();

	FString weaponType;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
		FString directionWeap;

	UPROPERTY(BlueprintReadWrite, Category = Firing)
		int directProj;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon)
		int ammoAttribute;

	UFUNCTION(BluePrintImplementableEvent, Category = "Pickup")
		void OnActivate(AActor* pickedUpBy);

	AActor* playerPointer = NULL;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//int weaponType;

	UFUNCTION(BlueprintCallable, Category = Firing)
		void FireWeapon();

	/*UFUNCTION(BlueprintImplementableEvent)
		void OnWeaponFired();*/

	UFUNCTION(BlueprintCallable)
		void AttachWeapon();

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AProjectileBase> ProjectileType;

	float fireDelay;
};
