// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowcasePlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShowcasePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShowcasePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ShowcasePlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShowcasePlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4F6527B3,
				0x7DFFC144,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShowcasePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShowcasePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShowcasePlugin(Z_Construct_UPackage__Script_ShowcasePlugin, TEXT("/Script/ShowcasePlugin"), Z_Registration_Info_UPackage__Script_ShowcasePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4F6527B3, 0x7DFFC144));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
