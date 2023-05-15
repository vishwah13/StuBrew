// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers.generated.h"

UCLASS()
class STUBREW_API AContainers : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AContainers();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particles")
	class UNiagaraSystem* NiagaraSystem;

	UFUNCTION(BlueprintCallable)
	void ActivateParticalSystem();
	UFUNCTION(BlueprintCallable)
	void DeactivateParticalSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class UNiagaraComponent* EffectInstance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
