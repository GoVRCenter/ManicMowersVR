// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenVRExpansionPlugin/Public/SteamVRKeyboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRKeyboardComponent() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_USteamVRKeyboardComponent_NoRegister();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_USteamVRKeyboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin, "VRKeyboardNullCallbackSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics
	{
		struct _Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms
		{
			FString Text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin, "VRKeyboardStringCallbackSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USteamVRKeyboardComponent::StaticRegisterNativesUSteamVRKeyboardComponent()
	{
		UClass* Class = USteamVRKeyboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseVRKeyboard", &USteamVRKeyboardComponent::execCloseVRKeyboard },
			{ "GetVRKeyboardText", &USteamVRKeyboardComponent::execGetVRKeyboardText },
			{ "OpenVRKeyboard", &USteamVRKeyboardComponent::execOpenVRKeyboard },
			{ "ReOpenVRKeyboardForUser", &USteamVRKeyboardComponent::execReOpenVRKeyboardForUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics
	{
		struct SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms
		{
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
		{ "ToolTip", "Closes the vrkeyboard, can fail if not already open" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "CloseVRKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms), Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics
	{
		struct SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms
		{
			FString Text;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
		{ "ToolTip", "Closes the vrkeyboard, can fail if not already open" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "GetVRKeyboardText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms), Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics
	{
		struct SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms
		{
			bool bIsForPassword;
			bool bIsMultiline;
			bool bUseMinimalMode;
			bool bIsRightHand;
			int32 MaxCharacters;
			FString Description;
			FString StartingString;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartingString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharacters;
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
		static void NewProp_bUseMinimalMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinimalMode;
		static void NewProp_bIsMultiline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMultiline;
		static void NewProp_bIsForPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForPassword;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_StartingString = { UE4CodeGen_Private::EPropertyClass::Str, "StartingString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, StartingString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_MaxCharacters = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCharacters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, MaxCharacters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bUseMinimalMode_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bUseMinimalMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bUseMinimalMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMinimalMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bUseMinimalMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsMultiline_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bIsMultiline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsMultiline = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMultiline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsMultiline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsForPassword_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bIsForPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsForPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsForPassword", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsForPassword_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_StartingString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_MaxCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bUseMinimalMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsMultiline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::NewProp_bIsForPassword,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
		{ "ToolTip", "Opens the vrkeyboard, can fail if already open or in use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "OpenVRKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics
	{
		struct SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms
		{
			bool bIsForPassword;
			bool bIsMultiline;
			bool bUseMinimalMode;
			bool bIsRightHand;
			int32 MaxCharacters;
			FString Description;
			FString StartingString;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartingString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharacters;
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
		static void NewProp_bUseMinimalMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinimalMode;
		static void NewProp_bIsMultiline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMultiline;
		static void NewProp_bIsForPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForPassword;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_StartingString = { UE4CodeGen_Private::EPropertyClass::Str, "StartingString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, StartingString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_MaxCharacters = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCharacters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, MaxCharacters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bUseMinimalMode_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bUseMinimalMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bUseMinimalMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMinimalMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bUseMinimalMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsMultiline_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bIsMultiline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsMultiline = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMultiline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsMultiline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsForPassword_SetBit(void* Obj)
	{
		((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bIsForPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsForPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsForPassword", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsForPassword_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_StartingString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_MaxCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bUseMinimalMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsMultiline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::NewProp_bIsForPassword,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
		{ "ToolTip", "Re-Opens the vr keyboard that is currently active, can be used for switching interacting hands and the like." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "ReOpenVRKeyboardForUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRKeyboardComponent_NoRegister()
	{
		return USteamVRKeyboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRKeyboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyboardCharInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyboardCharInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyboardClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyboardClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyboardDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyboardDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRKeyboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRKeyboardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard, "CloseVRKeyboard" }, // 26562794
		{ &Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText, "GetVRKeyboardText" }, // 3117566258
		{ &Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard, "OpenVRKeyboard" }, // 4076611417
		{ &Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser, "ReOpenVRKeyboardForUser" }, // 620665541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRKeyboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SteamVRKeyboardComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows displaying / hiding and sending input to and from the SteamVR keyboard. Has events for keyboard inputs\nGenerally outdated with the data table based keyboards I added, but still useful." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardCharInput_MetaData[] = {
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardCharInput = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeyboardCharInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamVRKeyboardComponent, OnKeyboardCharInput), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardCharInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardCharInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardClosed_MetaData[] = {
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardClosed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeyboardClosed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamVRKeyboardComponent, OnKeyboardClosed), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardClosed_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardDone_MetaData[] = {
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
		{ "ToolTip", "Keyboard Functions" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardDone = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeyboardDone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamVRKeyboardComponent, OnKeyboardDone), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardDone_MetaData, ARRAY_COUNT(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardDone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamVRKeyboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardCharInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRKeyboardComponent_Statics::NewProp_OnKeyboardDone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRKeyboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRKeyboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamVRKeyboardComponent_Statics::ClassParams = {
		&USteamVRKeyboardComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USteamVRKeyboardComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USteamVRKeyboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRKeyboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamVRKeyboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRKeyboardComponent, 103700162);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRKeyboardComponent(Z_Construct_UClass_USteamVRKeyboardComponent, &USteamVRKeyboardComponent::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("USteamVRKeyboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRKeyboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
