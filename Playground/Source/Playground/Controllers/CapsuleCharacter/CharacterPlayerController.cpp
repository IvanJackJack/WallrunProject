// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterPlayerController.h"

#include "Kismet/GameplayStatics.h"
#include "Playground/UI/CustomHUD.h"
#include "Playground/Utilities/CustomUtils.h"


ACharacterPlayerController::ACharacterPlayerController() {
	
}

void ACharacterPlayerController::BeginPlay() {
	Super::BeginPlay();
	
	if(HUDOverlayAsset) {
		HudOverlay=CreateWidget<UCustomHUD>(this, HUDOverlayAsset);
		if(HudOverlay) {
			HudOverlay->AddToPlayerScreen();
			HudOverlay->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	
	
}

void ACharacterPlayerController::TogglePauseState() {
	// UCustomUtils::Print("Game state toggle");
	bIsGamePaused=!bIsGamePaused;
	bShowMouseCursor=bIsGamePaused;

	if(bIsGamePaused) {
		HudOverlay->SetVisibility(ESlateVisibility::Visible);

		FInputModeGameAndUI inputMode;
		SetInputMode(inputMode);
	}else {
		HudOverlay->SetVisibility(ESlateVisibility::Hidden);

		FInputModeGameOnly inputMode;
		SetInputMode(inputMode);
	}

	// UGameplayStatics::SetGamePaused(GetWorld(), bIsGamePaused);
}
