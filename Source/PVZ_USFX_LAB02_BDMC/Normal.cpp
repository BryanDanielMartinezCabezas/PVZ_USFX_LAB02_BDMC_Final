// Fill out your copyright notice in the Description page of Project Settings.


#include "Normal.h"

// Sets default values
ANormal::ANormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANormal::DefinirVelocidad(int myVelocidad)
{
	//Set the name of the Swimming Pool with the passed String
	Velocidad = myVelocidad;
}

void ANormal::DefinirVida(int myVida)
{
	Vida = myVida;
}

void ANormal::DefinirTamano(int myTamano)
{
	Tamano = myTamano;
}

void ANormal::CaracteristicasNivelDificultad()
{
	// Logs the name of each floors
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de velocidad para esta dificultad es: %i"), Velocidad));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de vida para esta dificultad es: %i"), Vida));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de Tamano para esta dificultad es: %i"), Tamano));
}

// Called when the game starts or when spawned
void ANormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

