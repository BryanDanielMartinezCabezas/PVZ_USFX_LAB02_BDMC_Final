//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "ZombieHombreLobo.h"
//
//AZombieHombreLobo::AZombieHombreLobo()
//{
//
//}
//
//void AZombieHombreLobo::TransformacionNoche()
//{
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
//	}
//
//
//	else if (!Tiempo.Compare("Noche"))
//	{
//		this->SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));
//		Velocidad = 0.1f;
//	}
//
//}
