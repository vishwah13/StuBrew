// Fill out your copyright notice in the Description page of Project Settings.


#include "Containers.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

// Sets default values
AContainers::AContainers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AContainers::ActivateParticalSystem()
{
	EffectInstance->Activate();
}

void AContainers::DeactivateParticalSystem()
{
	EffectInstance->Deactivate();
}

// Called when the game starts or when spawned
void AContainers::BeginPlay()
{
	Super::BeginPlay();

	if (NiagaraSystem)
	{
		EffectInstance = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NiagaraSystem, GetActorLocation());

		EffectInstance->Deactivate();
	}
	
}

// Called every frame
void AContainers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

