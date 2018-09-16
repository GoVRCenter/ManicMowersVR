// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/VRGripScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripScriptBase() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetOwner();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_HasAuthority();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP();
// End Cross Module References
	static UEnum* EGSTransformOverrideType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGSTransformOverrideType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGSTransformOverrideType(EGSTransformOverrideType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGSTransformOverrideType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_CRC() { return 2336332085U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGSTransformOverrideType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGSTransformOverrideType::None", (int64)EGSTransformOverrideType::None },
				{ "EGSTransformOverrideType::OverridesWorldTransform", (int64)EGSTransformOverrideType::OverridesWorldTransform },
				{ "EGSTransformOverrideType::ModifiesWorldTransform", (int64)EGSTransformOverrideType::ModifiesWorldTransform },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModifiesWorldTransform.ToolTip", "Modifies the world transform" },
				{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
				{ "None.ToolTip", "Does not alter the world transform" },
				{ "OverridesWorldTransform.ToolTip", "Overrides the world transform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGSTransformOverrideType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGSTransformOverrideType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UVRGripScriptBase_GetWorldTransform = FName(TEXT("GetWorldTransform"));
	bool UVRGripScriptBase::GetWorldTransform(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, FTransform const& ParentTransform, FBPActorGripInformation& Grip, AActor* actor, UPrimitiveComponent* root, bool bRootHasInterface, bool bActorHasInterface)
	{
		VRGripScriptBase_eventGetWorldTransform_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.DeltaTime=DeltaTime;
		Parms.WorldTransform=WorldTransform;
		Parms.ParentTransform=ParentTransform;
		Parms.Grip=Grip;
		Parms.actor=actor;
		Parms.root=root;
		Parms.bRootHasInterface=bRootHasInterface ? true : false;
		Parms.bActorHasInterface=bActorHasInterface ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_GetWorldTransform),&Parms);
		WorldTransform=Parms.WorldTransform;
		Grip=Parms.Grip;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRGripScriptBase_OnBeginPlay = FName(TEXT("OnBeginPlay"));
	void UVRGripScriptBase::OnBeginPlay(UObject* CallingOwner)
	{
		VRGripScriptBase_eventOnBeginPlay_Parms Parms;
		Parms.CallingOwner=CallingOwner;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnBeginPlay),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnGrip = FName(TEXT("OnGrip"));
	void UVRGripScriptBase::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGrip),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UVRGripScriptBase::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		VRGripScriptBase_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGripRelease),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UVRGripScriptBase::OnSecondaryGrip(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnSecondaryGrip_Parms Parms;
		Parms.Controller=Controller;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UVRGripScriptBase::OnSecondaryGripRelease(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnSecondaryGripRelease_Parms Parms;
		Parms.Controller=Controller;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGripRelease),&Parms);
	}
	void UVRGripScriptBase::StaticRegisterNativesUVRGripScriptBase()
	{
		UClass* Class = UVRGripScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGripTransform", &UVRGripScriptBase::execGetGripTransform },
			{ "GetOwner", &UVRGripScriptBase::execGetOwner },
			{ "GetParent", &UVRGripScriptBase::execGetParent },
			{ "GetParentTransform", &UVRGripScriptBase::execGetParentTransform },
			{ "GetWorldTransform", &UVRGripScriptBase::execGetWorldTransform },
			{ "HasAuthority", &UVRGripScriptBase::execHasAuthority },
			{ "OnBeginPlay", &UVRGripScriptBase::execOnBeginPlay },
			{ "OnGrip", &UVRGripScriptBase::execOnGrip },
			{ "OnGripRelease", &UVRGripScriptBase::execOnGripRelease },
			{ "OnSecondaryGrip", &UVRGripScriptBase::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UVRGripScriptBase::execOnSecondaryGripRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics
	{
		struct VRGripScriptBase_eventGetGripTransform_Parms
		{
			FBPActorGripInformation Grip;
			FTransform ParentTransform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip = { UE4CodeGen_Private::EPropertyClass::Struct, "Grip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the expected grip transform (relative * controller + addition)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "GetGripTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(VRGripScriptBase_eventGetGripTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics
	{
		struct VRGripScriptBase_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the owning actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "GetOwner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VRGripScriptBase_eventGetOwner_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics
	{
		struct VRGripScriptBase_eventGetParent_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the parent component or actor to this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "GetParent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VRGripScriptBase_eventGetParent_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics
	{
		struct VRGripScriptBase_eventGetParentTransform_Parms
		{
			bool bGetWorldTransform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bGetWorldTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetWorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetParentTransform_Parms*)Obj)->bGetWorldTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bGetWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripScriptBase_eventGetParentTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "CPP_Default_bGetWorldTransform", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the current world transform of the owning object (or root comp of if it is an actor)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "GetParentTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(VRGripScriptBase_eventGetParentTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bActorHasInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorHasInterface;
		static void NewProp_bRootHasInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootHasInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bActorHasInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface = { UE4CodeGen_Private::EPropertyClass::Bool, "bActorHasInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bRootHasInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface = { UE4CodeGen_Private::EPropertyClass::Bool, "bRootHasInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root = { UE4CodeGen_Private::EPropertyClass::Object, "root", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, root), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor = { UE4CodeGen_Private::EPropertyClass::Object, "actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip = { UE4CodeGen_Private::EPropertyClass::Struct, "Grip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000180, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Overrides or Modifies the world transform with this grip script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "GetWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C00, sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics
	{
		struct VRGripScriptBase_eventHasAuthority_Parms
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
	void Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripScriptBase_eventHasAuthority_Parms), &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If the owning actor has authority on this connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "HasAuthority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VRGripScriptBase_eventHasAuthority_Parms), Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner = { UE4CodeGen_Private::EPropertyClass::Object, "CallingOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnBeginPlay_Parms, CallingOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "OnBeginPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripScriptBase_eventOnBeginPlay_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "OnGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripScriptBase_eventOnGrip_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasSocketed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripScriptBase_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "OnGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripScriptBase_eventOnGripRelease_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "OnSecondaryGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripScriptBase_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingSecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, "OnSecondaryGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripScriptBase_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister()
	{
		return UVRGripScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyAutoDrop_MetaData[];
#endif
		static void NewProp_bDenyAutoDrop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyAutoDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransformOverrideType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldTransformOverrideType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldTransformOverrideType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGripScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform, "GetGripTransform" }, // 4294931699
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetOwner, "GetOwner" }, // 442688263
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParent, "GetParent" }, // 1836219870
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform, "GetParentTransform" }, // 2887957266
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform, "GetWorldTransform" }, // 993509091
		{ &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority, "HasAuthority" }, // 776010687
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay, "OnBeginPlay" }, // 332398528
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGrip, "OnGrip" }, // 667828751
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease, "OnGripRelease" }, // 3989947458
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip, "OnSecondaryGrip" }, // 2991387567
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 951844062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to deny auto dropping" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bDenyAutoDrop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop = { UE4CodeGen_Private::EPropertyClass::Bool, "bDenyAutoDrop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Whether this script overrides or modifies the world transform" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType = { UE4CodeGen_Private::EPropertyClass::Enum, "WorldTransformOverrideType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UVRGripScriptBase, WorldTransformOverrideType), Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Is currently active helper variable, returned from IsScriptActive()" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams = {
		&UVRGripScriptBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripScriptBase, 2593423014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripScriptBase(Z_Construct_UClass_UVRGripScriptBase, &UVRGripScriptBase::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBase);
	void UVRGripScriptBaseBP::StaticRegisterNativesUVRGripScriptBaseBP()
	{
	}
	UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister()
	{
		return UVRGripScriptBaseBP::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripScriptBaseBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripScriptBaseBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBaseBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams = {
		&UVRGripScriptBaseBP::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003010A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripScriptBaseBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripScriptBaseBP, 1254415859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripScriptBaseBP(Z_Construct_UClass_UVRGripScriptBaseBP, &UVRGripScriptBaseBP::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripScriptBaseBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBaseBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
