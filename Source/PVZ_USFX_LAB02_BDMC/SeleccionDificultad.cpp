// Fill out your copyright notice in the Description page of Project Settings.


#include "SeleccionDificultad.h"
#include "Normal.h"

// Sets default values
ASeleccionDificultad::ASeleccionDificultad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void ASeleccionDificultad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASeleccionDificultad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ASeleccionDificultad::DefinirConstructorDif(AActor* ConstructorDif)
{
	//Cast the passed Actor and set the Builder
	ModificarDificultad = Cast<IModificarDificultad>(ConstructorDif);
	if (!ModificarDificultad) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Casteo invalido mira el registro de salida para mas informacion "));
		UE_LOG(LogTemp, Error, TEXT("DefinirConstructorDif(): El actor no es un ModificarNivel! Estas seguro que el actor implementa esa interfaz? "));
	}
}

ANormal* ASeleccionDificultad::GetNormal()
{
	if (ModificarDificultad)
	{
		//Returns the Lodging of the Builder
		return ModificarDificultad->GetNormal();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetNormal(): Retorna nullptr"));
	return nullptr;

}

void ASeleccionDificultad::ConstruirDificultad()
{
	//Log if the Builder is NULL
	if (!ModificarDificultad) {UE_LOG(LogTemp, Error,TEXT("ConstruirDificultad(): ModificadorDificultad es NULL, asegurate que haya sido inicializado")); 
	return; 
	}
	//Creates the buildings
	ModificarDificultad->CrearVelocidad();
	ModificarDificultad->CrearVida();
	ModificarDificultad->CrearTamano();
}	


