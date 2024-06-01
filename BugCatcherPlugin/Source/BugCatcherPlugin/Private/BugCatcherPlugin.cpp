// Copyright Epic Games, Inc. All Rights Reserved.

#include "BugCatcherPlugin.h"
#include "BugCatcherPluginStyle.h"
#include "BugCatcherReportStyle.h"
#include "BugCatcherPluginCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"
#include "EditorAssetLibrary.h"

static const FName BugCatcherPluginSynchroTabName("BugCatcherSynchroPlugin");

DEFINE_LOG_CATEGORY(BugCatcherPluginModule)

#define LOCTEXT_NAMESPACE "FBugCatcherPluginModule"

void FBugCatcherPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FBugCatcherPluginStyle::Initialize();
	FBugCatcherPluginStyle::ReloadTextures();
	FBugCatcherReportStyle::Initialize();
	FBugCatcherReportStyle::ReloadTextures();

	FBugCatcherPluginCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FBugCatcherPluginCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FBugCatcherPluginModule::PluginButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FBugCatcherPluginCommands::Get().PluginActionReport,
		FExecuteAction::CreateRaw(this, &FBugCatcherPluginModule::ReportButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FBugCatcherPluginModule::RegisterMenus));

	//open synchro plugin
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(BugCatcherPluginSynchroTabName, FOnSpawnTab::CreateRaw(this, &FBugCatcherPluginModule::OnSpawnSynchroTab))
		.SetDisplayName(LOCTEXT("FBugCatcherTabTitle", "SynchroMenu"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	FGlobalTabmanager::Get()->TryInvokeTab(BugCatcherPluginSynchroTabName);
}

void FBugCatcherPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FBugCatcherPluginStyle::Shutdown();
	FBugCatcherReportStyle::Shutdown();

	FBugCatcherPluginCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(BugCatcherPluginSynchroTabName);
}



TSharedRef<SDockTab> FBugCatcherPluginModule::OnSpawnSynchroTab(const FSpawnTabArgs& SpawnTabArgs)
{
	//change to synchro widget

	UEditorUtilityWidgetBlueprint* EditorWidget = LoadObject<UEditorUtilityWidgetBlueprint>(nullptr, L"/BugCatcherPlugin/BP_SynchroPlaceHolder.BP_SynchroPlaceHolder");

	TSharedRef<SDockTab> SpawnedTab = EditorWidget->SpawnEditorUITab(SpawnTabArgs);
	return SpawnedTab;

}

void FBugCatcherPluginModule::PluginButtonClicked()
{
	// get the  path of the asset by R.Clicking on the asset and 'Copy Reference'
	const FStringAssetReference widgetAssetPath(L"/BugCatcherPlugin/BP_ReviewMenu.BP_ReviewMenu");

	UObject* widgetAssetLoaded = widgetAssetPath.TryLoad();
	if (widgetAssetLoaded == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Missing Expected widget class at : /BugCatcherPlugin/BP_ReviewMenu.BP_ReviewMenu"));
		return;
	}

	UEditorUtilityWidgetBlueprint* widget = Cast<UEditorUtilityWidgetBlueprint>(widgetAssetLoaded);
	if (widget == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Couldnt cast /BugCatcherPlugin/BP_ReviewMenu.BP_ReviewMenu to UEditorUtilityWidgetBlueprint"));
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(widget);
}

void FBugCatcherPluginModule::ReportButtonClicked()
{
	// get the  path of the asset by R.Clicking on the asset and 'Copy Reference'
	const FStringAssetReference widgetAssetPath(L"/BugCatcherPlugin/BP_ReportMenu.BP_ReportMenu");

	UObject* widgetAssetLoaded = widgetAssetPath.TryLoad();
	if (widgetAssetLoaded == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Missing Expected widget class at : /BugCatcherPlugin/BP_ReportMenu.BP_ReportMenu"));
		return;
	}

	UEditorUtilityWidgetBlueprint* widget = Cast<UEditorUtilityWidgetBlueprint>(widgetAssetLoaded);
	if (widget == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Couldnt cast /BugCatcherPlugin/BP_ReviewMenu.BP_ReviewMenu to UEditorUtilityWidgetBlueprint"));
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(widget);
}

void FBugCatcherPluginModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);
	//review
	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FBugCatcherPluginCommands::Get().PluginAction, PluginCommands);
			Section.AddMenuEntryWithCommandList(FBugCatcherPluginCommands::Get().PluginActionReport, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(
					FBugCatcherPluginCommands::Get().PluginAction, 
					INVTEXT("ReviewMenu"),
					INVTEXT("Open the bug review menu. Will also open the Synchronization"),
					FSlateIcon(FBugCatcherPluginStyle::GetStyleSetName(), "BugCatcherPlugin.PluginAction")));
				Entry.SetCommandList(PluginCommands);

				FToolMenuEntry& EntryReport = Section.AddEntry(FToolMenuEntry::InitToolBarButton(
					FBugCatcherPluginCommands::Get().PluginActionReport,
					INVTEXT("ReportMenu"),
					INVTEXT("Open the bug report menu. Will also open the Synchronization"),
					FSlateIcon(FBugCatcherReportStyle::GetStyleSetName(), "BugCatcherPlugin.PluginActionReport")));
				EntryReport.SetCommandList(PluginCommands);
			}
		}
	}

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBugCatcherPluginModule, BugCatcherPlugin)