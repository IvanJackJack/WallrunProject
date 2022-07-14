// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Playground/FiniteStateMachine/StateBase.h"
#include "GroundLandedState.generated.h"


UCLASS()
class PLAYGROUND_API UGroundLandedState : public UStateBase
{
	GENERATED_BODY()
	
public:
	virtual void Setup(FString newName, FFSMContext newContext) override;
	virtual void OnEnter() override;
	virtual void OnTick() override;
	virtual void OnExit() override;

public:
	bool TransitionToGroundIdle();
	bool TransitionToGroundMoving();
};
