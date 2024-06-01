// Copyright Epic Games, Inc. All Rights Reserved.

#include "BugCatcherPluginCommands.h"

#define LOCTEXT_NAMESPACE "FBugCatcherPluginModule"

void FBugCatcherPluginCommands::RegisterCommands()
{
	UI_COMMAND(PluginActionReport, "BugCatcherReport", "Execute BugCatcherPlugin action report", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PluginAction, "BugCatcherReview", "Execute BugCatcherPlugin action", EUserInterfaceActionType::Button, FInputChord());
}



#undef LOCTEXT_NAMESPACE
