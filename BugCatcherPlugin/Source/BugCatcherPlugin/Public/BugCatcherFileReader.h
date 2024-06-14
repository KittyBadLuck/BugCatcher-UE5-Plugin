// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BugCatcherFileReader.generated.h"


UCLASS()
class BUGCATCHERPLUGIN_API UBugCatcherFileReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	UFUNCTION(BlueprintCallable, Category = "save")
	static bool FileSaveLogString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "save")
	static bool FileLoadLogString(TArray<FString>& Files, FString& LogContent);
	
};
