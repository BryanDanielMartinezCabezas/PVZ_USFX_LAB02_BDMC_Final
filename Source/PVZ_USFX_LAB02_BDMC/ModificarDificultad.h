// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModificarDificultad.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UModificarDificultad : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_BDMC_API IModificarDificultad
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the LodgingBuilder
	virtual void CrearVelocidad() = 0;
	virtual void CrearVida() = 0;
	virtual void CrearTamano() = 0;
	virtual class ANormal* GetNormal() = 0;
};
