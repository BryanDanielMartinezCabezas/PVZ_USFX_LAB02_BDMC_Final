// Fill out your copyright notice in the Description page of Project Settings.


#include "Facil.h"
#include "Normal.h"
// Sets default values
AFacil::AFacil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacil::BeginPlay()
{
	Super::BeginPlay();
	//Spawn the Lodging Actors
	Normal = GetWorld()->SpawnActor<ANormal>(ANormal::StaticClass());
	//Attach it to the Builder (this)
	Normal->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AFacil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacil::CrearVelocidad()
{
	if (!Normal) { UE_LOG(LogTemp, Error, TEXT("CrearVelocidad():Normal es NULL, Asegurate de haberlo incializado")); return; }
	//Set the Swimming Pool of the Lodging
	Normal->DefinirVelocidad(1);
}

void AFacil::CrearVida()
{
	if (!Normal) { UE_LOG(LogTemp, Error, TEXT("CrearVida():Normal es NULL, Asegurate de haberlo incializado")); return; }
	//Set the Lobby Area of the Lodging
	Normal->DefinirVida(1);
}

void AFacil::CrearTamano()
{
	if (!Normal) {UE_LOG(LogTemp, Error, TEXT("BuildRooms():Lodging is NULL, make sure it's initialized.")); return; }
			//Set the Rooms of the Lodging
	Normal->DefinirTamano(0);

}



ANormal* AFacil::GetNormal()
{
	return nullptr;
}



