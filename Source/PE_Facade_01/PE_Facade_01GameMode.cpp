// Copyright Epic Games, Inc. All Rights Reserved.

#include "PE_Facade_01GameMode.h"
#include "PE_Facade_01PlayerController.h"
#include "PE_Facade_01Character.h"
#include "UObject/ConstructorHelpers.h"
#include "GestorDificultad.h"


APE_Facade_01GameMode::APE_Facade_01GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APE_Facade_01PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void APE_Facade_01GameMode::BeginPlay()
{
	Super::BeginPlay();

	DifficultyManager = GetWorld()->SpawnActor<AGestorDificultad>(AGestorDificultad::StaticClass());


	int32 RandomDifficulty = FMath::RandRange(0, 2);
	switch (RandomDifficulty)
	{
	case 0:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Dificultad Facil"));
		DifficultyManager->EasyDifficultyOperation();
		break;
	case 1:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Dificultad Media"));
		DifficultyManager->MediumDifficultyOperation();
		break;
	case 2:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Dificultad Dificil"));
		DifficultyManager->ExtremeDifficultyOperation();
		break;
	default:
		break;

	}
}
