// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGestureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGestureComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGesturesDatabase_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSplineDraw();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRGesture();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGesturesDatabase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGestureComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGestureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_BeginRecording();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_ClearRecording();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_EndRecording();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGestureComponent_SaveRecording();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms
		{
			uint8 GestureType;
			FString DetectedGestureName;
			int32 DetectedGestureIndex;
			UGesturesDatabase* GestureDataBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GestureDataBase;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DetectedGestureIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DetectedGestureName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GestureType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureDataBase = { UE4CodeGen_Private::EPropertyClass::Object, "GestureDataBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, GestureDataBase), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DetectedGestureIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, DetectedGestureIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureName = { UE4CodeGen_Private::EPropertyClass::Str, "DetectedGestureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, DetectedGestureName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureType = { UE4CodeGen_Private::EPropertyClass::Byte, "GestureType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, GestureType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureDataBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Delegate for notification when the lever state changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, "VRGestureDetectedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRGestureMirrorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGestureMirrorMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRGestureMirrorMode(EVRGestureMirrorMode_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRGestureMirrorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_CRC() { return 1098950783U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRGestureMirrorMode"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRGestureMirrorMode::GES_NoMirror", (int64)EVRGestureMirrorMode::GES_NoMirror },
				{ "EVRGestureMirrorMode::GES_MirrorLeft", (int64)EVRGestureMirrorMode::GES_MirrorLeft },
				{ "EVRGestureMirrorMode::GES_MirrorRight", (int64)EVRGestureMirrorMode::GES_MirrorRight },
				{ "EVRGestureMirrorMode::GES_MirrorBoth", (int64)EVRGestureMirrorMode::GES_MirrorBoth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRGestureMirrorMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRGestureMirrorMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRGestureState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGestureState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRGestureState(EVRGestureState_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRGestureState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_CRC() { return 199484620U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRGestureState"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRGestureState::GES_None", (int64)EVRGestureState::GES_None },
				{ "EVRGestureState::GES_Recording", (int64)EVRGestureState::GES_Recording },
				{ "EVRGestureState::GES_Detecting", (int64)EVRGestureState::GES_Detecting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRGestureState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRGestureState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVRGestureSplineDraw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRGestureSplineDraw_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRGestureSplineDraw, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRGestureSplineDraw"), sizeof(FVRGestureSplineDraw), Get_Z_Construct_UScriptStruct_FVRGestureSplineDraw_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRGestureSplineDraw(FVRGestureSplineDraw::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRGestureSplineDraw"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGestureSplineDraw
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGestureSplineDraw()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRGestureSplineDraw")),new UScriptStruct::TCppStructOps<FVRGestureSplineDraw>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGestureSplineDraw;
	struct Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRGestureSplineDraw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000008, 1, nullptr, STRUCT_OFFSET(FVRGestureSplineDraw, SplineMeshes), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FVRGestureSplineDraw, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRGestureSplineDraw",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FVRGestureSplineDraw),
		alignof(FVRGestureSplineDraw),
		Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSplineDraw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRGestureSplineDraw_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRGestureSplineDraw"), sizeof(FVRGestureSplineDraw), Get_Z_Construct_UScriptStruct_FVRGestureSplineDraw_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRGestureSplineDraw_CRC() { return 395648262U; }
class UScriptStruct* FVRGesture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRGesture_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRGesture, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRGesture"), sizeof(FVRGesture), Get_Z_Construct_UScriptStruct_FVRGesture_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRGesture(FVRGesture::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRGesture"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGesture
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGesture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRGesture")),new UScriptStruct::TCppStructOps<FVRGesture>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGesture;
	struct Z_Construct_UScriptStruct_FVRGesture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GestureType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGesture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRGesture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRGesture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "GestureSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGesture, GestureSettings), Z_Construct_UScriptStruct_FVRGestureSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "GestureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FVRGesture, GestureSize), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Samples in the recorded gesture" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples = { UE4CodeGen_Private::EPropertyClass::Array, "Samples", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FVRGesture, Samples), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Samples", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Enum uint8 for end user use" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType = { UE4CodeGen_Private::EPropertyClass::Byte, "GestureType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGesture, GestureType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Name of the recorded gesture" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGesture, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRGesture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRGesture",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FVRGesture),
		alignof(FVRGesture),
		Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGesture_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRGesture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRGesture_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRGesture"), sizeof(FVRGesture), Get_Z_Construct_UScriptStruct_FVRGesture_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRGesture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRGesture_CRC() { return 2976243506U; }
class UScriptStruct* FVRGestureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRGestureSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRGestureSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRGestureSettings"), sizeof(FVRGestureSettings), Get_Z_Construct_UScriptStruct_FVRGestureSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRGestureSettings(FVRGestureSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRGestureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGestureSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGestureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRGestureSettings")),new UScriptStruct::TCppStructOps<FVRGestureSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRGestureSettings;
	struct Z_Construct_UScriptStruct_FVRGestureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MirrorMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_firstThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minimum_Gesture_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Minimum_Gesture_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRGestureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "If enabled this gesture will be checked when inside a DB" },
	};
#endif
	void Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FVRGestureSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVRGestureSettings), &Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "If set to left/right, will mirror the detected gesture if the gesture component is set to match that value\nIf set to Both mode, the gesture will be checked both normal and mirrored and the best match will be chosen" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode = { UE4CodeGen_Private::EPropertyClass::Enum, "MirrorMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGestureSettings, MirrorMode), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Full threshold before detecting the gesture, raise this to lower accuracy but make it easier to detect this gesture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "FullThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGestureSettings, FullThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Maximum distance between the last observations before throwing out this gesture, raise this to make it easier to start checking this gesture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "firstThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGestureSettings, firstThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Minimum length to start recognizing this gesture at" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length = { UE4CodeGen_Private::EPropertyClass::Int, "Minimum_Gesture_Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVRGestureSettings, Minimum_Gesture_Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRGestureSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FVRGestureSettings),
		alignof(FVRGestureSettings),
		Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRGestureSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRGestureSettings"), sizeof(FVRGestureSettings), Get_Z_Construct_UScriptStruct_FVRGestureSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRGestureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRGestureSettings_CRC() { return 942056706U; }
	void UGesturesDatabase::StaticRegisterNativesUGesturesDatabase()
	{
		UClass* Class = UGesturesDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FillSplineWithGesture", &UGesturesDatabase::execFillSplineWithGesture },
			{ "ImportSplineAsGesture", &UGesturesDatabase::execImportSplineAsGesture },
			{ "RecalculateGestures", &UGesturesDatabase::execRecalculateGestures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics
	{
		struct GesturesDatabase_eventFillSplineWithGesture_Parms
		{
			FVRGesture Gesture;
			USplineComponent* SplineComponent;
			bool bCenterPointsOnSpline;
			bool bScaleToBounds;
			float OptionalBounds;
			bool bUseCurvedPoints;
			bool bFillInSplineMeshComponents;
			UStaticMesh* Mesh;
			UMaterial* MeshMat;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_bFillInSplineMeshComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillInSplineMeshComponents;
		static void NewProp_bUseCurvedPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCurvedPoints;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OptionalBounds;
		static void NewProp_bScaleToBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleToBounds;
		static void NewProp_bCenterPointsOnSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterPointsOnSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_MeshMat = { UE4CodeGen_Private::EPropertyClass::Object, "MeshMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, MeshMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents_SetBit(void* Obj)
	{
		((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bFillInSplineMeshComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents = { UE4CodeGen_Private::EPropertyClass::Bool, "bFillInSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints_SetBit(void* Obj)
	{
		((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bUseCurvedPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCurvedPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_OptionalBounds = { UE4CodeGen_Private::EPropertyClass::Float, "OptionalBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, OptionalBounds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds_SetBit(void* Obj)
	{
		((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bScaleToBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleToBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline_SetBit(void* Obj)
	{
		((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bCenterPointsOnSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline = { UE4CodeGen_Private::EPropertyClass::Bool, "bCenterPointsOnSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Gesture = { UE4CodeGen_Private::EPropertyClass::Struct, "Gesture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, Gesture), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_MeshMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_OptionalBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Gesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_bCenterPointsOnSpline", "true" },
		{ "CPP_Default_bFillInSplineMeshComponents", "true" },
		{ "CPP_Default_bScaleToBounds", "false" },
		{ "CPP_Default_bUseCurvedPoints", "true" },
		{ "CPP_Default_Mesh", "None" },
		{ "CPP_Default_MeshMat", "None" },
		{ "CPP_Default_OptionalBounds", "0.000000" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Fills a spline component with a gesture, optionally also generates spline mesh components for it (uses ones already attached if possible)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGesturesDatabase, "FillSplineWithGesture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics
	{
		struct GesturesDatabase_eventImportSplineAsGesture_Parms
		{
			USplineComponent* HostSplineComponent;
			FString GestureName;
			bool bKeepSplineCurves;
			float SegmentLen;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentLen;
		static void NewProp_bKeepSplineCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepSplineCurves;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GestureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostSplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GesturesDatabase_eventImportSplineAsGesture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GesturesDatabase_eventImportSplineAsGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_SegmentLen = { UE4CodeGen_Private::EPropertyClass::Float, "SegmentLen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventImportSplineAsGesture_Parms, SegmentLen), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves_SetBit(void* Obj)
	{
		((GesturesDatabase_eventImportSplineAsGesture_Parms*)Obj)->bKeepSplineCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves = { UE4CodeGen_Private::EPropertyClass::Bool, "bKeepSplineCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GesturesDatabase_eventImportSplineAsGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_GestureName = { UE4CodeGen_Private::EPropertyClass::Str, "GestureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventImportSplineAsGesture_Parms, GestureName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HostSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GesturesDatabase_eventImportSplineAsGesture_Parms, HostSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_SegmentLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_GestureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_bKeepSplineCurves", "true" },
		{ "CPP_Default_SegmentLen", "10.000000" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Imports a spline as a gesture, Segment len is the max segment length (will break lines up into lengths of this size)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGesturesDatabase, "ImportSplineAsGesture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GesturesDatabase_eventImportSplineAsGesture_Parms), Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Recalculate size of gestures and re-scale them to the TargetGestureScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGesturesDatabase, "RecalculateGestures", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGesturesDatabase_NoRegister()
	{
		return UGesturesDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UGesturesDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGestureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetGestureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gestures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gestures;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gestures_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGesturesDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGesturesDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture, "FillSplineWithGesture" }, // 2731960340
		{ &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture, "ImportSplineAsGesture" }, // 2419925326
		{ &Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures, "RecalculateGestures" }, // 1339658732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGesturesDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "IncludePath", "VRGestureComponent.h" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Items Database DataAsset, here we can save all of our game items" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale = { UE4CodeGen_Private::EPropertyClass::Float, "TargetGestureScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGesturesDatabase, TargetGestureScale), METADATA_PARAMS(Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Gestures in this database" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures = { UE4CodeGen_Private::EPropertyClass::Array, "Gestures", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGesturesDatabase, Gestures), METADATA_PARAMS(Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Gestures", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGesturesDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGesturesDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGesturesDatabase_Statics::ClassParams = {
		&UGesturesDatabase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGesturesDatabase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGesturesDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGesturesDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGesturesDatabase, 780407127);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGesturesDatabase(Z_Construct_UClass_UGesturesDatabase, &UGesturesDatabase::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGesturesDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGesturesDatabase);
	static FName NAME_UVRGestureComponent_OnGestureDetected = FName(TEXT("OnGestureDetected"));
	void UVRGestureComponent::OnGestureDetected(uint8 GestureType, FString& DetectedGestureName, int32& DetectedGestureIndex, UGesturesDatabase* GestureDatabase)
	{
		VRGestureComponent_eventOnGestureDetected_Parms Parms;
		Parms.GestureType=GestureType;
		Parms.DetectedGestureName=DetectedGestureName;
		Parms.DetectedGestureIndex=DetectedGestureIndex;
		Parms.GestureDatabase=GestureDatabase;
		ProcessEvent(FindFunctionChecked(NAME_UVRGestureComponent_OnGestureDetected),&Parms);
		DetectedGestureName=Parms.DetectedGestureName;
		DetectedGestureIndex=Parms.DetectedGestureIndex;
	}
	void UVRGestureComponent::StaticRegisterNativesUVRGestureComponent()
	{
		UClass* Class = UVRGestureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginRecording", &UVRGestureComponent::execBeginRecording },
			{ "ClearRecording", &UVRGestureComponent::execClearRecording },
			{ "DrawDebugGesture", &UVRGestureComponent::execDrawDebugGesture },
			{ "EndRecording", &UVRGestureComponent::execEndRecording },
			{ "RecalculateGestureSize", &UVRGestureComponent::execRecalculateGestureSize },
			{ "SaveRecording", &UVRGestureComponent::execSaveRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics
	{
		struct VRGestureComponent_eventBeginRecording_Parms
		{
			bool bRunDetection;
			bool bFlattenGesture;
			bool bDrawGesture;
			bool bDrawAsSpline;
			int32 SamplingHTZ;
			int32 SampleBufferSize;
			float ClampingTolerance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampingTolerance;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SampleBufferSize;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SamplingHTZ;
		static void NewProp_bDrawAsSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAsSpline;
		static void NewProp_bDrawGesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawGesture;
		static void NewProp_bFlattenGesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlattenGesture;
		static void NewProp_bRunDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunDetection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_ClampingTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ClampingTolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, ClampingTolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SampleBufferSize = { UE4CodeGen_Private::EPropertyClass::Int, "SampleBufferSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, SampleBufferSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SamplingHTZ = { UE4CodeGen_Private::EPropertyClass::Int, "SamplingHTZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, SamplingHTZ), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline_SetBit(void* Obj)
	{
		((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bDrawAsSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawAsSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture_SetBit(void* Obj)
	{
		((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bDrawGesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawGesture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bFlattenGesture_SetBit(void* Obj)
	{
		((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bFlattenGesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bFlattenGesture = { UE4CodeGen_Private::EPropertyClass::Bool, "bFlattenGesture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bFlattenGesture_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection_SetBit(void* Obj)
	{
		((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bRunDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunDetection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_ClampingTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SampleBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SamplingHTZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bFlattenGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_bDrawAsSpline", "false" },
		{ "CPP_Default_bDrawGesture", "true" },
		{ "CPP_Default_bFlattenGesture", "true" },
		{ "CPP_Default_ClampingTolerance", "0.010000" },
		{ "CPP_Default_SampleBufferSize", "60" },
		{ "CPP_Default_SamplingHTZ", "30" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Function to begin recording a gesture for detection or saving\n      *\n      * bRunDetection: Should we detect gestures or only record them\n      * bFlattenGestue: Should we flatten the gesture into 2 dimensions (more stable detection and recording, less pretty visually)\n      * bDrawGesture: Should we draw the gesture during recording of it\n      * bDrawAsSpline: If true we will use spline meshes, if false we will draw as debug lines\n      * SamplingHTZ: How many times a second we will record a gesture point, recording is done with a timer now, i would steer away\n      * from htz > possible frames as that could cause double timer updates with how timers are implemented.\n      * SampleBufferSize: How many points we will store in history at a time\n      * ClampingTolerance: If larger than 0.0, we will clamp points to a grid of this size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "BeginRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRGestureComponent_eventBeginRecording_Parms), Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_BeginRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Clears the current recording" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "ClearRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_ClearRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics
	{
		struct VRGestureComponent_eventDrawDebugGesture_Parms
		{
			UObject* WorldContextObject;
			FTransform StartTransform;
			FVRGesture GestureToDraw;
			FColor Color;
			bool bPersistentLines;
			uint8 DepthPriority;
			float LifeTime;
			float Thickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static void NewProp_bPersistentLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistentLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureToDraw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Float, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_LifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "LifeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_DepthPriority = { UE4CodeGen_Private::EPropertyClass::Byte, "DepthPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, DepthPriority), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines_SetBit(void* Obj)
	{
		((VRGestureComponent_eventDrawDebugGesture_Parms*)Obj)->bPersistentLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines = { UE4CodeGen_Private::EPropertyClass::Bool, "bPersistentLines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGestureComponent_eventDrawDebugGesture_Parms), &Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_GestureToDraw = { UE4CodeGen_Private::EPropertyClass::Struct, "GestureToDraw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, GestureToDraw), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_StartTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_DepthPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_GestureToDraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_StartTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_bPersistentLines", "false" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_LifeTime", "-1.000000" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Draw a gesture with a debug line batch" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "DrawDebugGesture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(VRGestureComponent_eventDrawDebugGesture_Parms), Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics
	{
		struct VRGestureComponent_eventEndRecording_Parms
		{
			FVRGesture ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventEndRecording_Parms, ReturnValue), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Ends recording and returns the recorded gesture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "EndRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRGestureComponent_eventEndRecording_Parms), Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_EndRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GestureDatabase;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DetectedGestureIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DetectedGestureName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GestureType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureDatabase = { UE4CodeGen_Private::EPropertyClass::Object, "GestureDatabase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, GestureDatabase), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DetectedGestureIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, DetectedGestureIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureName = { UE4CodeGen_Private::EPropertyClass::Str, "DetectedGestureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, DetectedGestureName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureType = { UE4CodeGen_Private::EPropertyClass::Byte, "GestureType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, GestureType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Size of obeservations vectors.\nint dim;  Not needed, this is just dimensionality\nCan be used for arrays of samples (IE: multiple points), could add back in eventually\nif I decide to support three point tracked gestures or something at some point, but its a waste for single point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "OnGestureDetected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(VRGestureComponent_eventOnGestureDetected_Parms), Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics
	{
		struct VRGestureComponent_eventRecalculateGestureSize_Parms
		{
			FVRGesture InputGesture;
			UGesturesDatabase* GestureDB;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GestureDB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputGesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_GestureDB = { UE4CodeGen_Private::EPropertyClass::Object, "GestureDB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventRecalculateGestureSize_Parms, GestureDB), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_InputGesture = { UE4CodeGen_Private::EPropertyClass::Struct, "InputGesture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventRecalculateGestureSize_Parms, InputGesture), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_GestureDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_InputGesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Recalculates a gestures size and re-scales it to the given database" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "RecalculateGestureSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(VRGestureComponent_eventRecalculateGestureSize_Parms), Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics
	{
		struct VRGestureComponent_eventSaveRecording_Parms
		{
			FVRGesture Recording;
			FString RecordingName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecordingName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recording;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_RecordingName = { UE4CodeGen_Private::EPropertyClass::Str, "RecordingName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventSaveRecording_Parms, RecordingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_Recording = { UE4CodeGen_Private::EPropertyClass::Struct, "Recording", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGestureComponent_eventSaveRecording_Parms, Recording), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_RecordingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_Recording,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Saves a VRGesture to the database" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, "SaveRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(VRGestureComponent_eventSaveRecording_Parms), Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGestureComponent_SaveRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGestureComponent_NoRegister()
	{
		return UVRGestureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRGestureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetGestureInWorldSpace_MetaData[];
#endif
		static void NewProp_bGetGestureInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetGestureInWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSplinesCurved_MetaData[];
#endif
		static void NewProp_bDrawSplinesCurved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSplinesCurved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirroringHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MirroringHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirroringHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SameSampleTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SameSampleTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GesturesDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GesturesDB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGestureDetected_Bind_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureDetected_Bind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGestureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGestureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGestureComponent_BeginRecording, "BeginRecording" }, // 3864402394
		{ &Z_Construct_UFunction_UVRGestureComponent_ClearRecording, "ClearRecording" }, // 2498053459
		{ &Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture, "DrawDebugGesture" }, // 3520182259
		{ &Z_Construct_UFunction_UVRGestureComponent_EndRecording, "EndRecording" }, // 3248241700
		{ &Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected, "OnGestureDetected" }, // 4145745609
		{ &Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize, "RecalculateGestureSize" }, // 564612169
		{ &Z_Construct_UFunction_UVRGestureComponent_SaveRecording, "SaveRecording" }, // 3958185920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VRGestureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A scene component that can sample its positions to record / track VR gestures\nCore code is from https://social.msdn.microsoft.com/Forums/en-US/4a428391-82df-445a-a867-557f284bd4b1/dynamic-time-warping-to-recognize-gestures?forum=kinectsdk\nI would also like to acknowledge RuneBerg as he appears to have used the same core codebase and I discovered that halfway through implementing this\nIf this algorithm should not prove stable enough I will likely look into using a more complex and faster one in the future, I have several modifications\nto the base DTW algorithm noted from a few research papers. I only implemented this one first as it was a single header file and the quickest to implement." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Currently recording gesture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog = { UE4CodeGen_Private::EPropertyClass::Struct, "GestureLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, GestureLog), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, CurrentState), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Maximum vertical or horizontal steps in a row in the lookup table before throwing out a gesture" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope = { UE4CodeGen_Private::EPropertyClass::Int, "maxSlope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, maxSlope), METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Material to use when drawing splines" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, SplineMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Mesh to use when drawing splines" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, SplineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "If false will get the gesture in relative space instead" },
	};
#endif
	void Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_SetBit(void* Obj)
	{
		((UVRGestureComponent*)Obj)->bGetGestureInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bGetGestureInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRGestureComponent), &Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Should we draw splines curved or straight" },
	};
#endif
	void Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_SetBit(void* Obj)
	{
		((UVRGestureComponent*)Obj)->bDrawSplinesCurved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawSplinesCurved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRGestureComponent), &Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Tolerance within we throw out duplicate samples" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "TargetCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, TargetCharacter), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "If a gesture is set to match this value then detection will mirror the gesture" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand = { UE4CodeGen_Private::EPropertyClass::Enum, "MirroringHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, MirroringHand), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Tolerance within we throw out duplicate samples" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "SameSampleTolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, SameSampleTolerance), METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Known sequences" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB = { UE4CodeGen_Private::EPropertyClass::Object, "GesturesDB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, GesturesDB), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnGestureDetected_Bind", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRGestureComponent, OnGestureDetected_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGestureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGestureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGestureComponent_Statics::ClassParams = {
		&UVRGestureComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRGestureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGestureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGestureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGestureComponent, 1634204966);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGestureComponent(Z_Construct_UClass_UVRGestureComponent, &UVRGestureComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGestureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGestureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
