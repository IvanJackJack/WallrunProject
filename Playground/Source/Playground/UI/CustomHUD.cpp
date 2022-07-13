// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomHUD.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterController.h"
#include "Playground/CustomComponents/WallrunComponent.h"
#include "Playground/Utilities/CustomUtils.h"
#include "Kismet/KismetSystemLibrary.h"

void UCustomHUD::NativePreConstruct() {
	Super::NativePreConstruct();

	CharacterController=Cast<ACharacterController>(GetOwningPlayerPawn());
	if(CharacterController) {
		StateMachine=CharacterController->StateMachine;
		// if(StateMachine)
		// 	UCustomUtils::Print("Custom HUD Character State Machine reference ready");
	}
}

void UCustomHUD::SetReducedGravity(float value) {
	CharacterController->WallrunComponent->SetReducedGravity(value);
}

void UCustomHUD::SetGravityMode(int index) {
	EGravityMode mode = static_cast<EGravityMode>(index);
	CharacterController->WallrunComponent->SetGravityMode(mode);
	
}

void UCustomHUD::SetWallrunMode(int wallrunMode, int keyMode) {
	EWallrunMode mode=static_cast<EWallrunMode>(wallrunMode);


	switch (keyMode) {
		case 0: //horizontal
			CharacterController->WallrunComponent->SetDesiredHorizontalWallrunMode(mode);
			break;

		case 1: //vertical
			CharacterController->WallrunComponent->SetDesiredVerticalWallrunMode(mode);
			break;

		case 2: //diagonal
			CharacterController->WallrunComponent->SetDesiredDiagonalWallrunMode(mode);
			break;

		default:
			break;
	}

}

void UCustomHUD::CloseGame() {
	UWorld* world=GetWorld();
	APlayerController* controller=UGameplayStatics::GetPlayerController(world, 0);

	UKismetSystemLibrary::QuitGame(world, controller, EQuitPreference::Quit, false);
}


