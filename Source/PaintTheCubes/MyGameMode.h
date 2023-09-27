// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PAINTTHECUBES_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	
		AMyGameMode();

	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* MoveAction;

	UMaterialInstanceDynamic* TargetCubesMaterialInstance*/
};
