// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetCube.generated.h"

UCLASS()
class PAINTTHECUBES_API ATargetCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetCube();

protected:
	UStaticMeshComponent* MeshComp = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Game, meta = (AllowPrivateAccess = "true"))
		bool bPurifier = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Game, meta = (AllowPrivateAccess = "true", ClampMin = "0", ClampMax = "1.0", UIMin = "0", UIMax = "1.0"))
		float ChanceOfBecomingPurifier = 0.4;

	virtual void BeginPlay() override;

	//UFUNCTION()
	//void OnOverlapBegin(UPrimitiveComponent* OverlapedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ChangeDirection();

};
