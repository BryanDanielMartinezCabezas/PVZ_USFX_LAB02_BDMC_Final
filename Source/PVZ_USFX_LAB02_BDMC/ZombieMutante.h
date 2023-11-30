// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "EstadosMutante.h"
#include "ZombieMutante.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_BDMC_API AZombieMutante : public AZombie
{
	GENERATED_BODY()
public:	
private:


	IEstadosMutante* EstadoComun;


	IEstadosMutante* EstadoMutado;

	IEstadosMutante* EstadoFuriaAtomica;

	IEstadosMutante* EstadoRadiacion;

	int Contador = 0;
public:

	//Initialize this Slot Machine
	void Inicializar(int NivelDeRadiacoin);
	//Insert a Coin
	void RegenerarSalud();
	//Reject a Coin
	void Endurar();
	//Pull the lever of this Slot Machine
	void Agrandar();

	void SetVelocidad(float velocidad);
	//Get the current State of this Slot Machine
	IEstadosMutante* GetEstado();
	//Get the No Dollars State of this Slot Machine
	IEstadosMutante* GetEstadoComun();
	//Get the No Coin State of this Slot Machine
	IEstadosMutante* GetEstadoMutado();
	//Get the Coin Inserted State of this Slot Machine
	IEstadosMutante* GetEstadoFuriaAtomica();

	//Get the String of the current State
	FString GetEstadoActual();

	//Set the Current State with the passed one
	void DefinirEstado(IEstadosMutante* myEstado);

	//Emit Dollars from this Slot Machine
	void EmitirMensaje();

	//Get the amount of dollars in this Slot Machine
	int GetContador();

	//Refill the dollars by the passed amount
	void ExponerRadiacion(int myRadiacion);
};
