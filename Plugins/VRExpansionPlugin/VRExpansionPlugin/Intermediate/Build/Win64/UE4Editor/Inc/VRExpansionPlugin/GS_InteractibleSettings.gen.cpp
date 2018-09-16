// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_InteractibleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_InteractibleSettings() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGS_InteractionSettings();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_InteractibleSettings_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_InteractibleSettings();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
// End Cross Module References
class UScriptStruct* FBPGS_InteractionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPGS_InteractionSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPGS_InteractionSettings"), sizeof(FBPGS_InteractionSettings), Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPGS_InteractionSettings(FBPGS_InteractionSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPGS_InteractionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPGS_InteractionSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPGS_InteractionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPGS_InteractionSettings")),new UScriptStruct::TCppStructOps<FBPGS_InteractionSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPGS_InteractionSettings;
	struct Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxAngularTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAngularTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinAngularTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAngularTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAngularTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLinearTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxLinearTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLinearTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinLinearTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLinearTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLinearTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreHandRotation_MetaData[];
#endif
		static void NewProp_bIgnoreHandRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreHandRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitRoll_MetaData[];
#endif
		static void NewProp_bLimitRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitYaw_MetaData[];
#endif
		static void NewProp_bLimitYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitPitch_MetaData[];
#endif
		static void NewProp_bLimitPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitZ_MetaData[];
#endif
		static void NewProp_bLimitZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitY_MetaData[];
#endif
		static void NewProp_bLimitY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitX_MetaData[];
#endif
		static void NewProp_bLimitX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetInitialPositionsOnBeginPlay_MetaData[];
#endif
		static void NewProp_bGetInitialPositionsOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetInitialPositionsOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitsInLocalSpace_MetaData[];
#endif
		static void NewProp_bLimitsInLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitsInLocalSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPGS_InteractionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation_MetaData[] = {
		{ "Category", "AngularSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxAngularTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPGS_InteractionSettings, MaxAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation_MetaData[] = {
		{ "Category", "AngularSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinAngularTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPGS_InteractionSettings, MinAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "editcondition", "!bGetInitialPositionsOnBeginPlay" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialAngularTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPGS_InteractionSettings, InitialAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxLinearTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPGS_InteractionSettings, MaxLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinLinearTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPGS_InteractionSettings, MinLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "editcondition", "!bGetInitialPositionsOnBeginPlay" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialLinearTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPGS_InteractionSettings, InitialLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bIgnoreHandRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreHandRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bGetInitialPositionsOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bGetInitialPositionsOnBeginPlay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitsInLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitsInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPGS_InteractionSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBPGS_InteractionSettings),
		alignof(FBPGS_InteractionSettings),
		Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPGS_InteractionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPGS_InteractionSettings"), sizeof(FBPGS_InteractionSettings), Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_CRC() { return 3056285361U; }
	void UGS_InteractibleSettings::StaticRegisterNativesUGS_InteractibleSettings()
	{
	}
	UClass* Z_Construct_UClass_UGS_InteractibleSettings_NoRegister()
	{
		return UGS_InteractibleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGS_InteractibleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_InteractibleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_InteractibleSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings_MetaData[] = {
		{ "Category", "GS_InteractibleSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
		{ "ToolTip", "Category = \"InteractionSettings\")" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InteractionSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGS_InteractibleSettings, InteractionSettings), Z_Construct_UScriptStruct_FBPGS_InteractionSettings, METADATA_PARAMS(Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_InteractibleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_InteractibleSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGS_InteractibleSettings_Statics::ClassParams = {
		&UGS_InteractibleSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003010A0u,
		nullptr, 0,
		Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_InteractibleSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGS_InteractibleSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGS_InteractibleSettings, 1152378252);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGS_InteractibleSettings(Z_Construct_UClass_UGS_InteractibleSettings, &UGS_InteractibleSettings::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGS_InteractibleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_InteractibleSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
