// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundMovingState.h"

#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UGroundMovingState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	FString stateName;

	stateName=FString("GroundIdleState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UGroundMovingState::TransitionToGroundIdle);

	stateName=FString("AirRaisingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UGroundMovingState::TransitionToAirRaising);

	stateName=FString("AirFallingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UGroundMovingState::TransitionToAirFalling);

}

void UGroundMovingState::OnEnter() {
	Super::OnEnter();
}

void UGroundMovingState::OnTick() {
	context->characterController->ApplyGroundMovement();
}

void UGroundMovingState::OnExit() {

}

bool UGroundMovingState::TransitionToGroundIdle() {
	if(context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}

bool UGroundMovingState::TransitionToAirRaising() {
	if(context->characterController->bJumpRequested) {
		if(context->characterController->ConsumeJump()) {
			return true;
		}
	}

	return false;
}

bool UGroundMovingState::TransitionToAirFalling() {
	if(context->characterController->GetVelocity().Z < 0.f) {
		return true;
	}

	return false;
}
