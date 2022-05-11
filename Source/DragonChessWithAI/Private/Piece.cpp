// Fill out your copyright notice in the Description page of Project Settings.


#include "Piece.h"
#include "DragonchessGameStateBase.h"

// Sets default values
APiece::APiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APiece::OnClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("On Click event"));
}

// Called when the game starts or when spawned
void APiece::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("The integer value is: %d"), GetPrice());
	GetWorld()->GetGameState<ADragonchessGameStateBase>()->GetTmp();
	// onClickEvent->AddDynamic(this, APiece::OnClicked);
}

// Called every frame
void APiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// MovePiece(-247, 600, DeltaTime);
}

int APiece::GetPrice()
{
	return 0;
}

void APiece::MovePiece(float x, float y, float DeltaTime) const
{
	const FVector StartLocation = this->GetActorLocation();
	const FVector TargetLocation (x, y, 920);
	const FVector CurrentLocation = FMath::VInterpTo(StartLocation, TargetLocation, DeltaTime, 100);
	UE_LOG(LogTemp, Warning, TEXT("New X is: %d"), CurrentLocation.X);
	GetOwner()->SetActorLocation(CurrentLocation);
}
