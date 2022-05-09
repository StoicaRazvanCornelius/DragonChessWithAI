// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Piece.h"
#include "Test.generated.h"

/**
 * 
 */
UCLASS()
class DRAGONCHESSWITHAI_API ATest : public APiece
{
	GENERATED_BODY()
	
public:
	virtual int GetPrice();
};
