// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

UCLASS()
class SIDESCROLLSHOOTER_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AProjectileBase * direction;
	
	 /*struct projectileLocation {
		float x, y, z;
	};

	FVector location = new projectileLocation;*/

	
	float MovDirection;

	UPROPERTY(BlueprintReadWrite, Category = Firing)
		float speedProj;

	UPROPERTY(BlueprintReadWrite, Category = Firing)
		int damageProj;

	UPROPERTY(BlueprintReadWrite, Category = Firing)
		FString casterDirection;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Firing)
		void FiringSetup(const FString& directionFace);
};
