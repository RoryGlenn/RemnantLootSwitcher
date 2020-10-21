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

// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnCompleteQuest
// (BlueprintCallable, BlueprintEvent)
void AQuest_SmallD_IceSkimmer_C::OnCompleteQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnCompleteQuest");

	AQuest_SmallD_IceSkimmer_C_OnCompleteQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.TuskTradeArmor
// (BlueprintCallable, BlueprintEvent)
void AQuest_SmallD_IceSkimmer_C::TuskTradeArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.TuskTradeArmor");

	AQuest_SmallD_IceSkimmer_C_TuskTradeArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnQuestComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// EQuestResult                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_SmallD_IceSkimmer_C::OnQuestComplete(EQuestResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnQuestComplete");

	AQuest_SmallD_IceSkimmer_C_OnQuestComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_SmallD_IceSkimmer_C::BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_SmallD_IceSkimmer_C_BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ARemnantCharacter*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_SmallD_IceSkimmer_C::BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_SmallD_IceSkimmer_C_BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.UpdateEntityVariables
// (BlueprintCallable, BlueprintEvent)
void AQuest_SmallD_IceSkimmer_C::UpdateEntityVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.UpdateEntityVariables");

	AQuest_SmallD_IceSkimmer_C_UpdateEntityVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_SmallD_IceSkimmer_C::BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature");

	AQuest_SmallD_IceSkimmer_C_BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnInteract_ArmorSet
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_SmallD_IceSkimmer_C::OnInteract_ArmorSet(const struct FName& StateName, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.OnInteract_ArmorSet");

	AQuest_SmallD_IceSkimmer_C_OnInteract_ArmorSet_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.InspectArmor
// (BlueprintCallable, BlueprintEvent)
void AQuest_SmallD_IceSkimmer_C::InspectArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.InspectArmor");

	AQuest_SmallD_IceSkimmer_C_InspectArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.SetSmiteDoorOpen
// (BlueprintCallable, BlueprintEvent)
void AQuest_SmallD_IceSkimmer_C::SetSmiteDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.SetSmiteDoorOpen");

	AQuest_SmallD_IceSkimmer_C_SetSmiteDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.ExecuteUbergraph_Quest_SmallD_IceSkimmer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_SmallD_IceSkimmer_C::ExecuteUbergraph_Quest_SmallD_IceSkimmer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C.ExecuteUbergraph_Quest_SmallD_IceSkimmer");

	AQuest_SmallD_IceSkimmer_C_ExecuteUbergraph_Quest_SmallD_IceSkimmer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
