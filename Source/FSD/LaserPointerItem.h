// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "LaserPointerItem.generated.h"

/**
 * 
 */
UCLASS()
class FSD_API ALaserPointerItem : public AAnimatedItem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) FHitResult LookAtHit;
};
