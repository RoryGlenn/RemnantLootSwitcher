// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.IncrementBossCounter
// (Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::IncrementBossCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.IncrementBossCounter");

	AQuest_Dungeon_POI_Boss_C_IncrementBossCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.CheckIntroCompleted(boss2)
// (Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::CheckIntroCompleted_boss2_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.CheckIntroCompleted(boss2)");

	AQuest_Dungeon_POI_Boss_C_CheckIntroCompleted_boss2__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.Reset Objectives
// (Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::Reset_Objectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.Reset Objectives");

	AQuest_Dungeon_POI_Boss_C_Reset_Objectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ActivateSpawnsPhase2
// (Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::ActivateSpawnsPhase2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ActivateSpawnsPhase2");

	AQuest_Dungeon_POI_Boss_C_ActivateSpawnsPhase2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.IsIntroComplete?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IntroComplete                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Dungeon_POI_Boss_C::IsIntroComplete_(bool* IntroComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.IsIntroComplete?");

	AQuest_Dungeon_POI_Boss_C_IsIntroComplete__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntroComplete != nullptr)
		*IntroComplete = params.IntroComplete;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.CheckIntroCompleted
// (Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::CheckIntroCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.CheckIntroCompleted");

	AQuest_Dungeon_POI_Boss_C_CheckIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ActivateSpawnsPhase1
// (Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::ActivateSpawnsPhase1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ActivateSpawnsPhase1");

	AQuest_Dungeon_POI_Boss_C_ActivateSpawnsPhase1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.AllSpawnsDestroyed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Dungeon_POI_Boss_C::AllSpawnsDestroyed(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.AllSpawnsDestroyed");

	AQuest_Dungeon_POI_Boss_C_AllSpawnsDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.UserConstructionScript");

	AQuest_Dungeon_POI_Boss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_B2D9F6314CBB67DADCA431A762B1FCB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnFailure_B2D9F6314CBB67DADCA431A762B1FCB8(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_B2D9F6314CBB67DADCA431A762B1FCB8");

	AQuest_Dungeon_POI_Boss_C_OnFailure_B2D9F6314CBB67DADCA431A762B1FCB8_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_B2D9F6314CBB67DADCA431A762B1FCB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnSuccess_B2D9F6314CBB67DADCA431A762B1FCB8(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_B2D9F6314CBB67DADCA431A762B1FCB8");

	AQuest_Dungeon_POI_Boss_C_OnSuccess_B2D9F6314CBB67DADCA431A762B1FCB8_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_83BDCD214706A66B8FEAF69ECC91D664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnFailure_83BDCD214706A66B8FEAF69ECC91D664(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_83BDCD214706A66B8FEAF69ECC91D664");

	AQuest_Dungeon_POI_Boss_C_OnFailure_83BDCD214706A66B8FEAF69ECC91D664_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_83BDCD214706A66B8FEAF69ECC91D664
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnSuccess_83BDCD214706A66B8FEAF69ECC91D664(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_83BDCD214706A66B8FEAF69ECC91D664");

	AQuest_Dungeon_POI_Boss_C_OnSuccess_83BDCD214706A66B8FEAF69ECC91D664_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_3A0280904CD93F0AC06743A4D7339575
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnFailure_3A0280904CD93F0AC06743A4D7339575(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_3A0280904CD93F0AC06743A4D7339575");

	AQuest_Dungeon_POI_Boss_C_OnFailure_3A0280904CD93F0AC06743A4D7339575_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_3A0280904CD93F0AC06743A4D7339575
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnSuccess_3A0280904CD93F0AC06743A4D7339575(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_3A0280904CD93F0AC06743A4D7339575");

	AQuest_Dungeon_POI_Boss_C_OnSuccess_3A0280904CD93F0AC06743A4D7339575_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_AED1456F4307B8E50D5D85B4E91E8F05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnFailure_AED1456F4307B8E50D5D85B4E91E8F05(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnFailure_AED1456F4307B8E50D5D85B4E91E8F05");

	AQuest_Dungeon_POI_Boss_C_OnFailure_AED1456F4307B8E50D5D85B4E91E8F05_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_AED1456F4307B8E50D5D85B4E91E8F05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnSuccess_AED1456F4307B8E50D5D85B4E91E8F05(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnSuccess_AED1456F4307B8E50D5D85B4E91E8F05");

	AQuest_Dungeon_POI_Boss_C_OnSuccess_AED1456F4307B8E50D5D85B4E91E8F05_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.SetupHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::SetupHighlight(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.SetupHighlight");

	AQuest_Dungeon_POI_Boss_C_SetupHighlight_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.HighlightSummary
// (BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::HighlightSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.HighlightSummary");

	AQuest_Dungeon_POI_Boss_C_HighlightSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.HighlightClose
// (BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::HighlightClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.HighlightClose");

	AQuest_Dungeon_POI_Boss_C_HighlightClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnQuestComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// EQuestResult                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnQuestComplete(EQuestResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnQuestComplete");

	AQuest_Dungeon_POI_Boss_C_OnQuestComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__EventRegion Fight Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature
// (BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__EventRegion Fight Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__EventRegion Fight Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FEventRegionCharacter   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AQuest_Dungeon_POI_Boss_C::BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature(const struct FEventRegionCharacter& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__EventRegion Fight Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature
// (BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature
// (BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnCheckComplete
// (BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::OnCheckComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnCheckComplete");

	AQuest_Dungeon_POI_Boss_C_OnCheckComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URemnantQuestTile*       QuestTile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Dungeon_POI_Boss_C::BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature(class URemnantQuestTile* QuestTile, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature_Params params;
	params.QuestTile = QuestTile;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnTargetChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::OnTargetChanged_Event_1(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.OnTargetChanged_Event_1");

	AQuest_Dungeon_POI_Boss_C_OnTargetChanged_Event_1_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.IntroCompleted
// (BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::IntroCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.IntroCompleted");

	AQuest_Dungeon_POI_Boss_C_IntroCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature
// (BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Boss2(Optional)_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Boss2(Optional)_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Minions_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::BndEvt__Minions_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.BndEvt__Minions_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature");

	AQuest_Dungeon_POI_Boss_C_BndEvt__Minions_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ReceiveBeginPlay");

	AQuest_Dungeon_POI_Boss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ShowSummary
// (BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::ShowSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ShowSummary");

	AQuest_Dungeon_POI_Boss_C_ShowSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.CloseHighlight
// (BlueprintCallable, BlueprintEvent)
void AQuest_Dungeon_POI_Boss_C::CloseHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.CloseHighlight");

	AQuest_Dungeon_POI_Boss_C_CloseHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ExecuteUbergraph_Quest_Dungeon_POI_Boss
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_POI_Boss_C::ExecuteUbergraph_Quest_Dungeon_POI_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C.ExecuteUbergraph_Quest_Dungeon_POI_Boss");

	AQuest_Dungeon_POI_Boss_C_ExecuteUbergraph_Quest_Dungeon_POI_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
