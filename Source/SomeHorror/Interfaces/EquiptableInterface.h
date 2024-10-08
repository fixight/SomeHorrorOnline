// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EquiptableInterface.generated.h"

UINTERFACE(MinimalAPI)
class UEquiptableInterface : public UInterface
{
	GENERATED_BODY()
};

class SOMEHORROR_API IEquiptableInterface
{
	GENERATED_BODY()

protected:
	virtual void Interact() = 0;

	virtual void TakeObject(class ACharacter* Character) = 0;

	virtual void ThrowObject(class ACharacter* Character) = 0;
};
