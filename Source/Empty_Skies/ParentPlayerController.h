// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/PlayerController.h"
#include "ParentPlayerController.generated.h"

/**
 * 
 */
UCLASS(config = Game, BlueprintType, Blueprintable, meta = (ShortTooltip = "A Player Controller is an actor responsible for controlling a Pawn used by the player."))
class EMPTY_SKIES_API AParentPlayerController : public APlayerController
{
	GENERATED_UCLASS_BODY()
	
	
		UFUNCTION(BlueprintCallable, Category = "Game|Player")
		void SetMousePosition(float LocationX, float LocationY);
	
};
