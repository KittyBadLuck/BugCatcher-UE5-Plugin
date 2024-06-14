// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBugCatcherPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BugCatcherPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BugCatcherPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_BugCatcherPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BugCatcherPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x916AD941,
				0xCDEE37EA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BugCatcherPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BugCatcherPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BugCatcherPlugin(Z_Construct_UPackage__Script_BugCatcherPlugin, TEXT("/Script/BugCatcherPlugin"), Z_Registration_Info_UPackage__Script_BugCatcherPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x916AD941, 0xCDEE37EA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
