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

// Function Widget_QuestNotification.Widget_QuestNotification_C.GetZoneQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::GetZoneQuest(class ARemnantQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.GetZoneQuest");

	UWidget_QuestNotification_C_GetZoneQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quest != nullptr)
		*Quest = params.Quest;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.UpdateQuestPinning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoUnpin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_C::UpdateQuestPinning(bool DoUnpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.UpdateQuestPinning");

	UWidget_QuestNotification_C_UpdateQuestPinning_Params params;
	params.DoUnpin = DoUnpin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.IsValidQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARemnantQuest*           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_C::IsValidQuest(class ARemnantQuest* Quest, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.IsValidQuest");

	UWidget_QuestNotification_C_IsValidQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.ObjectiveSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward     QuestReward                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_QuestNotification_C::ObjectiveSuccess(const struct FRemnantQuestReward& QuestReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.ObjectiveSuccess");

	UWidget_QuestNotification_C_ObjectiveSuccess_Params params;
	params.QuestReward = QuestReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.InitQuests
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_C::InitQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.InitQuests");

	UWidget_QuestNotification_C_InitQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.QuestSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestReward     QuestReward                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_QuestNotification_C::QuestSuccess(const struct FRemnantQuestReward& QuestReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.QuestSuccess");

	UWidget_QuestNotification_C_QuestSuccess_Params params;
	params.QuestReward = QuestReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.QuestComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::QuestComplete(class AQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.QuestComplete");

	UWidget_QuestNotification_C_QuestComplete_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.FindWidgetForQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_QuestNotification_Quest_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::FindWidgetForQuest(class AQuest* Quest, class UWidget_QuestNotification_Quest_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.FindWidgetForQuest");

	UWidget_QuestNotification_C_FindWidgetForQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.UpdateQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest*           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARemnantQuest*           CallingQuest                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::UpdateQuest(class ARemnantQuest* Quest, class ARemnantQuest* CallingQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.UpdateQuest");

	UWidget_QuestNotification_C_UpdateQuest_Params params;
	params.Quest = Quest;
	params.CallingQuest = CallingQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_QuestNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.Construct");

	UWidget_QuestNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.OnQuestObjectivesUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::OnQuestObjectivesUpdate(class AQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.OnQuestObjectivesUpdate");

	UWidget_QuestNotification_C_OnQuestObjectivesUpdate_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.OnQuestCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::OnQuestCompleted(class AQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.OnQuestCompleted");

	UWidget_QuestNotification_C_OnQuestCompleted_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.OnFinishTravel
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_C::OnFinishTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.OnFinishTravel");

	UWidget_QuestNotification_C_OnFinishTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.OnBeginTravel
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_C::OnBeginTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.OnBeginTravel");

	UWidget_QuestNotification_C_OnBeginTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification.Widget_QuestNotification_C.ExecuteUbergraph_Widget_QuestNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_C::ExecuteUbergraph_Widget_QuestNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification.Widget_QuestNotification_C.ExecuteUbergraph_Widget_QuestNotification");

	UWidget_QuestNotification_C_ExecuteUbergraph_Widget_QuestNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
