// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoFuriaAtomica.h"
#include "ZombieMutante.h"
// Sets default values
AEstadoFuriaAtomica::AEstadoFuriaAtomica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoFuriaAtomica::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoFuriaAtomica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoFuriaAtomica::RegenerarSalud()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Regenerar Salud Estado Furia Atomica"));
	ZombieMutante->EmitirMensaje();
	ZombieMutante->SetVelocidad(0.9f);
}

void AEstadoFuriaAtomica::Endurar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Endurar Estado FuriaAtomica"));
	//ZombieMutante->EmitirMensaje();
}

void AEstadoFuriaAtomica::Agrandar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Agrandar Estado FuriaAtomica"));
	//ZombieMutante->EmitirMensaje();
}

FString AEstadoFuriaAtomica::ToString()
{
	return "Estado Furia Atomica";
}

void AEstadoFuriaAtomica::DefinirZombieMutante(AZombieMutante* _ZombieMutante)
{

	ZombieMutante = _ZombieMutante; 
}

