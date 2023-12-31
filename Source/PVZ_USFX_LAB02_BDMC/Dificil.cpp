// Fill out your copyright notice in the Description page of Project Settings.


#include "Dificil.h"
#include "Normal.h"
#include "Zombie.h"
// Sets default values
ADificil::ADificil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADificil::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Normal = GetWorld()->SpawnActor<ANormal> (ANormal::StaticClass());
	//Attach it to the Builder (this)
	Normal->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void ADificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADificil::CrearVelocidad()
{
	if (!Normal) {UE_LOG(LogTemp, Error, TEXT("CrearVelocidad():Normal es NULL, Asegurate de haberlo incializado")); return; }
	//Set the Swimming Pool of the Lodging
	AZombie* zombieNuevo = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
	//AZombie* zombieNuevo = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass());
	Normal->DefinirVelocidad(zombieNuevo, 0.8f);
}

void ADificil::CrearVida()
{
	if (!Normal) {UE_LOG(LogTemp, Error, TEXT("CrearVida():Normal es NULL, Asegurate de haberlo incializado")); return; }
			//Set the Lobby Area of the Lodging
	Normal->DefinirVida(2);

}

void ADificil::CrearTamano()
{
	if (!Normal) {UE_LOG(LogTemp, Error, TEXT("CrearTamano():Normal es NULL, Asegurate de haberlo incializado")); return; }
	//Set the Restaurants of the Lodging
	Normal->DefinirTamano(4);
}


ANormal* ADificil::GetNormal()
{
	return Normal;
}

