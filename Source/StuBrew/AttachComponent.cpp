// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachComponent.h"
//#include "MotionControllerComponent.h"

// Sets default values for this component's properties
UAttachComponent::UAttachComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UAttachComponent::ValveRotate()
{

}

void UAttachComponent::LeverMovement()
{
	/*if (motionController->GetComponentLocation().Z > 0) {
		GetAttachParent()->GetAttachParent()->SetRelativeRotation(FRotator(0, motionController->GetComponentLocation().Z, 0));
	}
	else {
		GetAttachParent()->GetAttachParent()->SetRelativeRotation(FRotator(0, motionController->GetComponentLocation().Z, 0));
	}*/
}

// Called when the game starts
void UAttachComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAttachComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

