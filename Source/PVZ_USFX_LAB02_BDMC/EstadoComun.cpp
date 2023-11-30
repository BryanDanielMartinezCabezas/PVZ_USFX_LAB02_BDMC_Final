// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoComun.h"
#include "ZombieMutante.h"

// Sets default values
AEstadoComun::AEstadoComun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoComun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoComun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoComun::RegenerarSalud()
{


	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Regenerar Salud Estado Comun"));
	ZombieMutante->EmitirMensaje();
	ZombieMutante->DefinirEstado(ZombieMutante->GetEstadoMutado());
	ZombieMutante->SetVelocidad(0.1f);


}

void AEstadoComun::Endurar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Endurar Estado Comun"));

}

void AEstadoComun::Agrandar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Agrandar Estado Comun"));
	//ZombieMutante->ExponerRadiacion(1);
	ZombieMutante->DefinirEstado(ZombieMutante->GetEstadoMutado());
}

FString AEstadoComun::ToString()
{
	return "Estado Comun";
}

void AEstadoComun::DefinirZombieMutante(AZombieMutante* _ZombieMutante)
{
	ZombieMutante = _ZombieMutante;
}

