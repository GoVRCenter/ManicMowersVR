// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGlobalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGlobalSettings() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActionMappingDetails();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAxisMappingDetails();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles();
// End Cross Module References
class UScriptStruct* FBPVRControllerProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRControllerProfile, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRControllerProfile"), sizeof(FBPVRControllerProfile), Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRControllerProfile(FBPVRControllerProfile::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRControllerProfile"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRControllerProfile")),new UScriptStruct::TCppStructOps<FBPVRControllerProfile>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile;
	struct Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActionOverrides;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionOverrides_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionOverrides_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AxisOverrides;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOverrides_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisOverrides_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransformRightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransformRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSeperateHandOffsetTransforms_MetaData[];
#endif
		static void NewProp_bUseSeperateHandOffsetTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSeperateHandOffsetTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRControllerProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting action mappings here will override the equivalent bindings on profile load" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides = { UE4CodeGen_Private::EPropertyClass::Map, "ActionOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080010001, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, ActionOverrides), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ActionOverrides_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FActionMappingDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting an axis value here with key bindings will override the equivalent bindings on profile load" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides = { UE4CodeGen_Private::EPropertyClass::Map, "AxisOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080010001, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, AxisOverrides), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AxisOverrides_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FAxisMappingDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "editcondition", "bUseSeperateHandOffsetTransforms" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Offset to use with this controller" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketOffsetTransformRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransformRightHand), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Offset to use with this controller" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_SetBit(void* Obj)
	{
		((FBPVRControllerProfile*)Obj)->bUseSeperateHandOffsetTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSeperateHandOffsetTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPVRControllerProfile), &Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Offset to use with this controller" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketOffsetTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Name of controller profile" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPVRControllerProfile, ControllerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ActionOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_AxisOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRControllerProfile",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBPVRControllerProfile),
		alignof(FBPVRControllerProfile),
		Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRControllerProfile"), sizeof(FBPVRControllerProfile), Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_CRC() { return 902656928U; }
class UScriptStruct* FActionMappingDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionMappingDetails, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ActionMappingDetails"), sizeof(FActionMappingDetails), Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionMappingDetails(FActionMappingDetails::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("ActionMappingDetails"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFActionMappingDetails
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFActionMappingDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionMappingDetails")),new UScriptStruct::TCppStructOps<FActionMappingDetails>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFActionMappingDetails;
	struct Z_Construct_UScriptStruct_FActionMappingDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionMappingDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGlobalSettings" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionMappingDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "List of all axis key mappings that correspond to the axis name in the containing map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings = { UE4CodeGen_Private::EPropertyClass::Array, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FActionMappingDetails, ActionMappings), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionMappingDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionMappingDetails_Statics::NewProp_ActionMappings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionMappingDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"ActionMappingDetails",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FActionMappingDetails),
		alignof(FActionMappingDetails),
		Z_Construct_UScriptStruct_FActionMappingDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FActionMappingDetails_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionMappingDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActionMappingDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionMappingDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionMappingDetails"), sizeof(FActionMappingDetails), Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActionMappingDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionMappingDetails_CRC() { return 294633647U; }
