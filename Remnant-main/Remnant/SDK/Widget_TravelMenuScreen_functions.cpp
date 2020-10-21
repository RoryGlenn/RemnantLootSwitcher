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

// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInSurvivalHub
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TravelMenuScreen_C::IsInSurvivalHub(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInSurvivalHub");

	UWidget_TravelMenuScreen_C_IsInSurvivalHub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsSurvivalMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSurvival                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TravelMenuScreen_C::IsSurvivalMode(bool* IsSurvival)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsSurvivalMode");

	UWidget_TravelMenuScreen_C_IsSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSurvival != nullptr)
		*IsSurvival = params.IsSurvival;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInTown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TravelMenuScreen_C::IsInTown(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInTown");

	UWidget_TravelMenuScreen_C_IsInTown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildLastCheckpointEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_TravelMenuScreen_C::BuildLastCheckpointEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildLastCheckpointEntry");

	UWidget_TravelMenuScreen_C_BuildLastCheckpointEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetZoneLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UWidget_TravelMenuScreen_C::GetZoneLabel(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetZoneLabel");

	UWidget_TravelMenuScreen_C_GetZoneLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.SetActionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TravelMenuScreen_C::SetActionText(const struct FText& Text, bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.SetActionText");

	UWidget_TravelMenuScreen_C_SetActionText_Params params;
	params.Text = Text;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.HideEmptyTabs
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TravelMenuScreen_C::HideEmptyTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.HideEmptyTabs");

	UWidget_TravelMenuScreen_C_HideEmptyTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*            List                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::GetList(const struct FName& Category, class UVerticalBox** List)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.GetList");

	UWidget_TravelMenuScreen_C_GetList_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ControlletVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_TravelMenuScreen_C::ControlletVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ControlletVisibility");

	UWidget_TravelMenuScreen_C_ControlletVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.UpdateTravelEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoExit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TravelMenuScreen_C::UpdateTravelEnabled(bool AutoExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.UpdateTravelEnabled");

	UWidget_TravelMenuScreen_C_UpdateTravelEnabled_Params params;
	params.AutoExit = AutoExit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInDungeon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TravelMenuScreen_C::IsInDungeon(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.IsInDungeon");

	UWidget_TravelMenuScreen_C_IsInDungeon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   WaypointName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TopSpacing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::CreateMenuEntry(const struct FName& Action, const struct FText& Label, const struct FName& WaypointName, const struct FName& Category, float TopSpacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntry");

	UWidget_TravelMenuScreen_C_CreateMenuEntry_Params params;
	params.Action = Action;
	params.Label = Label;
	params.WaypointName = WaypointName;
	params.Category = Category;
	params.TopSpacing = TopSpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntryIfTagExists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::CreateMenuEntryIfTagExists(const struct FName& Tag, const struct FText& Label, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.CreateMenuEntryIfTagExists");

	UWidget_TravelMenuScreen_C_CreateMenuEntryIfTagExists_Params params;
	params.Tag = Tag;
	params.Label = Label;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildFastTravelEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_TravelMenuScreen_C::BuildFastTravelEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildFastTravelEntries");

	UWidget_TravelMenuScreen_C_BuildFastTravelEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::Init(class AActor* Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Init");

	UWidget_TravelMenuScreen_C_Init_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.FocusFirst
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TravelMenuScreen_C::FocusFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.FocusFirst");

	UWidget_TravelMenuScreen_C_FocusFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildMenuEntries
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TravelMenuScreen_C::BuildMenuEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BuildMenuEntries");

	UWidget_TravelMenuScreen_C_BuildMenuEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_TravelMenuScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Construct");

	UWidget_TravelMenuScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_TravelMenuScreen_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.Tick");

	UWidget_TravelMenuScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.LeaveTravelMenu
// (BlueprintCallable, BlueprintEvent)
void UWidget_TravelMenuScreen_C::LeaveTravelMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.LeaveTravelMenu");

	UWidget_TravelMenuScreen_C_LeaveTravelMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_TravelMenuScreen_C_BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ExecuteUbergraph_Widget_TravelMenuScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TravelMenuScreen_C::ExecuteUbergraph_Widget_TravelMenuScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelMenuScreen.Widget_TravelMenuScreen_C.ExecuteUbergraph_Widget_TravelMenuScreen");

	UWidget_TravelMenuScreen_C_ExecuteUbergraph_Widget_TravelMenuScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
