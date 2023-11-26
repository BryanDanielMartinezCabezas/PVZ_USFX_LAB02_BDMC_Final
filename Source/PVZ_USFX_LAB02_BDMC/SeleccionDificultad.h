// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModificarDificultad.h"
#include "SeleccionDificultad.generated.h"

UCLASS()
class PVZ_USFX_LAB02_BDMC_API ASeleccionDificultad : public AActor
{
	GENERATED_BODY()
private:
	//The Builder Actor, that must be a LodgingBuilder
	IModificarDificultad* ModificarDificultad;
public:	
	// Sets default values for this actor's properties
	ASeleccionDificultad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creates the buildings
	void ConstruirDificultad();
	//Set the Builder Actor
	void DefinirConstructorDif(AActor* ConstructorDif);
	//Get the Lodging of the Builder
	class ANormal* GetNormal();

};
