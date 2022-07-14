// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachineComponent.h"
#include "StateBase.h"

UStateMachineComponent::UStateMachineComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if(!currentState) {
		return;
	}

	currentState->OnTick();

	FString transitionName=currentState->CheckTransition();
	if(statesMap.Contains(transitionName)) {
		SetCurrentState(statesMap.Find(transitionName)->GetDefaultObject());
	}
}

void UStateMachineComponent::Setup(FFSMContext newContext) {
	context=newContext;

	for (auto kvp : statesMap) {
		kvp.Value.GetDefaultObject()->Setup(kvp.Key, context);	
	}

	TArray<FString> names;
	statesMap.GenerateKeyArray(names);
	SetCurrentState(statesMap.Find(names[0])->GetDefaultObject());
}

void UStateMachineComponent::SetCurrentState(UStateBase* newState) {
	if(currentState) {
		previousState=currentState;
		currentState->OnExit();
	}

	currentState=newState;

	currentState->OnEnter();
}

FString UStateMachineComponent::GetCurrentStateName() {
	if(currentState) {
		return currentState->name;
	}

	return FString("No state");
}

