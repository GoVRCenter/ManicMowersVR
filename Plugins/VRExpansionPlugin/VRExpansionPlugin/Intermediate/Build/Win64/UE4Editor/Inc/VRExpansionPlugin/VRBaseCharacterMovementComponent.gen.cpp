// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRBaseCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode();
// End Cross Module References
	static UEnum* EVRMoveActionDataReq_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionDataReq"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveActionDataReq(EVRMoveActionDataReq_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveActionDataReq"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_CRC() { return 1951468046U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveActionDataReq"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_None", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_None },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRMoveActionDataReq",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRMoveActionDataReq",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMoveAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveAction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveAction(EVRMoveAction_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_CRC() { return 1944999676U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveAction"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveAction::VRMOVEACTION_None", (int64)EVRMoveAction::VRMOVEACTION_None },
				{ "EVRMoveAction::VRMOVEACTION_SnapTurn", (int64)EVRMoveAction::VRMOVEACTION_SnapTurn },
				{ "EVRMoveAction::VRMOVEACTION_Teleport", (int64)EVRMoveAction::VRMOVEACTION_Teleport },
				{ "EVRMoveAction::VRMOVEACTION_StopAllMovement", (int64)EVRMoveAction::VRMOVEACTION_StopAllMovement },
				{ "EVRMoveAction::VRMOVEACTION_SetRotation", (int64)EVRMoveAction::VRMOVEACTION_SetRotation },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM1", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM1 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM2", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM2 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM3", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM3 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM4", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM4 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM5", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM5 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM6", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM6 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM7", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM7 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM8", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM8 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM9", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM9 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM10", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "VRSimpleCharacterMovementComponent handles movement logic for the associated Character owner.\nIt supports various movement modes including: walking, falling, swimming, flying, custom.\n\nMovement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\nbased on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n\nNetworking is fully implemented, with server-client correction and prediction included.\n\n@see ACharacter, UPawnMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRMoveAction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRMoveAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVRConditionalMoveRep2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep2, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep2"), sizeof(FVRConditionalMoveRep2), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep2(FVRConditionalMoveRep2::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep2"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRConditionalMoveRep2")),new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2;
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientBaseBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientRoll), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Moved these here to avoid having to duplicate tons of properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082008, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep2",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FVRConditionalMoveRep2),
		alignof(FVRConditionalMoveRep2),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep2"), sizeof(FVRConditionalMoveRep2), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_CRC() { return 2430881268U; }
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep(FVRConditionalMoveRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRConditionalMoveRep")),new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep;
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomVRInputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomVRInputVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionArray), Z_Construct_UScriptStruct_FVRMoveActionArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "RequestedVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomVRInputVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, CustomVRInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FVRConditionalMoveRep),
		alignof(FVRConditionalMoveRep),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC() { return 2266779041U; }
class UScriptStruct* FVRMoveActionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionArray, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionArray"), sizeof(FVRMoveActionArray), Get_Z_Construct_UScriptStruct_FVRMoveActionArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionArray(FVRMoveActionArray::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionArray"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRMoveActionArray")),new UScriptStruct::TCppStructOps<FVRMoveActionArray>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray;
	struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions = { UE4CodeGen_Private::EPropertyClass::Array, "MoveActions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionArray, MoveActions), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVRMoveActionContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionArray",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FVRMoveActionArray),
		alignof(FVRMoveActionArray),
		Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionArray"), sizeof(FVRMoveActionArray), Get_Z_Construct_UScriptStruct_FVRMoveActionArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_CRC() { return 219149104U; }
