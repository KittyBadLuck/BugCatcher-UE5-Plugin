// Fill out your copyright notice in the Description page of Project Settings.


#include "BugCatcherFileReader.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UBugCatcherFileReader::FileSaveLogString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectLogDir() + FileNameB));
}

bool UBugCatcherFileReader::FileLoadLogString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectLogDir() + FileNameA));
}