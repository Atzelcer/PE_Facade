// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorMedio.h"

// Sets default values
AGestorMedio::AGestorMedio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyLifeMedium = 200.0f;
	EnemySpeedMedium = 300.0f;
	EnemyDamageMedium = 20.0f;
	EnemyOleadasMedium = 10;
	BonusesMedium = 5;
	
}

// Called when the game starts or when spawned
void AGestorMedio::BeginPlay()
{
	Super::BeginPlay();

	EnemySpeed();
	EnemyLife();
	EnemyDamage();
	EnemyOleadas();
	Bonuses();

	// Enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass());
	// Bonus = GetWorld()->SpawnActor<ABonus>(ABonus::StaticClass());
	// EnemigoFactory = GetWorld()->SpawnActor<AFactoryEnemy>(AFactoryEnemy::StaticClass());
}

// Called every frame
void AGestorMedio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorMedio::EnemyLife()
{

	if (GEngine)
	{
		// Enemigo -> SetEnemyLife(EnemyLifeMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}
}

void AGestorMedio::EnemySpeed()
{

	if (GEngine)
	{
		// Enemigo -> SetEnemySpeed(EnemySpeedMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La velocidad del enemigo es: %f"), EnemySpeedMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la velocidad del enemigo"));
	}
}

void AGestorMedio::EnemyDamage()
{
	if (GEngine)
	{
		// Enemigo -> SetEnemyDamage(EnemyDamageMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El daño del enemigo es: %f"), EnemyDamageMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el daño del enemigo"));
	}
}

void AGestorMedio::EnemyOleadas()
{
	if (GEngine)
	{
		// Enemigo -> SetEnemyOleadas(EnemyOleadasMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de oleadas es: %d"), EnemyOleadasMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de oleadas"));
	}
}

void AGestorMedio::Bonuses()
{
	if (GEngine)
	{
		// Enemigo -> SetBonuses(BonusesMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de bonus es: %d"), BonusesMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de bonus"));
	}
}

