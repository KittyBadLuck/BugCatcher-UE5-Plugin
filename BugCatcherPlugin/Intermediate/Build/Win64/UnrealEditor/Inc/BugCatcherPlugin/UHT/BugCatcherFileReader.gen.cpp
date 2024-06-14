// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BugCatcherPlugin/Public/BugCatcherFileReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBugCatcherFileReader() {}
// Cross Module References
	BUGCATCHERPLUGIN_API UClass* Z_Construct_UClass_UBugCatcherFileReader();
	BUGCATCHERPLUGIN_API UClass* Z_Construct_UClass_UBugCatcherFileReader_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BugCatcherPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UBugCatcherFileReader::execFileLoadLogString)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LogContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBugCatcherFileReader::FileLoadLogString(Z_Param_Out_Files,Z_Param_Out_LogContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBugCatcherFileReader::execFileSaveLogString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveTextB);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBugCatcherFileReader::FileSaveLogString(Z_Param_SaveTextB,Z_Param_FileNameB);
		P_NATIVE_END;
	}
	void UBugCatcherFileReader::StaticRegisterNativesUBugCatcherFileReader()
	{
		UClass* Class = UBugCatcherFileReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadLogString", &UBugCatcherFileReader::execFileLoadLogString },
			{ "FileSaveLogString", &UBugCatcherFileReader::execFileSaveLogString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics
	{
		struct BugCatcherFileReader_eventFileLoadLogString_Parms
		{
			TArray<FString> Files;
			FString LogContent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogContent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BugCatcherFileReader_eventFileLoadLogString_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_LogContent = { "LogContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BugCatcherFileReader_eventFileLoadLogString_Parms, LogContent), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BugCatcherFileReader_eventFileLoadLogString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BugCatcherFileReader_eventFileLoadLogString_Parms), &Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_LogContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/BugCatcherFileReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBugCatcherFileReader, nullptr, "FileLoadLogString", nullptr, nullptr, Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::BugCatcherFileReader_eventFileLoadLogString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::BugCatcherFileReader_eventFileLoadLogString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics
	{
		struct BugCatcherFileReader_eventFileSaveLogString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BugCatcherFileReader_eventFileSaveLogString_Parms, SaveTextB), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BugCatcherFileReader_eventFileSaveLogString_Parms, FileNameB), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BugCatcherFileReader_eventFileSaveLogString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BugCatcherFileReader_eventFileSaveLogString_Parms), &Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_SaveTextB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_FileNameB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/BugCatcherFileReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBugCatcherFileReader, nullptr, "FileSaveLogString", nullptr, nullptr, Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::BugCatcherFileReader_eventFileSaveLogString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::BugCatcherFileReader_eventFileSaveLogString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBugCatcherFileReader);
	UClass* Z_Construct_UClass_UBugCatcherFileReader_NoRegister()
	{
		return UBugCatcherFileReader::StaticClass();
	}
	struct Z_Construct_UClass_UBugCatcherFileReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBugCatcherFileReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BugCatcherPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBugCatcherFileReader_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBugCatcherFileReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBugCatcherFileReader_FileLoadLogString, "FileLoadLogString" }, // 952882475
		{ &Z_Construct_UFunction_UBugCatcherFileReader_FileSaveLogString, "FileSaveLogString" }, // 3019005221
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBugCatcherFileReader_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBugCatcherFileReader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BugCatcherFileReader.h" },
		{ "ModuleRelativePath", "Public/BugCatcherFileReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBugCatcherFileReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBugCatcherFileReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBugCatcherFileReader_Statics::ClassParams = {
		&UBugCatcherFileReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBugCatcherFileReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UBugCatcherFileReader_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBugCatcherFileReader()
	{
		if (!Z_Registration_Info_UClass_UBugCatcherFileReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBugCatcherFileReader.OuterSingleton, Z_Construct_UClass_UBugCatcherFileReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBugCatcherFileReader.OuterSingleton;
	}
	template<> BUGCATCHERPLUGIN_API UClass* StaticClass<UBugCatcherFileReader>()
	{
		return UBugCatcherFileReader::StaticClass();
	}
	UBugCatcherFileReader::UBugCatcherFileReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBugCatcherFileReader);
	UBugCatcherFileReader::~UBugCatcherFileReader() {}
	struct Z_CompiledInDeferFile_FID_Users_Lou_de_TARADE_Documents_BugCatcherPlugin_HostProject_Plugins_BugCatcherPlugin_Source_BugCatcherPlugin_Public_BugCatcherFileReader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lou_de_TARADE_Documents_BugCatcherPlugin_HostProject_Plugins_BugCatcherPlugin_Source_BugCatcherPlugin_Public_BugCatcherFileReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBugCatcherFileReader, UBugCatcherFileReader::StaticClass, TEXT("UBugCatcherFileReader"), &Z_Registration_Info_UClass_UBugCatcherFileReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBugCatcherFileReader), 3805224879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lou_de_TARADE_Documents_BugCatcherPlugin_HostProject_Plugins_BugCatcherPlugin_Source_BugCatcherPlugin_Public_BugCatcherFileReader_h_1419999052(TEXT("/Script/BugCatcherPlugin"),
		Z_CompiledInDeferFile_FID_Users_Lou_de_TARADE_Documents_BugCatcherPlugin_HostProject_Plugins_BugCatcherPlugin_Source_BugCatcherPlugin_Public_BugCatcherFileReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lou_de_TARADE_Documents_BugCatcherPlugin_HostProject_Plugins_BugCatcherPlugin_Source_BugCatcherPlugin_Public_BugCatcherFileReader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
