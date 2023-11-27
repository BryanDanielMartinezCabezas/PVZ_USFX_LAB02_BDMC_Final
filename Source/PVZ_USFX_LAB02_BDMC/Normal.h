// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NivelDificultad.h"
#include "Zombie.h"
#include "Normal.generated.h"

UCLASS()
class PVZ_USFX_LAB02_BDMC_API ANormal : public AActor, public INivelDificultad
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANormal();
public:
	// Funci�n para obtener la instancia de AZombie
	 AZombie* GetZombieActor() const;
	 AZombie* zombie;
	 
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
	//Nombre de la velocidad
	
	int Velocidad;
	//Nombre de la vida
	int Vida;
	//Nombre del Tama�o
	int Tamano;
	int velocidadZ;
public:
	//Set the name of the Swimming Pool
	void DefinirVelocidad(int myVelocidad) ;
	//Set the name of the Lobby Area
	void DefinirVida(int myVida) ;
	//Set the name of the Rooms
	void DefinirTamano(int myTamano);
	//Logs all the Lodging floors
	void CaracteristicasNivelDificultad();
	TArray<AZombie*> Zombies;
};
