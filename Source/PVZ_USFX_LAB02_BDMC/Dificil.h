// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModificarDificultad.h"
#include "Dificil.generated.h"

UCLASS()
class PVZ_USFX_LAB02_BDMC_API ADificil : public AActor, public IModificarDificultad
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADificil();
private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Dificultad Dificil")
	class ANormal* Normal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
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
