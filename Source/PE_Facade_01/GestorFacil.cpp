// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorFacil.h"

// Sets default values
AGestorFacil::AGestorFacil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyLifeEasy = 100.0f;
	EnemySpeedEasy = 200.0f;
	EnemyDamageEasy = 10.0f;
	EnemyOleadasEasy = 5;
	BonusesEasy = 3;
}

// Called when the game starts or when spawned
void AGestorFacil::BeginPlay()
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
void AGestorFacil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorFacil::EnemyLife()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyLife(EnemyLifeEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}
}

void AGestorFacil::EnemySpeed()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemySpeed(EnemySpeedEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La velocidad del enemigo es: %f"), EnemySpeedEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la velocidad del enemigo"));
	}
}

void AGestorFacil::EnemyDamage()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyDamage(EnemyDamageEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El daño del enemigo es: %f"), EnemyDamageEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el daño del enemigo"));
	}
}

void AGestorFacil::EnemyOleadas()
{
	if (GEngine)
	{
		//Enemigo -> SetEnemyOleadas(EnemyOleadasEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La oleada del enemigo es: %d"), EnemyOleadasEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la oleada del enemigo"));
	}
}

void AGestorFacil::Bonuses()
{
	if (GEngine)
	{
		//Bonus -> SetBonus(BonusesEasy);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El bonus del enemigo es: %d"), BonusesEasy));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el bonus del enemigo"));
	}
}

