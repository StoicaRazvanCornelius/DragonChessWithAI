// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerColor.h"
#include "Piece.generated.h"

UCLASS()
class DRAGONCHESSWITHAI_API APiece : public AActor
{
	GENERATED_BODY()

	static APiece* selectedPiece;
	PlayerColor pieceColor;
	// const FOnClicked* onClickEvent = new FOnClicked();

public:	
	// Sets default values for this actor's properties
	APiece();
	virtual void OnClicked();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual int GetPrice();
	void MovePiece(float x, float y, float DeltaTime) const;
};
