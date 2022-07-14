// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundLandedState.h"

#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UGroundLandedState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);
	FString stateName;

	stateName=FString("GroundIdleState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UGroundLandedState::TransitionToGroundIdle);

	stateName=FString("GroundMovingState");
	Transitions.Add( stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UGroundLandedState::TransitionToGroundMoving);
	
}

void UGroundLandedState::OnEnter() {
	Super::OnEnter();

	context->characterController->GroundLand();
}

void UGroundLandedState::OnTick() {
}

void UGroundLandedState::OnExit() {
	Super::OnExit();
}

bool UGroundLandedState::TransitionToGroundIdle() {
	if(context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}

bool UGroundLandedState::TransitionToGroundMoving() {
	if(!context->characterController->GetVelocity().IsNearlyZero()) {
		return true;
	}
	return false;
}
