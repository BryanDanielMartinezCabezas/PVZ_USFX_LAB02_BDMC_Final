// Fill out your copyright notice in the Description page of Project Settings.


//#include "AnunciadorDiaNoche.h"
//
//
//AAnunciadorDiaNoche::AAnunciadorDiaNoche()
//{
//
//}
//
//
//void AAnunciadorDiaNoche::TransformacionNoche()
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
//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Es de %s, Los zombies Nocturnos no pueden usar sus poderes"), *Tiempo));
//	}
//
//
//	else if (!Tiempo.Compare("Noche"))
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Es de %s, Los zombies Nocturnos estan mas feroces que nunca! Huye!"), *Tiempo));
//	}
//}
