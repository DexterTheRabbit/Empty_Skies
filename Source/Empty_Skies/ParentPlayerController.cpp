// Fill out your copyright notice in the Description page of Project Settings.

#include "Empty_Skies.h"
#include "ParentPlayerController.h"



AParentPlayerController::AParentPlayerController(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{
}
void AParentPlayerController::SetMousePosition(float LocationX, float LocationY)
{
	FViewport* v = CastChecked<ULocalPlayer>(this->Player)->ViewportClient->Viewport;
	int intX = (int)LocationX;
	int intY = (int)LocationY;
	v->SetMouse(intX, intY);
	
}

