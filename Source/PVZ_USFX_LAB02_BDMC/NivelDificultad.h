// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NivelDificultad.generated.h"
class AZombie;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNivelDificultad : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_BDMC_API INivelDificultad
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Funciones virtuales puras
	virtual void DefinirVelocidad(AZombie* ZombieActual,float Velocidad) = 0;
	virtual void DefinirVida(int Vida) = 0;
	virtual void DefinirTamano(int Tamano) = 0;
};
