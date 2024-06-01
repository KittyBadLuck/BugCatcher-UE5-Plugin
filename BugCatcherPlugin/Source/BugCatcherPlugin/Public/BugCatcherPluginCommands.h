// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "BugCatcherPluginStyle.h"
#include "BugCatcherReportStyle.h"

class FBugCatcherPluginCommands : public TCommands<FBugCatcherPluginCommands>
{
public:

	FBugCatcherPluginCommands()
		: TCommands<FBugCatcherPluginCommands>(TEXT("BugCatcherPlugin"), NSLOCTEXT("Contexts", "BugCatcherPlugin", "BugCatcherPlugin Plugin"), NAME_None, FBugCatcherPluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
	TSharedPtr< FUICommandInfo > PluginActionReport;
};
