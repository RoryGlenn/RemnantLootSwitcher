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

// Function Quest_Base.Quest_Base_C.GetHost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  HostTargetPlayer               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::GetHost(class AActor** HostTargetPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.GetHost");

	AQuest_Base_C_GetHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HostTargetPlayer != nullptr)
		*HostTargetPlayer = params.HostTargetPlayer;

}


// Function Quest_Base.Quest_Base_C.SetAIPersistent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::SetAIPersistent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.SetAIPersistent");

	AQuest_Base_C_SetAIPersistent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.CleanupSpawnsForEventRegion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestEventRegion* EventRegion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Kill                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Base_C::CleanupSpawnsForEventRegion(class URemnantQuestEventRegion* EventRegion, bool Kill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.CleanupSpawnsForEventRegion");

	AQuest_Base_C_CleanupSpawnsForEventRegion_Params params;
	params.EventRegion = EventRegion;
	params.Kill = Kill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.ShowExitPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestTile*       QuestTile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::ShowExitPrompt(class URemnantQuestTile* QuestTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.ShowExitPrompt");

	AQuest_Base_C_ShowExitPrompt_Params params;
	params.QuestTile = QuestTile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.RemoveKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::RemoveKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.RemoveKey");

	AQuest_Base_C_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.SetKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::SetKey(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.SetKey");

	AQuest_Base_C_SetKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.HasKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Base_C::HasKey(const struct FName& Key, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.HasKey");

	AQuest_Base_C_HasKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Quest_Base.Quest_Base_C.SetInvulnerable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ENUM_InvulnerableType> Invulnerability                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::SetInvulnerable(class AActor* Actor, TEnumAsByte<ENUM_InvulnerableType> Invulnerability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.SetInvulnerable");

	AQuest_Base_C_SetInvulnerable_Params params;
	params.Actor = Actor;
	params.Invulnerability = Invulnerability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.TriggerDialogResponseForEventRegion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestEventRegion* EventRegion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   DialogResponse                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::TriggerDialogResponseForEventRegion(class URemnantQuestEventRegion* EventRegion, const struct FName& DialogResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.TriggerDialogResponseForEventRegion");

	AQuest_Base_C_TriggerDialogResponseForEventRegion_Params params;
	params.EventRegion = EventRegion;
	params.DialogResponse = DialogResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.RegisterDefendObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestEntity*     QuestEntity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Base_C::RegisterDefendObjective(class URemnantQuestEntity* QuestEntity, bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.RegisterDefendObjective");

	AQuest_Base_C_RegisterDefendObjective_Params params;
	params.QuestEntity = QuestEntity;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Base.Quest_Base_C.SetRewardTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Base_C::SetRewardTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Base.Quest_Base_C.SetRewardTag");

	AQuest_Base_C_SetRewardTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
