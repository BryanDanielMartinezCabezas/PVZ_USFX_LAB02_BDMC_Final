//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "ZombieFantasma.h"
//#include "ZombieNocturno.h"
//
//AZombieFantasma::AZombieFantasma()
//{
//
//}
//
//void AZombieFantasma::TransformacionNoche()
//{
//
//	//Log Error if its Clock Tower is NULL
//	if (!Luna) {
//		UE_LOG(LogTemp, Error, TEXT("Destroyed(): La luna no existe asegurate que sea inicializada"));
//		return;
//	}
//	//Get the current time of the Clock Tower
//	FString Tiempo = Luna->GetTiempo();
//
//
//	if (!Tiempo.Compare("Dia"))
//	{
//		Velocidad = 0.0f;
//		this->SetActorHiddenInGame(true);
//		this->SetActorEnableCollision(false);
//	}
//
//
//	else if (!Tiempo.Compare("Noche"))
//	{
//		this->SetActorHiddenInGame(false);
//		this->SetActorEnableCollision(true);
//		Velocidad = 0.1f;
//	}
//
//}
