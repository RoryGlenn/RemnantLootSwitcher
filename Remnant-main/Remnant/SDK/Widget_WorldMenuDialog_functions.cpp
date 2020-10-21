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

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginSurvivalMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::BeginSurvivalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginSurvivalMode");

	UWidget_WorldMenuDialog_C_BeginSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetDescriptionTextFromDifficulty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DifficultyDescription DescriptionStruct              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FText                   OutText                        (Parm, OutParm)
void UWidget_WorldMenuDialog_C::GetDescriptionTextFromDifficulty(int Difficulty, const struct FStruct_DifficultyDescription& DescriptionStruct, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetDescriptionTextFromDifficulty");

	UWidget_WorldMenuDialog_C_GetDescriptionTextFromDifficulty_Params params;
	params.Difficulty = Difficulty;
	params.DescriptionStruct = DescriptionStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetDescriptionRowFromGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EQuestMode                     QuestMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   RowName                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::GetDescriptionRowFromGameMode(EQuestMode QuestMode, struct FName* RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetDescriptionRowFromGameMode");

	UWidget_WorldMenuDialog_C_GetDescriptionRowFromGameMode_Params params;
	params.QuestMode = QuestMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetCreateCaptionForGameMode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Caption                        (Parm, OutParm)
void UWidget_WorldMenuDialog_C::GetCreateCaptionForGameMode(struct FText* Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetCreateCaptionForGameMode");

	UWidget_WorldMenuDialog_C_GetCreateCaptionForGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Caption != nullptr)
		*Caption = params.Caption;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.FocusCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::FocusCurrentSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.FocusCurrentSlot");

	UWidget_WorldMenuDialog_C_FocusCurrentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_Slot2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_WorldMenuDialog_C::Get_Slot2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_Slot2_Visibility_1");

	UWidget_WorldMenuDialog_C_Get_Slot2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginSelectDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::BeginSelectDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginSelectDifficulty");

	UWidget_WorldMenuDialog_C_BeginSelectDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_QuestSelectLeft_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_WorldMenuDialog_C::Get_QuestSelectLeft_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_QuestSelectLeft_Visibility_1");

	UWidget_WorldMenuDialog_C_Get_QuestSelectLeft_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshCreateButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::RefreshCreateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshCreateButton");

	UWidget_WorldMenuDialog_C_RefreshCreateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.LoadQuestAndClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::LoadQuestAndClose(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.LoadQuestAndClose");

	UWidget_WorldMenuDialog_C_LoadQuestAndClose_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_Select_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_WorldMenuDialog_C::Get_Select_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_Select_bIsEnabled_1");

	UWidget_WorldMenuDialog_C_Get_Select_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_CreateNewWorld_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_WorldMenuDialog_C::Get_CreateNewWorld_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_CreateNewWorld_Visibility_1");

	UWidget_WorldMenuDialog_C_Get_CreateNewWorld_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_QuestSelectRight_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_WorldMenuDialog_C::Get_QuestSelectRight_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_QuestSelectRight_Visibility_1");

	UWidget_WorldMenuDialog_C_Get_QuestSelectRight_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.NextQuest
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::NextQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.NextQuest");

	UWidget_WorldMenuDialog_C_NextQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.PrevQuest
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::PrevQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.PrevQuest");

	UWidget_WorldMenuDialog_C_PrevQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BuildCreateQuestList
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::BuildCreateQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BuildCreateQuestList");

	UWidget_WorldMenuDialog_C_BuildCreateQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginCreateQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CreateBtnLabel                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_WorldMenuDialog_C::BeginCreateQuest(const struct FText& CreateBtnLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginCreateQuest");

	UWidget_WorldMenuDialog_C_BeginCreateQuest_Params params;
	params.CreateBtnLabel = CreateBtnLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshCreateQuest
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::RefreshCreateQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshCreateQuest");

	UWidget_WorldMenuDialog_C_RefreshCreateQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshQuestSlots
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::RefreshQuestSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshQuestSlots");

	UWidget_WorldMenuDialog_C_RefreshQuestSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARemnantQuest*           Quest                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::GetQuest(int Slot, class ARemnantQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetQuest");

	UWidget_WorldMenuDialog_C_GetQuest_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quest != nullptr)
		*Quest = params.Quest;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetQuestManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URemnantQuestManager*    QuestManager                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::GetQuestManager(class URemnantQuestManager** QuestManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetQuestManager");

	UWidget_WorldMenuDialog_C_GetQuestManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestManager != nullptr)
		*QuestManager = params.QuestManager;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.DestroyQuest
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::DestroyQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.DestroyQuest");

	UWidget_WorldMenuDialog_C_DestroyQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::SetContext(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.SetContext");

	UWidget_WorldMenuDialog_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnLoaded_0E363505432DE7D2D120D18BF2E01914
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::OnLoaded_0E363505432DE7D2D120D18BF2E01914(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnLoaded_0E363505432DE7D2D120D18BF2E01914");

	UWidget_WorldMenuDialog_C_OnLoaded_0E363505432DE7D2D120D18BF2E01914_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.WaitForQuestToLoadThenExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::WaitForQuestToLoadThenExit(class AQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.WaitForQuestToLoadThenExit");

	UWidget_WorldMenuDialog_C_WaitForQuestToLoadThenExit_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnQuestLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::OnQuestLoaded_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnQuestLoaded_Event_1");

	UWidget_WorldMenuDialog_C_OnQuestLoaded_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EUINavigation                  Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature(EUINavigation Direction, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature_Params params;
	params.Direction = Direction;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnDialogResult_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::OnDialogResult_Event_1(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnDialogResult_Event_1");

	UWidget_WorldMenuDialog_C_OnDialogResult_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.CreateQuestEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestEntry      Quest                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_WorldMenuDialog_C::CreateQuestEvent(const struct FRemnantQuestEntry& Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.CreateQuestEvent");

	UWidget_WorldMenuDialog_C_CreateQuestEvent_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_WorldMenuDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Construct");

	UWidget_WorldMenuDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.EndDialog
// (BlueprintCallable, BlueprintEvent)
void UWidget_WorldMenuDialog_C::EndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.EndDialog");

	UWidget_WorldMenuDialog_C_EndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget_WorldSlot_C*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature(class UWidget_WorldSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget_WorldSlot_C*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature(class UWidget_WorldSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget_WorldSlot_C*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature(class UWidget_WorldSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature
// (BlueprintEvent)
void UWidget_WorldMenuDialog_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget_WorldSlot_C*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature(class UWidget_WorldSlot_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldMenuDialog_C_BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.ExecuteUbergraph_Widget_WorldMenuDialog
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WorldMenuDialog_C::ExecuteUbergraph_Widget_WorldMenuDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.ExecuteUbergraph_Widget_WorldMenuDialog");

	UWidget_WorldMenuDialog_C_ExecuteUbergraph_Widget_WorldMenuDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
