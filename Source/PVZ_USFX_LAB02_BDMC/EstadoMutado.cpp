// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoMutado.h"
#include "ZombieMutante.h"

// Sets default values
AEstadoMutado::AEstadoMutado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoMutado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoMutado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoMutado::RegenerarSalud()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("RegenerarSalud Estado Mutado"));
	ZombieMutante->EmitirMensaje();
	ZombieMutante->DefinirEstado(ZombieMutante->GetEstadoFuriaAtomica());
	ZombieMutante->SetVelocidad(0.0f);
}

void AEstadoMutado::Endurar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Endurar Estado Mutado"));
	ZombieMutante->EmitirMensaje();
	ZombieMutante->DefinirEstado(ZombieMutante->GetEstadoComun());
}

void AEstadoMutado::Agrandar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Agrandar Estado Mutado"));

	ZombieMutante->DefinirEstado(ZombieMutante->GetEstadoFuriaAtomica());
}

FString AEstadoMutado::ToString()
{
	return "Estado Mutado";
}

void AEstadoMutado::DefinirZombieMutante(AZombieMutante* _ZombieMutante)
{
	ZombieMutante = _ZombieMutante;
}

