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

void ANormal::DefinirVelocidad(AZombie* ZombieActual,float myVelocidad)
{

	ZombieActual->Velocidad = myVelocidad;
	VelocidadN = ZombieActual->Velocidad;
	//VelocidadN = zombie->Velocidad;
	//VelocidadA = myVelocidad;
	//zombie->Velocidad=VelocidadN;
	//if (!zombie) { UE_LOG(LogTemp, Error, TEXT("DefinirVelocidad():zombie es NULL, Asegurate de haberlo incializado")); return; }
	//else{ UE_LOG(LogTemp, Error, TEXT("Else")); return; }
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Mensaje fuera del If; %f"), VelocidadN));
	//zombie->Velocidad = VelocidadN;
}

void ANormal::DefinirVida(int myVida)
{
	Vida = 1;
}

void ANormal::DefinirTamano(int myTamano)
{
	Tamano = myTamano;
}

void ANormal::SetZombie(AZombie* _Zombie)
{
	Zombie2 = _Zombie;
}

void ANormal::CaracteristicasNivelDificultad()
{
	// Logs the name of each floors
//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de velocidad para esta dificultad es: %s"), *FString::SanitizeFloat(Velocidad)));
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de velocidad para este nivel es: %f"), VelocidadN));
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de vida para esta dificultad es: %s"), *FString::SanitizeFloat(Vida)));
GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("La cantidad de Tamano para esta dificultad es: %s"), *FString::SanitizeFloat(Tamano)));

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

