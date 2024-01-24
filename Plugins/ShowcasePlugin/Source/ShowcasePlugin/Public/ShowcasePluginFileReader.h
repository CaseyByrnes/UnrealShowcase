// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShowcasePluginFileReader.generated.h"

/**
*
*/
UCLASS()
class SHOWCASEPLUGIN_API UShowcasePluginFileReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "ShowcasePlugin", meta = (Keywords = "Load File to String"))
		static bool ReadFile(FString FileName, FString& Result);
};