class UScriptStruct* FAxisMappingDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisMappingDetails, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("AxisMappingDetails"), sizeof(FAxisMappingDetails), Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAxisMappingDetails(FAxisMappingDetails::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("AxisMappingDetails"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAxisMappingDetails
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAxisMappingDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AxisMappingDetails")),new UScriptStruct::TCppStructOps<FAxisMappingDetails>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAxisMappingDetails;
	struct Z_Construct_UScriptStruct_FAxisMappingDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGlobalSettings" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "namespace ControllerProfileStatics\n{\n       static const FTransform OculusTouchStaticOffset(FRotator(-70.f, 0.f, 0.f));\n}" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisMappingDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "List of all axis key mappings that correspond to the axis name in the containing map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings = { UE4CodeGen_Private::EPropertyClass::Array, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAxisMappingDetails, AxisMappings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::NewProp_AxisMappings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"AxisMappingDetails",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAxisMappingDetails),
		alignof(FAxisMappingDetails),
		Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxisMappingDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AxisMappingDetails"), sizeof(FAxisMappingDetails), Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAxisMappingDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAxisMappingDetails_CRC() { return 44526646U; }
	void UVRGlobalSettings::StaticRegisterNativesUVRGlobalSettings()
	{
		UClass* Class = UVRGlobalSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControllerProfile", &UVRGlobalSettings::execAddControllerProfile },
			{ "AdjustTransformByControllerProfile", &UVRGlobalSettings::execAdjustTransformByControllerProfile },
			{ "AdjustTransformByGivenControllerProfile", &UVRGlobalSettings::execAdjustTransformByGivenControllerProfile },
			{ "DeleteControllerProfile", &UVRGlobalSettings::execDeleteControllerProfile },
			{ "GetControllerProfile", &UVRGlobalSettings::execGetControllerProfile },
			{ "GetControllerProfiles", &UVRGlobalSettings::execGetControllerProfiles },
			{ "GetCurrentProfile", &UVRGlobalSettings::execGetCurrentProfile },
			{ "GetCurrentProfileName", &UVRGlobalSettings::execGetCurrentProfileName },
			{ "LoadControllerProfile", &UVRGlobalSettings::execLoadControllerProfile },
			{ "LoadControllerProfileByName", &UVRGlobalSettings::execLoadControllerProfileByName },
			{ "OverwriteControllerProfile", &UVRGlobalSettings::execOverwriteControllerProfile },
			{ "SaveControllerProfiles", &UVRGlobalSettings::execSaveControllerProfiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics
	{
		struct VRGlobalSettings_eventAddControllerProfile_Parms
		{
			FBPVRControllerProfile NewProfile;
			bool bSaveOutToConfig;
		};
		static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventAddControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bSaveOutToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_NewProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "NewProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAddControllerProfile_Parms, NewProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_NewProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Add a controller profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "AddControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics
	{
		struct VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms
		{
			FName OptionalControllerProfileName;
			FTransform SocketTransform;
			bool bIsRightHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalControllerProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_OptionalControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "OptionalControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, OptionalControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_OptionalControllerProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "CPP_Default_bIsRightHand", "false" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Adjust the transform of a socket for a particular controller model, if a name is not sent in, it will use the currently loaded one\nIf there is no currently loaded one, it will return the input transform as is.\nIf bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "AdjustTransformByControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics
	{
		struct VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms
		{
			FBPVRControllerProfile ControllerProfile;
			FTransform SocketTransform;
			bool bIsRightHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ControllerProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "ControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ControllerProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "CPP_Default_bIsRightHand", "false" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Adjust the transform of a socket for a particular controller model\nIf there is no currently loaded one, it will return the input transform as is.\nIf bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "AdjustTransformByGivenControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics
	{
		struct VRGlobalSettings_eventDeleteControllerProfile_Parms
		{
			FName ControllerProfileName;
			bool bSaveOutToConfig;
		};
		static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventDeleteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bSaveOutToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_ControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventDeleteControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_ControllerProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Overwrite a controller profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "DeleteControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics
	{
		struct VRGlobalSettings_eventGetControllerProfile_Parms
		{
			FName ControllerProfileName;
			FBPVRControllerProfile OutProfile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutProfile;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventGetControllerProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_OutProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "OutProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, OutProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_OutProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ControllerProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get a controller profile by name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics
	{
		struct VRGlobalSettings_eventGetControllerProfiles_Parms
		{
			TArray<FBPVRControllerProfile> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get array of controller profiles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventGetControllerProfiles_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics
	{
		struct VRGlobalSettings_eventGetCurrentProfile_Parms
		{
			bool bHadLoadedProfile;
			FBPVRControllerProfile ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bHadLoadedProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadLoadedProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventGetCurrentProfile_Parms*)Obj)->bHadLoadedProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadLoadedProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventGetCurrentProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetCurrentProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventGetCurrentProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics
	{
		struct VRGlobalSettings_eventGetCurrentProfileName_Parms
		{
			bool bHadLoadedProfile;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static void NewProp_bHadLoadedProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadLoadedProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventGetCurrentProfileName_Parms*)Obj)->bHadLoadedProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadLoadedProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventGetCurrentProfileName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "GetCurrentProfileName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventGetCurrentProfileName_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics
	{
		struct VRGlobalSettings_eventLoadControllerProfile_Parms
		{
			FBPVRControllerProfile ControllerProfile;
			bool bSetAsCurrentProfile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->bSetAsCurrentProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetAsCurrentProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "ControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "CPP_Default_bSetAsCurrentProfile", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Load a controller profile\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "LoadControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics
	{
		struct VRGlobalSettings_eventLoadControllerProfileByName_Parms
		{
			FName ControllerProfileName;
			bool bSetAsCurrentProfile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->bSetAsCurrentProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetAsCurrentProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ControllerProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ControllerProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfileByName_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ControllerProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "CPP_Default_bSetAsCurrentProfile", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Load a controller profile by name\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "LoadControllerProfileByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics
	{
		struct VRGlobalSettings_eventOverwriteControllerProfile_Parms
		{
			FBPVRControllerProfile OverwritingProfile;
			bool bSaveOutToConfig;
		};
		static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverwritingProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventOverwriteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bSaveOutToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_OverwritingProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "OverwritingProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGlobalSettings_eventOverwriteControllerProfile_Parms, OverwritingProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_OverwritingProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Overwrite a controller profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "OverwriteControllerProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Saved the VRGlobalSettings out to its config file, will include any alterations that you made to the profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, "SaveControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister()
	{
		return UVRGlobalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVRGlobalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroDeltaCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroDeltaCutoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroCutoffSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroCutoffSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroMinCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroMinCutoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerProfiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGlobalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGlobalSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile, "AddControllerProfile" }, // 3173198290
		{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile, "AdjustTransformByControllerProfile" }, // 394600724
		{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile, "AdjustTransformByGivenControllerProfile" }, // 3057760805
		{ &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile, "DeleteControllerProfile" }, // 2659878117
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile, "GetControllerProfile" }, // 2074179303
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles, "GetControllerProfiles" }, // 235323997
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile, "GetCurrentProfile" }, // 892190377
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName, "GetCurrentProfileName" }, // 2976083648
		{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile, "LoadControllerProfile" }, // 333326263
		{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName, "LoadControllerProfileByName" }, // 818206325
		{ &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile, "OverwriteControllerProfile" }, // 3080396268
		{ &Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles, "SaveControllerProfiles" }, // 2063776235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRGlobalSettings.h" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff_MetaData[] = {
		{ "Category", "Secondary Grip 1Euro Settings" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff = { UE4CodeGen_Private::EPropertyClass::Float, "OneEuroDeltaCutoff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, OneEuroDeltaCutoff), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope_MetaData[] = {
		{ "Category", "Secondary Grip 1Euro Settings" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope = { UE4CodeGen_Private::EPropertyClass::Float, "OneEuroCutoffSlope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, OneEuroCutoffSlope), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff_MetaData[] = {
		{ "Category", "Secondary Grip 1Euro Settings" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff = { UE4CodeGen_Private::EPropertyClass::Float, "OneEuroMinCutoff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, OneEuroMinCutoff), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Controller profiles to store related information on a per profile basis" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "ControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVRGlobalSettings, ControllerProfiles), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ControllerProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGlobalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGlobalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGlobalSettings_Statics::ClassParams = {
		&UVRGlobalSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGlobalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGlobalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGlobalSettings, 975436013);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGlobalSettings(Z_Construct_UClass_UVRGlobalSettings, &UVRGlobalSettings::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGlobalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGlobalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
