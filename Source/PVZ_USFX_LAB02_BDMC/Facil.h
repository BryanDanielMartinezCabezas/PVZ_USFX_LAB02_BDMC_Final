// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModificarDificultad.h"
#include "Facil.generated.h"


class AZombie;

UCLASS()
class PVZ_USFX_LAB02_BDMC_API AFacil : public AActor, public IModificarDificultad
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacil();

private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Dificultad facil")
	class ANormal* Normal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	FVector SpawnLocationZombie = FVector(-800.0f, 0.0f, 160.0f);
	FVector LocalizacionObjetivo = FVector(-800.0f, -600.0f, 160.0f);
	FVector Direccion = LocalizacionObjetivo - FVector(-800.0f, 400.0f, 160.0f);
	//FVector SpawnLocationZombie = FVector(-800.0f, 0.0f, 160.0f);
	TArray<AZombie*> Zombies;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Create the Swimming Pool
	virtual void CrearVelocidad() override;
	//Create the Lobby Area
	virtual void CrearVida() override;
	//Create the Restaurants
	virtual void CrearTamano() override;


	virtual class ANormal* GetNormal() override;

};
