// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateBase.generated.h"


struct FFSMContext;
// class StateTransitions;

DECLARE_DELEGATE_RetVal(bool, BoolFunctionDelegate)

UCLASS(Blueprintable)
class PLAYGROUND_API UStateBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString name;
	
	FFSMContext* context;

	TMap< FString, BoolFunctionDelegate > Transitions;

public:
	virtual void Setup(FString newName, FFSMContext newContext);

	virtual void OnEnter();
	virtual void OnTick();
	virtual void OnExit();

	virtual FString CheckTransition();

	// virtual void AddTransition(FString destinationState, UObject* owner, ) {
	// 	Transitions.Add(destinationState, BoolFunctionDelegate());
	// 	Transitions[destinationState].BindUObject(owner, checkFunction);
	// }

	// BoolFunctionDelegate AddTransition(FString destinationState) {
	// 	Transitions.Add(destinationState, BoolFunctionDelegate());
	// 	return Transitions[destinationState];
	// }
	//
	// void AddTra(FString destinationState, UStateBase* owner, TMemFunPtrType<false, TSubclassOf<UStateBase>&, bool()>::Type func) {
	// 	Transitions.Add(destinationState, BoolFunctionDelegate());
	// 	Transitions[destinationState].BindUObject(owner, func);
	// }

};
