// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosMutante.h"
#include "EstadoFuriaAtomica.generated.h"

UCLASS()
class PVZ_USFX_LAB02_BDMC_API AEstadoFuriaAtomica : public AActor, public IEstadosMutante
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoFuriaAtomica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	//The Slot Machine of this State
	UPROPERTY()
	class AZombieMutante* ZombieMutante;

public:
	//The pure virtual functions of the State
	virtual void RegenerarSalud() override;
	virtual void Endurar() override;
	virtual void Agrandar() override;
	virtual FString ToString() override;
	virtual void DefinirZombieMutante(class AZombieMutante* _ZombieMutante) override;

};
