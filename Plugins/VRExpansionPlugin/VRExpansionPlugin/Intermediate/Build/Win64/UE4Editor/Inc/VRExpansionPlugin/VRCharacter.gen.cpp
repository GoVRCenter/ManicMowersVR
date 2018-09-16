// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVR();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVRCharacter_ClientAdjustPositionVR = FName(TEXT("ClientAdjustPositionVR"));
	void AVRCharacter::ClientAdjustPositionVR(float TimeStamp, FVector NewLoc, uint16 NewYaw, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRCharacter_eventClientAdjustPositionVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewYaw=NewYaw;
		Parms.NewVel=NewVel;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ClientAdjustPositionVR),&Parms);
	}
	static FName NAME_AVRCharacter_ClientVeryShortAdjustPositionVR = FName(TEXT("ClientVeryShortAdjustPositionVR"));
	void AVRCharacter::ClientVeryShortAdjustPositionVR(float TimeStamp, FVector NewLoc, uint16 NewYaw, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRCharacter_eventClientVeryShortAdjustPositionVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewYaw=NewYaw;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ClientVeryShortAdjustPositionVR),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void AVRCharacter::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVR),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void AVRCharacter::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRDual),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRDualExLight = FName(TEXT("ServerMoveVRDualExLight"));
	void AVRCharacter::ServerMoveVRDualExLight(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRDualExLight_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRDualExLight),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void AVRCharacter::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	static FName NAME_AVRCharacter_ServerMoveVRExLight = FName(TEXT("ServerMoveVRExLight"));
	void AVRCharacter::ServerMoveVRExLight(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRCharacter_eventServerMoveVRExLight_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_ServerMoveVRExLight),&Parms);
	}
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
		UClass* Class = AVRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAdjustPositionVR", &AVRCharacter::execClientAdjustPositionVR },
			{ "ClientVeryShortAdjustPositionVR", &AVRCharacter::execClientVeryShortAdjustPositionVR },
			{ "ServerMoveVR", &AVRCharacter::execServerMoveVR },
			{ "ServerMoveVRDual", &AVRCharacter::execServerMoveVRDual },
			{ "ServerMoveVRDualExLight", &AVRCharacter::execServerMoveVRDualExLight },
			{ "ServerMoveVRDualHybridRootMotion", &AVRCharacter::execServerMoveVRDualHybridRootMotion },
			{ "ServerMoveVRExLight", &AVRCharacter::execServerMoveVRExLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics
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
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_NewYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_ServerMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ServerMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((VRCharacter_eventClientAdjustPositionVR_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bBaseRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bBaseRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventClientAdjustPositionVR_Parms), &Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((VRCharacter_eventClientAdjustPositionVR_Parms*)Obj)->bHasBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bHasBase = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventClientAdjustPositionVR_Parms), &Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "NewBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBase = { UE4CodeGen_Private::EPropertyClass::Object, "NewBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBase_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewVel = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, NewVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "NewYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, NewYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientAdjustPositionVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_ServerMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bBaseRelativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_bHasBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_NewLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ClientAdjustPositionVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820C40, sizeof(VRCharacter_eventClientAdjustPositionVR_Parms), Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics
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
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_NewYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_ServerMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ServerMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((VRCharacter_eventClientVeryShortAdjustPositionVR_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bBaseRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bBaseRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms), &Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((VRCharacter_eventClientVeryShortAdjustPositionVR_Parms*)Obj)->bHasBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bHasBase = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms), &Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "NewBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBase = { UE4CodeGen_Private::EPropertyClass::Object, "NewBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBase_MetaData)) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "NewYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms, NewYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_ServerMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bBaseRelativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_bHasBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_NewLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Bandwidth saving version, when velocity is zeroed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ClientVeryShortAdjustPositionVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820C40, sizeof(VRCharacter_eventClientVeryShortAdjustPositionVR_Parms), Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_CompressedMoveFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_CapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_CapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVR_Parms), Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ServerMoveVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_CapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_CapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldCapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldLFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_OldCapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRDual", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRDual_Parms), Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualExLight_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_CapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_CapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldCapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldLFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_OldCapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::NewProp_TimeStamp0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. ExLight version is used if there was no requested velocity or customVRInputVector or Accell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRDualExLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRDualExLight_Parms), Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_CapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_CapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldCapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldLFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldCapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRDualHybridRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms), Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_MoveReps = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventServerMoveVRExLight_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_CompressedMoveFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_CapsuleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_CapsuleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info. ExLight version is used if there was no requested velocity or customVRInputVector or Accell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ServerMoveVRExLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacter_eventServerMoveVRExLight_Parms), Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRCharacter_ClientAdjustPositionVR, "ClientAdjustPositionVR" }, // 944216844
		{ &Z_Construct_UFunction_AVRCharacter_ClientVeryShortAdjustPositionVR, "ClientVeryShortAdjustPositionVR" }, // 3031942065
		{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVR, "ServerMoveVR" }, // 1329217338
		{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRDual, "ServerMoveVRDual" }, // 1415843651
		{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualExLight, "ServerMoveVRDualExLight" }, // 3078357030
		{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRDualHybridRootMotion, "ServerMoveVRDualHybridRootMotion" }, // 406664392
		{ &Z_Construct_UFunction_AVRCharacter_ServerMoveVRExLight, "ServerMoveVRExLight" }, // 721223288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRCharacter.h" },
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a201d, 1, nullptr, STRUCT_OFFSET(AVRCharacter, VRRootReference), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRCharacter_Statics::ClassParams = {
		&AVRCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AVRCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRCharacter, 1038986968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCharacter(Z_Construct_UClass_AVRCharacter, &AVRCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
