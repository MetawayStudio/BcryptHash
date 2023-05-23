// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BcryptBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BCRYPTHASH_API UBcryptBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Meta = (WorldContext = "WorldContextObject", DisplayName="Crypt String"))
	static void CryptString(FString toCrypt, FString& returnString);
	UFUNCTION(BlueprintPure, Meta = (WorldContext = "WorldContextObject", DisplayName="Crypt Compare"))
	static void CryptCompare(FString key, FString hash, bool& returnBool);
};
