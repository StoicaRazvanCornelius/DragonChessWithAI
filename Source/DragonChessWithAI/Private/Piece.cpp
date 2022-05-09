// Fill out your copyright notice in the Description page of Project Settings.


#include "Piece.h"

// Sets default values
APiece::APiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiece::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("The integer value is: %d"), GetPrice());
	ADragonchessGameStateBase* const tmp = GetWorld()->GetGameState<ADragonchessGameStateBase>();
}

// Called every frame
void APiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int APiece::GetPrice()
{
	return 0;
}

