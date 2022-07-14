// Fill out your copyright notice in the Description page of Project Settings.


#include "WallrunLeftState.h"

#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
#include "Playground/Utilities/CustomUtils.h"

void UWallrunLeftState::Setup(FString newName, FFSMContext newContext) {
	Super::Setup(newName, newContext);

	FString stateName;
	
	stateName=FString("AirRaisingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunLeftState::TransitionToAirRaising);

	stateName=FString("AirFallingState");
	Transitions.Add(stateName, BoolFunctionDelegate() );
	Transitions[stateName].BindUObject(this, &UWallrunLeftState::TransitionToAirFalling);

}

void UWallrunLeftState::OnEnter() {
	Super::OnEnter();
}

void UWallrunLeftState::OnTick() {
	context->characterController->ApplyAirMovement();
}

void UWallrunLeftState::OnExit() {

}

bool UWallrunLeftState::TransitionToAirRaising() {
	if(context->characterController->GetVelocity().Z > 0.f) {
		return true;
	}

	return false;
}

bool UWallrunLeftState::TransitionToAirFalling() {
	if(context->characterController->GetVelocity().Z < 0.f) {
		return true;
	}

	return false;
}