class UScriptStruct* FVRMoveActionContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionContainer(FVRMoveActionContainer::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionContainer"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRMoveActionContainer")),new UScriptStruct::TCppStructOps<FVRMoveActionContainer>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer;
	struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionDataReq_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionDataReq;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionDataReq_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveActionDataReq", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDataReq), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveAction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionContainer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FVRMoveActionContainer),
		alignof(FVRMoveActionContainer),
		Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC() { return 2909307224U; }
	static FName NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition = FName(TEXT("ClientAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewVel=NewVel;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition),&Parms);
	}
	static FName NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition = FName(TEXT("ClientVeryShortAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition),&Parms);
	}
	void UVRBaseCharacterMovementComponent::StaticRegisterNativesUVRBaseCharacterMovementComponent()
	{
		UClass* Class = UVRBaseCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomReplicatedMovement", &UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement },
			{ "ClientAdjustPosition", &UVRBaseCharacterMovementComponent::execClientAdjustPosition },
			{ "ClientVeryShortAdjustPosition", &UVRBaseCharacterMovementComponent::execClientVeryShortAdjustPosition },
			{ "GetCustomInputVector", &UVRBaseCharacterMovementComponent::execGetCustomInputVector },
			{ "GetReplicatedMovementMode", &UVRBaseCharacterMovementComponent::execGetReplicatedMovementMode },
			{ "PerformMoveAction_Custom", &UVRBaseCharacterMovementComponent::execPerformMoveAction_Custom },
			{ "PerformMoveAction_SetRotation", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SetRotation },
			{ "PerformMoveAction_SnapTurn", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SnapTurn },
			{ "PerformMoveAction_StopAllMovement", &UVRBaseCharacterMovementComponent::execPerformMoveAction_StopAllMovement },
			{ "PerformMoveAction_Teleport", &UVRBaseCharacterMovementComponent::execPerformMoveAction_Teleport },
			{ "RewindVRMovement", &UVRBaseCharacterMovementComponent::execRewindVRMovement },
			{ "SetClimbingMode", &UVRBaseCharacterMovementComponent::execSetClimbingMode },
			{ "SetCrouchedHalfHeight", &UVRBaseCharacterMovementComponent::execSetCrouchedHalfHeight },
			{ "SetReplicatedMovementMode", &UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics
	{
		struct VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms
		{
			FVector Movement;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Struct, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms, Movement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::NewProp_Movement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|VRLocations" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Add in the custom replicated movement that climbing mode uses, this is a cutom vector that is applied to character movements\non the next tick as a movement input.." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "AddCustomReplicatedMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBase;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_ServerMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ServerMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bBaseRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "NewBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase = { UE4CodeGen_Private::EPropertyClass::Object, "NewBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewVel = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_ServerMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "ClientAdjustPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820C40, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBase;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_ServerMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ServerMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bBaseRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "NewBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase = { UE4CodeGen_Private::EPropertyClass::Object, "NewBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_ServerMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Bandwidth saving version, when velocity is zeroed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "ClientVeryShortAdjustPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820C40, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics
	{
		struct VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Gets the current CustomInputVector for use in custom movement modes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "GetCustomInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics
	{
		struct VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms
		{
			EVRConjoinedMovementModes ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "* Call this to convert the current movement mode to a Conjoined one for reference\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "GetReplicatedMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms
		{
			EVRMoveAction MoveActionToPerform;
			EVRMoveActionDataReq DataRequirementsForMoveAction;
			FVector MoveActionVector;
			FRotator MoveActionRotator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionVector;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataRequirementsForMoveAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataRequirementsForMoveAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionToPerform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionToPerform_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionVector = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction = { UE4CodeGen_Private::EPropertyClass::Enum, "DataRequirementsForMoveAction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, DataRequirementsForMoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveActionToPerform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionToPerform), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a custom moveaction that you define, will call the OnCustomMoveActionPerformed event in the character when processed so you can run your own logic\nBe sure to set the minimum data replication requirements for your move action in order to save on replication.\nMove actions are currently limited to 1 per frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_Custom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms
		{
			float NewYaw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_NewYaw = { UE4CodeGen_Private::EPropertyClass::Float, "NewYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms, NewYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_NewYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a rotation set in line with the move actions system\nThis node specifically sets the FACING direction to a value, where your HMD is pointed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_SetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms
		{
			float SnapTurnDeltaYaw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapTurnDeltaYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_SnapTurnDeltaYaw = { UE4CodeGen_Private::EPropertyClass::Float, "SnapTurnDeltaYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms, SnapTurnDeltaYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_SnapTurnDeltaYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a snap turn in line with the move action system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_SnapTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform StopAllMovementImmediately in line with the move action system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_StopAllMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms
		{
			FVector TeleportLocation;
			FRotator TeleportRotation;
			bool bSkipEncroachmentCheck;
		};
		static void NewProp_bSkipEncroachmentCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEncroachmentCheck;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms*)Obj)->bSkipEncroachmentCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipEncroachmentCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "CPP_Default_bSkipEncroachmentCheck", "false" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a teleport in line with the move action system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_Teleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics
	{
		struct VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Rewind the relative movement that we had with the HMD, this is exposed to Blueprint so that custom movement modes can use it to rewind prior to movement actions.\nReturns the Vector required to get back to the original position (for custom movement modes)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "RewindVRMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics
	{
		struct VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms
		{
			bool bIsClimbing;
		};
		static void NewProp_bIsClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms*)Obj)->bIsClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsClimbing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "SetClimbingMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics
	{
		struct VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms
		{
			float NewCrouchedHalfHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCrouchedHalfHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::NewProp_NewCrouchedHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewCrouchedHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms, NewCrouchedHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::NewProp_NewCrouchedHalfHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Sets the crouching half height since it isn't exposed during runtime to blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "SetCrouchedHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics
	{
		struct VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms
		{
			EVRConjoinedMovementModes NewMovementMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NewMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "SetReplicatedMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister()
	{
		return UVRBaseCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData[];
#endif
		static void NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VRLowGravIgnoresDefaultFluidFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRLowGravWallFrictionScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRLowGravWallFrictionScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPostClimbMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPostClimbMovement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPostClimbMovement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VREdgeRejectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VREdgeRejectDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingMaxReleaseVelocitySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingMaxReleaseVelocitySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData[];
#endif
		static void NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetDefaultPostClimbMovementOnStepUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepUpMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepUpMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingEdgeRejectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingEdgeRejectDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunControlRotationInMovementComponent_MetaData[];
#endif
		static void NewProp_bRunControlRotationInMovementComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunControlRotationInMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData[];
#endif
		static void NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSimulatingComponentsInFloorCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRWallSlideScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRWallSlideScaler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement, "AddCustomReplicatedMovement" }, // 473714613
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition, "ClientAdjustPosition" }, // 4212262755
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition, "ClientVeryShortAdjustPosition" }, // 77759155
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector, "GetCustomInputVector" }, // 2133164184
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode, "GetReplicatedMovementMode" }, // 1055431662
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom, "PerformMoveAction_Custom" }, // 667697649
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation, "PerformMoveAction_SetRotation" }, // 1758989593
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn, "PerformMoveAction_SnapTurn" }, // 26148016
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement, "PerformMoveAction_StopAllMovement" }, // 2473348757
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport, "PerformMoveAction_Teleport" }, // 1093369077
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement, "RewindVRMovement" }, // 3533497660
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode, "SetClimbingMode" }, // 3740928950
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight, "SetCrouchedHalfHeight" }, // 2559290241
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode, "SetReplicatedMovementMode" }, // 949730691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRBaseCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData[] = {
		{ "Category", "VRMovement|LowGrav" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->VRLowGravIgnoresDefaultFluidFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "VRLowGravIgnoresDefaultFluidFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler_MetaData[] = {
		{ "Category", "VRMovement|LowGrav" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Setting this below 1.0 will change how fast you de-accelerate when touching a wall" },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler = { UE4CodeGen_Private::EPropertyClass::Float, "VRLowGravWallFrictionScaler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRLowGravWallFrictionScaler), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultPostClimbMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, DefaultPostClimbMovement), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Custom distance that is required before accepting a walking stepup\n      *  This is to help promote stepping up, engine default is 0.15f, generally you want it lower than that\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance = { UE4CodeGen_Private::EPropertyClass::Float, "VREdgeRejectDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VREdgeRejectDistance), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Max velocity on releasing a climbing grip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingMaxReleaseVelocitySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingMaxReleaseVelocitySize), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will automatically set falling when a stepup occurs during climbing" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->SetDefaultPostClimbMovementOnStepUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp = { UE4CodeGen_Private::EPropertyClass::Bool, "SetDefaultPostClimbMovementOnStepUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingStepUpMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepUpMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Custom distance that is required before accepting a climbing stepup\n      *  This is to help with cases where head wobble causes falling backwards\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingEdgeRejectDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingEdgeRejectDistance), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Height to auto step up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingStepHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepHeight), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will run the control rotation in the CMC instead of in the player controller\nThis puts the player rotation into the scoped movement (perf savings) and also ensures it is properly rotated prior to movement" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->bRunControlRotationInMovementComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunControlRotationInMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will never count a physicsbody channel component as the floor, to prevent jitter / physics problems.\nMake sure that you set simulating objects to the physics body channel if you want this to work correctly" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->bIgnoreSimulatingComponentsInFloorCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSimulatingComponentsInFloorCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Setting this higher will divide the wall slide effect by this value, to reduce collision sliding." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler = { UE4CodeGen_Private::EPropertyClass::Float, "VRWallSlideScaler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRWallSlideScaler), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRBaseCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::ClassParams = {
		&UVRBaseCharacterMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRBaseCharacterMovementComponent, 2181898993);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRBaseCharacterMovementComponent(Z_Construct_UClass_UVRBaseCharacterMovementComponent, &UVRBaseCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRBaseCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRBaseCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
