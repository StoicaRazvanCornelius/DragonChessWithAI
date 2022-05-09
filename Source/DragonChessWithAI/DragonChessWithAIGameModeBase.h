// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DragonChessWithAIGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DRAGONCHESSWITHAI_API ADragonChessWithAIGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	int GetTmp();
};
