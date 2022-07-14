// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleState.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"


void UIdleState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);
	FString stateName;

	stateName=FString("GroundMovingState");
	Transitions.Add(stateName , BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UIdleState::TransitionToGroundMoving);

	stateName=FString("AirRaisingState");
	Transitions.Add(stateName , BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UIdleState::TransitionToAirRaising);
	
	stateName=FString("AirFallingState");
	Transitions.Add(stateName , BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UIdleState::TransitionToAirFalling);

}

void UIdleState::OnEnter() {
	Super::OnEnter();
}

void UIdleState::OnTick() {
	// context->characterController->GroundCheck();
	context->characterController->ApplyGroundMovement();
}

void UIdleState::OnExit() {

}

bool UIdleState::TransitionToGroundMoving() {
	if(!context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}

bool UIdleState::TransitionToAirRaising() {
	if(context->characterController->bJumpRequested) {
		if(context->characterController->ConsumeJump()) {
			return true;
		}
	}

	return false;
}

bool UIdleState::TransitionToAirFalling() {
	if(context->characterController->GetVelocity().Z < 0.f) {
		return true;
	}

	return false;
}
