// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomUtils.h"
#include "DrawDebugHelpers.h"

void UCustomUtils::Print(const FString& toPrint) {
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1, 
			5.0f, 
			FColor::Yellow, 
			*toPrint
		);
}

void UCustomUtils::Print(const FString& toPrint, float time) {
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(
			-1, 
			time, 
			FColor::Yellow, 
			*toPrint
		);
}

void UCustomUtils::Print(const float value) {
	FString toPrint=FString::SanitizeFloat(value);

	Print(toPrint);
}

void UCustomUtils::Print(const FVector vector) {
	FString toPrint=vector.ToString();

	Print(toPrint);
}

bool UCustomUtils::Raycast(FHitResult& Hit, FVector Start, FVector End, const AActor* Ignored) {
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(Ignored);

	return GEngine->GameViewport->GetWorld()->LineTraceSingleByChannel(
		Hit, 
		Start, 
		End,
		ECC_Visibility,
		collisionParams,
		FCollisionResponseParams::DefaultResponseParam );
}

FVector UCustomUtils::MoveTowardsVector(FVector current, FVector target, float accel) {
	float deltaTime=GEngine->GameViewport->GetWorld()->DeltaTimeSeconds;
	return FMath::VInterpTo(current, target, deltaTime, accel);
}

float UCustomUtils::GetHorizontalAngle(FVector direction) {
	FVector horizontalDirection=FVector(direction.X, direction.Y, 0.f).GetSafeNormal();
	float horizontalSlope=FVector::DotProduct(direction, horizontalDirection);
	float horizontalAngle=FMath::RadiansToDegrees(FMath::Acos(horizontalSlope));

	return horizontalAngle;
}

void UCustomUtils::DrawLine(FVector LineStart, FVector LineEnd, FColor Color, float LifeTime) {
	DrawDebugLine(
		GEngine->GameViewport->GetWorld(), 
		LineStart,
		LineEnd,
		Color,
		false,
		LifeTime,
		0,
		5.f
		);
}

void UCustomUtils::DrawVectorFromActor(AActor* actor, FVector vector, FColor Color, float LifeTime) {
	DrawDebugLine(
		GEngine->GameViewport->GetWorld(), 
		actor->GetActorLocation(),
		actor->GetActorLocation() + vector,
		Color,
		false,
		LifeTime,
		0,
		5.f
		);
}
