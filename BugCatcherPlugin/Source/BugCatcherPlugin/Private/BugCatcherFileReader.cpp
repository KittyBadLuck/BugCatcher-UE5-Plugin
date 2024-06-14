// Fill out your copyright notice in the Description page of Project Settings.


#include "BugCatcherFileReader.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/App.h"
#include "Misc/OutputDevice.h"
#include "GenericPlatform/GenericPlatformOutputDevices.h"
#include "Misc/OutputDeviceFile.h"

bool UBugCatcherFileReader::FileSaveLogString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectLogDir() + FileNameB));
}

bool UBugCatcherFileReader::FileLoadLogString(TArray<FString>& Files , FString& LogContent)
{
	FString directory = FPaths::ProjectLogDir();
	if (directory.Len() < 1) return false;
	FPaths::NormalizeDirectoryName(directory);

	IFileManager& FileManager = IFileManager::Get();

	FString FinalPath = directory + "/" + "*.log";
	FileManager.FindFiles(Files, *FinalPath, true, false);
	FDateTime mostRecentTime = FileManager.GetTimeStamp(*(FPaths::ProjectLogDir()+ Files[0]));
	FString mostRecentFile = Files[0];

	for (int i = 1; i < Files.Num(); i++)
	{
		FDateTime fileTime = FileManager.GetTimeStamp(*(FPaths::ProjectLogDir() + Files[i]));
		if (fileTime > mostRecentTime)
		{
			mostRecentFile = Files[i];
			mostRecentTime = fileTime;
		}
	}
	FString finalPath = FPaths::ProjectLogDir() + mostRecentFile;

	return FFileHelper::LoadFileToString(LogContent, *finalPath, FFileHelper::EHashOptions::None, 4);
}
