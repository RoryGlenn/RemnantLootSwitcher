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

// Function Widget_Trait.Widget_Trait_C.HasNoTraitManualLevelUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_Trait_C::HasNoTraitManualLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.HasNoTraitManualLevelUp");

	UWidget_Trait_C_HasNoTraitManualLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Trait.Widget_Trait_C.PickStat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInspectStat            Stat                           (Parm, OutParm)
void UWidget_Trait_C::PickStat(struct FInspectInfo* InspectInfo, struct FInspectStat* Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.PickStat");

	UWidget_Trait_C_PickStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InspectInfo != nullptr)
		*InspectInfo = params.InspectInfo;
	if (Stat != nullptr)
		*Stat = params.Stat;

}


// Function Widget_Trait.Widget_Trait_C.HasTraitPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Trait_C::HasTraitPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.HasTraitPoints");

	UWidget_Trait_C_HasTraitPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Trait.Widget_Trait_C.Get_Border_4_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Trait_C::Get_Border_4_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.Get_Border_4_Visibility_1");

	UWidget_Trait_C_Get_Border_4_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Trait.Widget_Trait_C.Get_Stats_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Trait_C::Get_Stats_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.Get_Stats_Visibility_1");

	UWidget_Trait_C_Get_Stats_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Trait.Widget_Trait_C.Get_Description_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Trait_C::Get_Description_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.Get_Description_Visibility_1");

	UWidget_Trait_C_Get_Description_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Trait.Widget_Trait_C.CanSpendTraitPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Trait_C::CanSpendTraitPoint(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.CanSpendTraitPoint");

	UWidget_Trait_C_CanSpendTraitPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_Trait.Widget_Trait_C.Add_TraitLevel
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Trait_C::Add_TraitLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.Add_TraitLevel");

	UWidget_Trait_C_Add_TraitLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.ShowUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Trait_C::ShowUpgrade(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.ShowUpgrade");

	UWidget_Trait_C_ShowUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_Trait.Widget_Trait_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Trait_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.Refresh");

	UWidget_Trait_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.CacheInspectInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Trait_C::CacheInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.CacheInspectInfo");

	UWidget_Trait_C_CacheInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Trait_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.Construct");

	UWidget_Trait_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature
// (BlueprintEvent)
void UWidget_Trait_C::BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature");

	UWidget_Trait_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.OnTraitLevelChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PreviousLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::OnTraitLevelChanged_Event_1(class UClass* Trait, int PreviousLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.OnTraitLevelChanged_Event_1");

	UWidget_Trait_C_OnTraitLevelChanged_Event_1_Params params;
	params.Trait = Trait;
	params.PreviousLevel = PreviousLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.SimulateClick
// (BlueprintCallable, BlueprintEvent)
void UWidget_Trait_C::SimulateClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.SimulateClick");

	UWidget_Trait_C_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Trait_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.OnConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::OnConfirm(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.OnConfirm");

	UWidget_Trait_C_OnConfirm_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.UpgradeEffectEvent
// (BlueprintCallable, BlueprintEvent)
void UWidget_Trait_C::UpgradeEffectEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.UpgradeEffectEvent");

	UWidget_Trait_C_UpgradeEffectEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Trait.Widget_Trait_C.ExecuteUbergraph_Widget_Trait
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Trait_C::ExecuteUbergraph_Widget_Trait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Trait.Widget_Trait_C.ExecuteUbergraph_Widget_Trait");

	UWidget_Trait_C_ExecuteUbergraph_Widget_Trait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
