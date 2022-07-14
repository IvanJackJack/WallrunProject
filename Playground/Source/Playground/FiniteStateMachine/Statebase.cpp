// Fill out your copyright notice in the Description page of Project Settings.


#include "StateBase.h"
#include "StateMachineComponent.h"
// #include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
// #include "Playground/Utilities/CustomUtils.h"

void UStateBase::Setup(FString newName, FFSMContext newContext) {
	name=newName;

	context = new FFSMContext {
					newContext.characterController,
					newContext.stateMachine
	};

	// if(context->characterController && context->stateMachine) {
	// 	UCustomUtils::Print(name + TEXT(" setup correctly"));
	// }
}

void UStateBase::OnEnter() {
	// UCustomUtils::Print(name + TEXT(" OnEnter"));
}

void UStateBase::OnTick() {

}

void UStateBase::OnExit() {
	// UCustomUtils::Print(name + TEXT(" OnExit"));
}

FString UStateBase::CheckTransition() {
	for (auto transition : Transitions) {
		if(!transition.Value.IsBound())
			continue;

		if(transition.Value.Execute()) {
			return transition.Key;
		}
	}

	return FString("");
}



