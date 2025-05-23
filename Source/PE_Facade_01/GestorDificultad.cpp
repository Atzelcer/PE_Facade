// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorDificultad.h"
#include "GestorFacil.h"
#include "GestorMedio.h"
#include "GestorDificil.h"

// Sets default values
AGestorDificultad::AGestorDificultad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GestorFacil = nullptr;
	GestorMedio = nullptr;
	GestorDificil = nullptr;

}

// Called when the game starts or when spawned
void AGestorDificultad::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGestorDificultad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorDificultad::EasyDifficultyOperation()
{
	GestorFacil = GetWorld()->SpawnActor<AGestorFacil>(AGestorFacil::StaticClass());
}

void AGestorDificultad::MediumDifficultyOperation()
{
	GestorMedio = GetWorld()->SpawnActor<AGestorMedio>(AGestorMedio::StaticClass());

}

void AGestorDificultad::ExtremeDifficultyOperation()
{
	GestorDificil = GetWorld()->SpawnActor<AGestorDificil>(AGestorDificil::StaticClass());
}

