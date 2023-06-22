// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumSet.generated.h"


UENUM(BlueprintType)
enum class ENatureState : uint8
{
	Sun				UMETA(DisplayName = "Sun"),
	Eclipse			UMETA(DisplayName = "Eclipse")
};

UENUM(BlueprintType)
enum class EEffectTypes : uint8
{
	AE_None				UMETA(DisplayName = "None"),
	AE_Stun				UMETA(DisplayName = "Stun"),
	AE_Poison			UMETA(DisplayName = "Poison"),
	AE_Burn				UMETA(DisplayName = "Burn")
};

/*Enum Class to Track the Current Weapon Type that is Equipped*/
UENUM(Blueprintable, BlueprintType)
enum class EWeaponMode : uint8
{
	Melee			UMETA(DisplayName = "Melee"),
	Ranged			UMETA(DisplayName = "Ranged")
};


