// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Playground/CustomComponents/WallrunComponent.h"
#include "CharacterController.generated.h"

enum class EWallrunMode : uint8;
enum class EWallrunEndreason : uint8;
enum class EWallrunSide : uint8;

USTRUCT(BlueprintType)
struct FInput {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	FVector moveInput;

	UPROPERTY(VisibleAnywhere)
	bool bJumpInput;

	UPROPERTY(VisibleAnywhere)
	bool bSprintInput;

	UPROPERTY(VisibleAnywhere)
	bool bSlideInput;
};

UCLASS()
class PLAYGROUND_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

#pragma region UnrealFunctions
public:
	ACharacterController();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	virtual void Landed(const FHitResult& Hit) override;

#pragma endregion

#pragma region Components
public: //Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UCharacterMovementComponent* Movement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UStateMachineComponent* StateMachine;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Component)
	class ACharacterPlayerController* CharacterPlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Component)
	class UWallrunComponent* WallrunComponent;
	
#pragma endregion

#pragma region Status
public: 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Structs)
	FInput inputValues;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool bIsGrounded = true;
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool bJumpRequested;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	int jumpsLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	bool bIsOverlappingPlatform;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	float overlapBodyCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector characterForward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector characterSideward;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector moveDirection;
	FRotator characterRotation;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	FVector lookingDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Status)
	float stamina;

#pragma endregion

#pragma region Parameters
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float cameraRotationSpeed = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float maxStamina=100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	int jumpsMax = 2;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float staminaLoseAmount=2.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Parameters)
	float staminaRecoverAmount=2.5f;



#pragma endregion
	
#pragma region GettersSetters
public: 
	FORCEINLINE
	class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE
	class UCameraComponent* GetCamera() const { return Camera; }

	FORCEINLINE
	class UCapsuleComponent* GetCapsule() const { return Capsule; }

	FORCEINLINE
	FVector GetHorizontalVelocity() const { return FVector(GetVelocity().X, GetVelocity().Y, 0.f); }

	void SetHorizontalVelocity(FVector velocity);

	void SetVelocity(FVector velocity);

	FORCEINLINE
	FVector GetActorVelocity() const { return AActor::GetVelocity(); }

	UFUNCTION(BlueprintCallable)
	float GetStaminaRatio();

	UFUNCTION(BlueprintCallable)
	class UWallrunComponent* GetWallrun() const { return WallrunComponent; }

	UFUNCTION(BlueprintCallable)
	FVector GetWallrunDirection(){return WallrunComponent->wallrunDirection;}

	FORCEINLINE
	void SetStaminaLoseAmount(float maxTime){ staminaLoseAmount=maxStamina/maxTime; }

#pragma endregion

#pragma region InputHandlingFunctions
public: 
	void ReadMoveForwardInput(float value);

	void ReadMoveSidewardInput(float value);

	void TurnCamera(float Rate);

	void LookUpCamera(float Rate);

	void ReadJumpInputStart();

	void ReadJumpInputEnd();

	void ReadSprintInputStart();

	void ReadSprintInputEnd();

	void TogglePause();

#pragma endregion

#pragma region StatusFunctions
	void UpdateCharacterAxis();

	void UpdateMoveDirection();

	void ConsumeStamina(bool useDeltaTime=true);

	void RecoverStamina();

#pragma endregion

#pragma region UtilitiesFunction

	void ClampVelocity();

	void ClampHorizontalVelocity();

	FVector MoveTowardsVector(FVector current, FVector target, float accel);

	void CancelVerticalVelocity();

#pragma endregion

#pragma region MovementFunctions

public:
	void ApplyGroundMovement();

	void ApplyAirMovement();

	void ApplyWallrunMovement();

#pragma endregion

#pragma region JumpFunctions
	void ApplyGroundJump();

	void ApplyAirJump();

	void ApplyWallrunJump();

	void ApplyWallrunEndingJump();

	bool ConsumeJump();

	void ResetJumpCount(int jumps);

	void GroundLeft();

	void GroundLand();

	void WallrunLand();

#pragma endregion

};

