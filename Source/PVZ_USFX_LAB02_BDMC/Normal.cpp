// Fill out your copyright notice in the Description page of Project Settings.


#include "Normal.h"
#include "Zombie.h"
#include "ZombieCono.h"
#include "ZombieComun.h"
#include "ZombieCubo.h"
// Sets default values


ANormal::ANormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANormal::DefinirVelocidad(int myVelocidad)
{
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
//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de velocidad para esta dificultad es: %s"), *FString::SanitizeFloat(Velocidad)));
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de velocidad para este nivel es: %i"), Velocidad));
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de vida para esta dificultad es: %s"), *FString::SanitizeFloat(Vida)));
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de Tamano para esta dificultad es: %s"), *FString::SanitizeFloat(Tamano)));

}

// Called when the game starts or when spawned
void ANormal::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 2; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 0.0f, 160.0f);
		AZombie* NuevoZombieCono = GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieCono);
	}

	// Generar 2 zombies cubo
	for (int i = 0; i < 2; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 100.0f, 160.0f);
		AZombie* NuevoZombieCubo = GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieCubo);
	}

	// Generar 8 zombies comunes
	for (int i = 0; i < 8; i++)
	{
		FVector SpawnLocationZombie = FVector(-800.0f + i * 100.0f, 200.0f, 160.0f);
		AZombie* NuevoZombieComun = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		Zombies.Add(NuevoZombieComun);
	}
}

// Called every frame
void ANormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

