// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachineComponent.generated.h"

class UStateBase;
class ACharacterController;
class UStateMachineComponent;

USTRUCT()
struct FFSMContext {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	ACharacterController* characterController;

	UPROPERTY(VisibleAnywhere)
	UStateMachineComponent* stateMachine;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYGROUND_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachineComponent();

public:
	UPROPERTY(VisibleAnywhere)
	FFSMContext context;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStateBase* currentState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStateBase* previousState;

	UPROPERTY(EditDefaultsOnly)
	TMap<FString, TSubclassOf<UStateBase>> statesMap;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	void Setup(FFSMContext newContext);

	void SetCurrentState(UStateBase* newState);

	UFUNCTION(BlueprintCallable)
	FString GetCurrentStateName();
};
