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

// Function Widget_RadialItem.Widget_RadialItem_C.CheckEntitlement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NotifyOnNoEntitlement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEntitled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RadialItem_C::CheckEntitlement(class UClass* ItemBP, bool NotifyOnNoEntitlement, bool* IsEntitled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.CheckEntitlement");

	UWidget_RadialItem_C_CheckEntitlement_Params params;
	params.ItemBP = ItemBP;
	params.NotifyOnNoEntitlement = NotifyOnNoEntitlement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEntitled != nullptr)
		*IsEntitled = params.IsEntitled;

}


// Function Widget_RadialItem.Widget_RadialItem_C.PlayEquipSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RadialItem_C::PlayEquipSound(class UClass* ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.PlayEquipSound");

	UWidget_RadialItem_C_PlayEquipSound_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.RefreshChildren
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_RadialItem_C::RefreshChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.RefreshChildren");

	UWidget_RadialItem_C_RefreshChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.IsEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RadialItem_C::IsEquipped(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.IsEquipped");

	UWidget_RadialItem_C_IsEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_RadialItem.Widget_RadialItem_C.HasValidItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RadialItem_C::HasValidItem(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.HasValidItem");

	UWidget_RadialItem_C_HasValidItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_RadialItem.Widget_RadialItem_C.Equip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RadialItem_C::Equip(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.Equip");

	UWidget_RadialItem_C_Equip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;

}


// Function Widget_RadialItem.Widget_RadialItem_C.GetItemBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RadialItem_C::GetItemBP(class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.GetItemBP");

	UWidget_RadialItem_C_GetItemBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemBP != nullptr)
		*ItemBP = params.ItemBP;

}


// Function Widget_RadialItem.Widget_RadialItem_C.SetEquipItemBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RadialItem_C::SetEquipItemBP(class UClass* ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.SetEquipItemBP");

	UWidget_RadialItem_C_SetEquipItemBP_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_RadialItem_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.Refresh");

	UWidget_RadialItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RadialItem_C::BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_RadialItem_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.SimulateClick
// (BlueprintCallable, BlueprintEvent)
void UWidget_RadialItem_C::SimulateClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.SimulateClick");

	UWidget_RadialItem_C_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_RadialItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.Construct");

	UWidget_RadialItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RadialItem.Widget_RadialItem_C.ExecuteUbergraph_Widget_RadialItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RadialItem_C::ExecuteUbergraph_Widget_RadialItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialItem.Widget_RadialItem_C.ExecuteUbergraph_Widget_RadialItem");

	UWidget_RadialItem_C_ExecuteUbergraph_Widget_RadialItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
