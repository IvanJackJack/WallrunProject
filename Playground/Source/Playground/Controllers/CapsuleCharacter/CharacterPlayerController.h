// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterPlayerController.generated.h"


class UCustomHUD;

UCLASS()
class PLAYGROUND_API ACharacterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACharacterPlayerController();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UI)
	TSubclassOf<UCustomHUD> HUDOverlayAsset;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=UI)
	UCustomHUD* HudOverlay;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Status)
	bool bIsGamePaused=false;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void TogglePauseState();
};
