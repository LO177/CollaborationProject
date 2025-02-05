// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.h"
#include "PickupBase.generated.h"


class USphereComponent;

UCLASS()
class SIDESCROLLSHOOTER_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupBase();

	void NotifyActorBeginOverlap(AActor * OtherActor);

	UFUNCTION(BluePrintImplementableEvent, Category = "Pickup")
	void OnActivate(AActor* pickedUpBy);

	UFUNCTION(BluePrintCallable)
		void PickedUp(AActor* PickedUpBy);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
