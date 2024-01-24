// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShowcasePlugin/Public/ShowcasePluginFileReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowcasePluginFileReader() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SHOWCASEPLUGIN_API UClass* Z_Construct_UClass_UShowcasePluginFileReader();
	SHOWCASEPLUGIN_API UClass* Z_Construct_UClass_UShowcasePluginFileReader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShowcasePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UShowcasePluginFileReader::execReadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UShowcasePluginFileReader::ReadFile(Z_Param_FileName,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void UShowcasePluginFileReader::StaticRegisterNativesUShowcasePluginFileReader()
	{
		UClass* Class = UShowcasePluginFileReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadFile", &UShowcasePluginFileReader::execReadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics
	{
		struct ShowcasePluginFileReader_eventReadFile_Parms
		{
			FString FileName;
			FString Result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowcasePluginFileReader_eventReadFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowcasePluginFileReader_eventReadFile_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShowcasePluginFileReader_eventReadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ShowcasePluginFileReader_eventReadFile_Parms), &Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShowcasePlugin" },
		{ "Keywords", "Load File to String" },
		{ "ModuleRelativePath", "Public/ShowcasePluginFileReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowcasePluginFileReader, nullptr, "ReadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::ShowcasePluginFileReader_eventReadFile_Parms), Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowcasePluginFileReader);
	UClass* Z_Construct_UClass_UShowcasePluginFileReader_NoRegister()
	{
		return UShowcasePluginFileReader::StaticClass();
	}
	struct Z_Construct_UClass_UShowcasePluginFileReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowcasePluginFileReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ShowcasePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShowcasePluginFileReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowcasePluginFileReader_ReadFile, "ReadFile" }, // 392669978
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowcasePluginFileReader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "ShowcasePluginFileReader.h" },
		{ "ModuleRelativePath", "Public/ShowcasePluginFileReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowcasePluginFileReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowcasePluginFileReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowcasePluginFileReader_Statics::ClassParams = {
		&UShowcasePluginFileReader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShowcasePluginFileReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShowcasePluginFileReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowcasePluginFileReader()
	{
		if (!Z_Registration_Info_UClass_UShowcasePluginFileReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowcasePluginFileReader.OuterSingleton, Z_Construct_UClass_UShowcasePluginFileReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShowcasePluginFileReader.OuterSingleton;
	}
	template<> SHOWCASEPLUGIN_API UClass* StaticClass<UShowcasePluginFileReader>()
	{
		return UShowcasePluginFileReader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowcasePluginFileReader);
	UShowcasePluginFileReader::~UShowcasePluginFileReader() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_2023SpringTeam34_Epic_Games_Plugins_ShowcasePlugin_Source_ShowcasePlugin_Public_ShowcasePluginFileReader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_2023SpringTeam34_Epic_Games_Plugins_ShowcasePlugin_Source_ShowcasePlugin_Public_ShowcasePluginFileReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShowcasePluginFileReader, UShowcasePluginFileReader::StaticClass, TEXT("UShowcasePluginFileReader"), &Z_Registration_Info_UClass_UShowcasePluginFileReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowcasePluginFileReader), 3859603820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_2023SpringTeam34_Epic_Games_Plugins_ShowcasePlugin_Source_ShowcasePlugin_Public_ShowcasePluginFileReader_h_1883048834(TEXT("/Script/ShowcasePlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_2023SpringTeam34_Epic_Games_Plugins_ShowcasePlugin_Source_ShowcasePlugin_Public_ShowcasePluginFileReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_2023SpringTeam34_Epic_Games_Plugins_ShowcasePlugin_Source_ShowcasePlugin_Public_ShowcasePluginFileReader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
