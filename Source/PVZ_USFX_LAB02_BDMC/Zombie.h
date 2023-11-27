// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS()
class PVZ_USFX_LAB02_BDMC_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshZombie;
public:
	FVector LocalizacionObjetivo = FVector(-800.0f, -600.0f, 160.0f); // Cambia la ubicación objetivo según tus necesidades
	// Calcula la dirección y distancia al objetivo
	FVector Direccion = LocalizacionObjetivo - FVector(-800.0f, 400.0f, 160.0f);
	// Calcula la distancia de al objetivo
	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetVelocidad(int32 myVelocidad);
	float GetVelocidad();
	UPROPERTY(EditAnywhere)
	float Velocidad;
	float VelocidadX;
	float VelocidadZ;

	UPROPERTY(VisibleAnywhere)
	int energia;

	FTimerHandle Temporizador;

	void morir();
};
