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

// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.ObjectiveSuccess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward     QuestReward                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_QuestCompleteNotification_C::ObjectiveSuccess(const struct FRemnantQuestReward& QuestReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.ObjectiveSuccess");

	UWidget_QuestCompleteNotification_C_ObjectiveSuccess_Params params;
	params.QuestReward = QuestReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.InitQuests
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestCompleteNotification_C::InitQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.InitQuests");

	UWidget_QuestCompleteNotification_C_InitQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.QuestSuccess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward     QuestReward                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_QuestCompleteNotification_C::QuestSuccess(const struct FRemnantQuestReward& QuestReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.QuestSuccess");

	UWidget_QuestCompleteNotification_C_QuestSuccess_Params params;
	params.QuestReward = QuestReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.QuestComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestCompleteNotification_C::QuestComplete(class AQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.QuestComplete");

	UWidget_QuestCompleteNotification_C_QuestComplete_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.FindWidgetForQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_QuestNotification_Quest_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestCompleteNotification_C::FindWidgetForQuest(class AQuest* Quest, class UWidget_QuestNotification_Quest_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.FindWidgetForQuest");

	UWidget_QuestCompleteNotification_C_FindWidgetForQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.UpdateQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest*           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestCompleteNotification_C::UpdateQuest(class ARemnantQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.UpdateQuest");

	UWidget_QuestCompleteNotification_C_UpdateQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_QuestCompleteNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.Construct");

	UWidget_QuestCompleteNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.OnNotifyQuestReward_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward     Reward                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_QuestCompleteNotification_C::OnNotifyQuestReward_Event_1(const struct FRemnantQuestReward& Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.OnNotifyQuestReward_Event_1");

	UWidget_QuestCompleteNotification_C_OnNotifyQuestReward_Event_1_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.ExecuteUbergraph_Widget_QuestCompleteNotification
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestCompleteNotification_C::ExecuteUbergraph_Widget_QuestCompleteNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C.ExecuteUbergraph_Widget_QuestCompleteNotification");

	UWidget_QuestCompleteNotification_C_ExecuteUbergraph_Widget_QuestCompleteNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
