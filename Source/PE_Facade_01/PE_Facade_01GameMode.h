// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GestorDificultad.h"
#include "PE_Facade_01GameMode.generated.h"

UCLASS(minimalapi)
class APE_Facade_01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APE_Facade_01GameMode();

protected:

	virtual void BeginPlay() override;


	AGestorDificultad* DifficultyManager;

};



