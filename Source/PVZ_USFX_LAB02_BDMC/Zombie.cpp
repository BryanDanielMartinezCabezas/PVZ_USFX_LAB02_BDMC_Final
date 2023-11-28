// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshZombie = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zombie Mesh"));
	RootComponent = MeshZombie;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset2(TEXT("StaticMesh'/Game/StarterContent/Architecture/Pillar_50x500.Pillar_50x500'"));
	MeshZombie->SetStaticMesh(ZombieMeshAsset.Object);

	energia = 100;
	Velocidad = 0.2f;

	//InitialLifeSpan = 5; //Para que el actor se destruya
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();

	//Otra forma para que el actor se destruya
	//World->GetTimerManager().SetTimer(Temporizador, this, &AZombie::morir, 2, false);

}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaAlObjetivo)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(LocalizacionObjetivo);
	}
	else
	{
		// Mueve el objeto en la dirección calculada
		this->AddActorWorldOffset(Direccion * DeltaMove);

    }


	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));


}
void AZombie::SetVelocidad(int32 myVelocidad)
{
	Velocidad = myVelocidad;
}

float AZombie::GetVelocidad() 
{
	return Velocidad;
}


void AZombie::morir()
{
	Destroy();			//El actor se destruye
	this->Destroy();		//El actor también se destruye
	SetActorHiddenInGame(true);	//El actor sólo desaparece
}

