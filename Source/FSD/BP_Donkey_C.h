// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DonkeyCharacter.h"
#include "BP_Donkey_C.generated.h"

/**
 * 
 */
UCLASS()
class FSD_API ABP_Donkey_C : public ADonkeyCharacter
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		void SetDestination(FVector Destination);

	UFUNCTION(BlueprintCallable)
		void OnDonkeyCalled(FVector Position);

	UFUNCTION(BlueprintCallable)
		void SetDonkeyPos(FVector Pos);
};
