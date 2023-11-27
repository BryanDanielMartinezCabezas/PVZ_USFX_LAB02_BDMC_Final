//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "ZombieVampiro.h"
//#include "ZombieNocturno.h"
//
//
//
//AZombieVampiro::AZombieVampiro()
//{
//	VelocidadX = 0.2f;
//	VelocidadZ = 0.2f;
//}
//
//void AZombieVampiro::TransformacionNoche()
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
//	if (!Tiempo.Compare("Dia"))
//	{
//		Velocidad = 0.0f;
//
//		FVector LocalizacionActual = this->GetActorLocation();
//		this->SetActorLocation(FVector(LocalizacionActual.X, LocalizacionActual.Y, LocalizacionActual.Z + 500));
//	}
//
//
//	else if (!Tiempo.Compare("Noche"))
//	{
//		Velocidad = 5.0f;
//	}
//}













