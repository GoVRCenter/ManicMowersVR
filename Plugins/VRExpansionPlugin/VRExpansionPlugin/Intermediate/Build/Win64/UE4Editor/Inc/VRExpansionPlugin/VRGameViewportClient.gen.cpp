// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameViewportClient() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
// End Cross Module References
	static UEnum* EVRGameInputMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGameInputMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRGameInputMethod(EVRGameInputMethod_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRGameInputMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_CRC() { return 949744453U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRGameInputMethod"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRGameInputMethod::GameInput_Default", (int64)EVRGameInputMethod::GameInput_Default },
				{ "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse", (int64)EVRGameInputMethod::GameInput_SharedKeyboardAndMouse },
				{ "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2", (int64)EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRGameInputMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRGameInputMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UVRGameViewportClient::StaticRegisterNativesUVRGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister()
	{
		return UVRGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UVRGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInputMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameInputMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameInputMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Misc/VRGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\nGenerally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Input Method for the viewport" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "GameInputMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRGameViewportClient, GameInputMethod), Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams = {
		&UVRGameViewportClient::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGameViewportClient, 2741492055);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGameViewportClient(Z_Construct_UClass_UVRGameViewportClient, &UVRGameViewportClient::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
