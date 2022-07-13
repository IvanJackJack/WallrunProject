// Fill out your copyright notice in the Description page of Project Settings.


#include "WallrunMovingState.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"
#include "Playground/CustomComponents/WallrunComponent.h"

void UWallrunMovingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	FString stateName;

	stateName=FString("AirFallingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToAirFalling);

	stateName=FString("AirRaisingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToAirRaising);

	stateName=FString("GroundMovingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunMovingState::TransitionToGroundMoving);
}

void UWallrunMovingState::OnEnter() {
	Super::OnEnter();
	
	context->characterController->WallrunLand();

	context->characterController->WallrunComponent->BeginWallrun();
}

void UWallrunMovingState::OnTick() {
	context->characterController->WallrunComponent->UpdateWallrunAndInfoIfRayHit();

	context->characterController->ApplyWallrunMovement();

	

	// context->characterController->ConsumeStamina();
}

void UWallrunMovingState::OnExit() {
	context->characterController->WallrunComponent->EndWallrun();

	UCustomUtils::Print("Wallrun end cause of: " + UEnum::GetDisplayValueAsText(context->characterController->WallrunComponent->lastEndReason).ToString());
}

bool UWallrunMovingState::TransitionToAirFalling() {
	if(context->characterController->WallrunComponent->ShouldEndWallrun() && context->characterController->GetVelocity().Z <= 0.f) {
		return true;
	}

	return false;
}

bool UWallrunMovingState::TransitionToAirRaising() {
	if(context->characterController->bJumpRequested) {
		context->characterController->WallrunComponent->SetLastEndreason(EWallrunEndreason::Jump);
		return true;
	}

	if(context->characterController->WallrunComponent->ShouldEndWallrun() && context->characterController->GetVelocity().Z > 0.f) {
		return true;
	}

	return false;
}

bool UWallrunMovingState::TransitionToGroundMoving() {
	if(!context->characterController->Movement->IsFalling()) {
		return true;
	}

	return false;
}
