// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorDificil.h"

// Sets default values
AGestorDificil::AGestorDificil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyLifeExtreme = 300.0f;
	EnemySpeedExtreme = 400.0f;
	EnemyDamageExtreme = 30.0f;
	EnemyOleadasExtreme = 15;
	BonusesExtreme = 10;

}

// Called when the game starts or when spawned
void AGestorDificil::BeginPlay()
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
void AGestorDificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorDificil::EnemyLife()
{

	if (GEngine)
	{
		//Enemigo -> SetEnemyLife(EnemyLifeExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}

}

void AGestorDificil::EnemySpeed()
{
	if (GEngine)
	{
		// Enemigo -> SetEnemySpeed(EnemySpeedExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La velocidad del enemigo es: %f"), EnemySpeedExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la velocidad del enemigo"));
	}
}

void AGestorDificil::EnemyDamage()
{

	if (GEngine)
	{
		// Enemigo -> SetEnemyDamage(EnemyDamageExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El daño del enemigo es: %f"), EnemyDamageExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el daño del enemigo"));
	}
}

void AGestorDificil::EnemyOleadas()
{
	if (GEngine)
	{
		// EnemigoFactory -> SetEnemyOleadas(EnemyOleadasExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de oleadas del enemigo es: %d"), EnemyOleadasExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de oleadas del enemigo"));
	}
}

void AGestorDificil::Bonuses()
{
	if (GEngine)
	{
		// Bonus -> SetBonus(BonusesExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de bonus del enemigo es: %d"), BonusesExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de bonus del enemigo"));
	}
}

