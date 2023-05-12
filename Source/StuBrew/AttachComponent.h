// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AttachComponent.generated.h"




UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STUBREW_API UAttachComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttachComponent();
	
	UPROPERTY(EditDefaultsOnly, Category = "attach")
	bool bIsAttached = false;

	UFUNCTION(BlueprintCallable)
	void ValveRotate();
	//UFUNCTION(BlueprintCallable)
	void LeverMovement();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	//UPROPERTY(EditDefaultsOnly, Category = "Controller")
	//UMotionControllerComponent* motionController = nullptr;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
