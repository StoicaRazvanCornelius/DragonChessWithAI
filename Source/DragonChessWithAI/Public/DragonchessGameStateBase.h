// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Piece.h"
#include "DragonchessGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class DRAGONCHESSWITHAI_API ADragonchessGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	int GetTmp();
};
