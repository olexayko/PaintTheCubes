#include "TargetCube.h"

ATargetCube::ATargetCube()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATargetCube::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATargetCube::ChangeDirection, 0.7, true);

	if (FMath::RandRange(0.f, 1.f) < ChanceOfBecomingPurifier)
	{
		bPurifier = true;
	}

	MeshComp = FindComponentByClass<UStaticMeshComponent>();
	MeshComp->SetLinearDamping(0);
}

void ATargetCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

void ATargetCube::ChangeDirection()
{
	FVector ForceToAdd = FVector(1000, 0, 0);
	float DegreeToRotate = FMath::RandRange(0, 360);

	FRotator Rotation = FRotator(0, DegreeToRotate, 0);
	ForceToAdd = Rotation.RotateVector(ForceToAdd);

	MeshComp->SetPhysicsLinearVelocity(ForceToAdd);
}

