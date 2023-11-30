// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieMutante.h"
#include "EstadoComun.h"
#include "EstadoMutado.h"
#include "EstadoFuriaAtomica.h"

void AZombieMutante::Inicializar(int NivelDeRadiacoin)
{
	//Spanw the No Dollars State and set this Slot Machine to it
	EstadoComun = GetWorld()->SpawnActor<AEstadoComun>(AEstadoComun::StaticClass());
	EstadoComun->DefinirZombieMutante(this);
	//Spanw the No Coin State and set this Slot Machine to it
	EstadoMutado = GetWorld()->SpawnActor<AEstadoMutado>(AEstadoMutado::StaticClass());
	EstadoMutado->DefinirZombieMutante(this);
	//Spanw the Coin Inserted State and set this Slot Machine to it
	EstadoFuriaAtomica = GetWorld()->SpawnActor<AEstadoFuriaAtomica>(AEstadoFuriaAtomica::StaticClass());
	EstadoFuriaAtomica->DefinirZombieMutante(this);

	Contador = NivelDeRadiacoin;

	if (NivelDeRadiacoin == 3) {	
		EstadoRadiacion = EstadoComun;
	}
	if (NivelDeRadiacoin == 2) {
		EstadoRadiacion = EstadoMutado;
	}
	if (NivelDeRadiacoin == 1) {
		EstadoRadiacion = EstadoFuriaAtomica;
	}
}
void AZombieMutante::EmitirMensaje()
{
	FString myString = "La Radiacion es de:  ";
	myString += FString::FromInt(Contador);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, *myString);

	Contador--;
}

void AZombieMutante::RegenerarSalud()
{
	EstadoRadiacion->RegenerarSalud();
}

void AZombieMutante::Endurar()
{
	EstadoRadiacion->Endurar();
}

void AZombieMutante::Agrandar()
{
	EstadoRadiacion->Agrandar();
}

void AZombieMutante::SetVelocidad(float velocidad)
{
	Velocidad = velocidad;
}

IEstadosMutante* AZombieMutante::GetEstado()
{
	return EstadoRadiacion;
}

IEstadosMutante* AZombieMutante::GetEstadoComun()
{
	return EstadoComun;
}

IEstadosMutante* AZombieMutante::GetEstadoMutado()
{
	return EstadoMutado;
}

IEstadosMutante* AZombieMutante::GetEstadoFuriaAtomica()
{
	return EstadoFuriaAtomica;
}

FString AZombieMutante::GetEstadoActual()
{
	return "Estado Actual del Zombie Mutanate es:" + EstadoRadiacion->ToString();
}

void AZombieMutante::DefinirEstado(IEstadosMutante* myEstado)
{
	EstadoRadiacion = myEstado;
}

int AZombieMutante::GetContador()
{
	return Contador;
}

void AZombieMutante::ExponerRadiacion(int myRadiacion)
{
	Contador = myRadiacion;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Las Radiacion  : % i"), Contador));

}


