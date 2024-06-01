#include "BugCatcherReportStyle.h"
#include "BugCatcherPlugin.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FBugCatcherReportStyle::StyleInstance = nullptr;

void FBugCatcherReportStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FBugCatcherReportStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FBugCatcherReportStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("BugCatcherReportStyle"));
	return StyleSetName;
}


const FVector2D IconReport16x16(16.0f, 16.0f);
const FVector2D IconReport20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FBugCatcherReportStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("BugCatcherReportStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("BugCatcherPlugin")->GetBaseDir() / TEXT("Content") / TEXT("2D"));

	Style->Set("BugCatcherPlugin.PluginActionReport", new IMAGE_BRUSH_SVG(TEXT("catched_icon"), IconReport20x20));
	return Style;
}

void FBugCatcherReportStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FBugCatcherReportStyle::Get()
{
	return *StyleInstance;
}
