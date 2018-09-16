// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRButtonComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRButtonComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms
		{
			bool ButtonState;
		};
		static void NewProp_ButtonState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ButtonState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState_SetBit(void* Obj)
	{
		((_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms*)Obj)->ButtonState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "ButtonState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::NewProp_ButtonState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Delegate for notification when the button state changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, "VRButtonStateChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRButtonType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRButtonType(EVRButtonType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC() { return 2034936698U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRButtonType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRButtonType::Btn_Press", (int64)EVRButtonType::Btn_Press },
				{ "EVRButtonType::Btn_Toggle_Return", (int64)EVRButtonType::Btn_Toggle_Return },
				{ "EVRButtonType::Btn_Toggle_Stay", (int64)EVRButtonType::Btn_Toggle_Stay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "// VR Button Types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRButtonType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRButtonType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UVRButtonComponent_IsValidOverlap = FName(TEXT("IsValidOverlap"));
	bool UVRButtonComponent::IsValidOverlap(UPrimitiveComponent* OverlapComponent)
	{
		VRButtonComponent_eventIsValidOverlap_Parms Parms;
		Parms.OverlapComponent=OverlapComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_IsValidOverlap),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRButtonComponent_ReceiveButtonStateChanged = FName(TEXT("ReceiveButtonStateChanged"));
	void UVRButtonComponent::ReceiveButtonStateChanged(bool bCurButtonState)
	{
		VRButtonComponent_eventReceiveButtonStateChanged_Parms Parms;
		Parms.bCurButtonState=bCurButtonState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_ReceiveButtonStateChanged),&Parms);
	}
	void UVRButtonComponent::StaticRegisterNativesUVRButtonComponent()
	{
		UClass* Class = UVRButtonComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsButtonInUse", &UVRButtonComponent::execIsButtonInUse },
			{ "IsValidOverlap", &UVRButtonComponent::execIsValidOverlap },
			{ "OnOverlapBegin", &UVRButtonComponent::execOnOverlapBegin },
			{ "OnOverlapEnd", &UVRButtonComponent::execOnOverlapEnd },
			{ "ResetInitialButtonLocation", &UVRButtonComponent::execResetInitialButtonLocation },
			{ "SetButtonState", &UVRButtonComponent::execSetButtonState },
			{ "SetButtonToRestingPosition", &UVRButtonComponent::execSetButtonToRestingPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics
	{
		struct VRButtonComponent_eventIsButtonInUse_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRButtonComponent_eventIsButtonInUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventIsButtonInUse_Parms), &Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "IsButtonInUse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VRButtonComponent_eventIsButtonInUse_Parms), Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRButtonComponent_eventIsValidOverlap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventIsValidOverlap_Parms), &Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventIsValidOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::NewProp_OverlapComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "IsValidOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRButtonComponent_eventIsValidOverlap_Parms), Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics
	{
		struct VRButtonComponent_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((VRButtonComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(VRButtonComponent_eventOnOverlapBegin_Parms), Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics
	{
		struct VRButtonComponent_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(VRButtonComponent_eventOnOverlapEnd_Parms), Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics
	{
		static void NewProp_bCurButtonState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurButtonState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState_SetBit(void* Obj)
	{
		((VRButtonComponent_eventReceiveButtonStateChanged_Parms*)Obj)->bCurButtonState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurButtonState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms), &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::NewProp_bCurButtonState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Button State Changed" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "ReceiveButtonStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms), Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Should be called after the button is moved post begin play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "ResetInitialButtonLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics
	{
		struct VRButtonComponent_eventSetButtonState_Parms
		{
			bool bNewButtonState;
			bool bCallButtonChangedEvent;
			bool bSnapIntoPosition;
		};
		static void NewProp_bSnapIntoPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapIntoPosition;
		static void NewProp_bCallButtonChangedEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallButtonChangedEvent;
		static void NewProp_bNewButtonState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewButtonState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bSnapIntoPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapIntoPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonState_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bCallButtonChangedEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent = { UE4CodeGen_Private::EPropertyClass::Bool, "bCallButtonChangedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonState_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bNewButtonState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewButtonState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonState_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bSnapIntoPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bCallButtonChangedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::NewProp_bNewButtonState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "CPP_Default_bCallButtonChangedEvent", "true" },
		{ "CPP_Default_bSnapIntoPosition", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Sets the button state outside of interaction, bSnapIntoPosition is for Toggle_Stay mode, it will lerp into the new position if this is false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "SetButtonState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRButtonComponent_eventSetButtonState_Parms), Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_SetButtonState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics
	{
		struct VRButtonComponent_eventSetButtonToRestingPosition_Parms
		{
			bool bLerpToPosition;
		};
		static void NewProp_bLerpToPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpToPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition_SetBit(void* Obj)
	{
		((VRButtonComponent_eventSetButtonToRestingPosition_Parms*)Obj)->bLerpToPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bLerpToPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonToRestingPosition_Parms), &Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::NewProp_bLerpToPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRButtonComponent" },
		{ "CPP_Default_bLerpToPosition", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Resets the button to its resting location (mostly for Toggle_Stay)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "SetButtonToRestingPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRButtonComponent_eventSetButtonToRestingPosition_Parms), Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister()
	{
		return UVRButtonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRButtonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipOverlapFiltering_MetaData[];
#endif
		static void NewProp_bSkipOverlapFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipOverlapFiltering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenEngaging_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenEngaging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonEngageDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ButtonEngageDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepressDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepressDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepressSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepressSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bButtonState_MetaData[];
#endif
		static void NewProp_bButtonState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bButtonState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_InteractingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRButtonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRButtonComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse, "IsButtonInUse" }, // 451327060
		{ &Z_Construct_UFunction_UVRButtonComponent_IsValidOverlap, "IsValidOverlap" }, // 1370830562
		{ &Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin, "OnOverlapBegin" }, // 2079145852
		{ &Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd, "OnOverlapEnd" }, // 2383724212
		{ &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged, "ReceiveButtonStateChanged" }, // 4049547359
		{ &Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation, "ResetInitialButtonLocation" }, // 3993124034
		{ &Z_Construct_UFunction_UVRButtonComponent_SetButtonState, "SetButtonState" }, // 1106006713
		{ &Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition, "SetButtonToRestingPosition" }, // 4150989369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRButtonComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Skips filtering overlaps on the button and lets you manage it yourself, this is the alternative to overriding IsValidOverlap" },
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bSkipOverlapFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipOverlapFiltering", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Minimum time before the button can be switched again" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeBetweenEngaging", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, MinTimeBetweenEngaging), METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Depth at which the button engages (switches)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth = { UE4CodeGen_Private::EPropertyClass::Float, "ButtonEngageDepth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, ButtonEngageDepth), METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Negative on this axis is the depress direction" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, ButtonAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Type of button this is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, ButtonType), Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Distance that the button depresses" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DepressDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, DepressDistance), METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Speed that the button de-presses when no longer interacted with" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DepressSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, DepressSpeed), METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Current state of the button, writable to set initial value" },
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bButtonState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "bButtonState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Whether the button is enabled or not (can be interacted with)" },
	};
#endif
	void Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UVRButtonComponent*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRButtonComponent), &Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InteractingComponent_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InteractingComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "InteractingComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008001c, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, InteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InteractingComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InteractingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged_MetaData[] = {
		{ "Category", "VRButtonComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnButtonStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, OnButtonStateChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bSkipOverlapFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_MinTimeBetweenEngaging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonEngageDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_ButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_DepressSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bButtonState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_InteractingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRButtonComponent_Statics::NewProp_OnButtonStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRButtonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRButtonComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRButtonComponent_Statics::ClassParams = {
		&UVRButtonComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRButtonComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRButtonComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRButtonComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRButtonComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRButtonComponent, 3564857461);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRButtonComponent(Z_Construct_UClass_UVRButtonComponent, &UVRButtonComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRButtonComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRButtonComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
