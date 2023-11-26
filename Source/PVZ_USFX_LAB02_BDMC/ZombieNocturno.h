//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "Zombie.h"
//#include "Suscriptor.h"
//#include "TransformacionNoche.h"
//#include "ZombieNocturno.generated.h"
//
//class ALuna;
///**
// * 
// */
//UCLASS()
//class PVZ_USFX_LAB02_BDMC_API AZombieNocturno : public AZombie, public ISuscriptor, public ITransformacionNoche
//{
//	GENERATED_BODY()
//public:
//	AZombieNocturno();
//	
//protected:
//	//The Clock Tower of this Subscriber
//	UPROPERTY()
//	ALuna* Luna;
//public:
//	virtual void Destroyed() override;
//
//	virtual void Actualizar(class APublicador* Publicador) override;
//
//
//	virtual void TransformacionNoche();
//	void DefinirZombieNoc(ALuna* myLuna);
//
//};
