#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02_BDMCGameMode.generated.h"


class AZombie;
class APlant;
class AZombieNocturno;


UCLASS(MinimalAPI)
class APVZ_USFX_LAB02_BDMCGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB02_BDMCGameMode();

private:
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ADificil* Dificil;
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class AFacil* Facil;
	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class ASeleccionDificultad* Dificultad;
protected:
	virtual void BeginPlay() override;


private:
	class ALuna* Luna;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle Temporizador;
	FTimerHandle TemporizadorGenerarHorda;
	FTimerHandle TemporizadorGenerarComun;
	FTimerHandle TemporizadorGenerarCubo;
	FTimerHandle TemporizadorGenerarCono;
	FTimerHandle TemporizadorGenerarZombies;
	FTimerHandle TiempoParaNoche;
	FTimerHandle TiempoParaDia;
	FTimerHandle TemporizadorGenerarNocturno;
	FTimerHandle TemporizadorGenerarHombreLobo;
	FTimerHandle TemporizadorGenerarFantasma;
	FTimerHandle TemporizadorGenerarVampiro;
	FVector contador;
	FVector localizacion;
public:
	int contador2;
	float TiempoEntreGeneracion = 5.0f;
	float TiempoTranscurrido;
	float EspaciadoEntreZombies = 200.0f;

	// Declarar un vector de objetos
	TArray<AZombie*> Zombies;
	TArray<AZombieNocturno*> ZombiesNocturnos;



	// Declarar un mapa de objetos PARTE DEL EXAMEN
	TMap<FString, AActor*> PlantasZombies;

	void GenerarHordaDeZombies();
	void GenerarZombieComun();
	void GenerarZombieCubo();
	void GenerarZombieCono();
	//void GenerarZombieNocturno();
	//void GenerarZombieVampiro();
	//void GenerarZombieHombreLobo();
	//void GenerarZombieFantasma();
	//void DefinirNoche();
	//void DefinirDia();
	void aumentovelocidad();
};



