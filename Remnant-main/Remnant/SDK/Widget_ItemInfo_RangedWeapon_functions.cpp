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

// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.CheckPulseUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::CheckPulseUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.CheckPulseUpgrade");

	UWidget_ItemInfo_RangedWeapon_C_CheckPulseUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.HasInputFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemInfo_RangedWeapon_C::HasInputFocus(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.HasInputFocus");

	UWidget_ItemInfo_RangedWeapon_C_HasInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.EndEquipMod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::EndEquipMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.EndEquipMod");

	UWidget_ItemInfo_RangedWeapon_C_EndEquipMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BeginEquipMod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::BeginEquipMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BeginEquipMod");

	UWidget_ItemInfo_RangedWeapon_C_BeginEquipMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::OnSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSetItem");

	UWidget_ItemInfo_RangedWeapon_C_OnSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.Construct");

	UWidget_ItemInfo_RangedWeapon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSelectItem_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo            InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShowIngredients                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_RangedWeapon_C::OnSelectItem_Event_1(int ItemID, const struct FInspectInfo& InspectInfo, bool Comparing, const struct FInspectInfo& InspectInfoCompare, bool ShowIngredients, const struct FRecipeInfo& Recipe, class UClass* ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSelectItem_Event_1");

	UWidget_ItemInfo_RangedWeapon_C_OnSelectItem_Event_1_Params params;
	params.ItemID = ItemID;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.InspectInfoCompare = InspectInfoCompare;
	params.ShowIngredients = ShowIngredients;
	params.Recipe = Recipe;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnItemAction_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryAction>  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_RangedWeapon_C::OnItemAction_Event_1(TEnumAsByte<EInventoryAction> Action, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnItemAction_Event_1");

	UWidget_ItemInfo_RangedWeapon_C_OnItemAction_Event_1_Params params;
	params.Action = Action;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_RangedWeapon_C::BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ItemInfo_RangedWeapon_C_BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.EndInputFocus
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::EndInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.EndInputFocus");

	UWidget_ItemInfo_RangedWeapon_C_EndInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature");

	UWidget_ItemInfo_RangedWeapon_C_BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.DoAction");

	UWidget_ItemInfo_RangedWeapon_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWidget_ItemInfo_RangedWeapon_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWidget_ItemInfo_RangedWeapon_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWidget_ItemInfo_RangedWeapon_C_BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_RangedWeapon_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.Init");

	UWidget_ItemInfo_RangedWeapon_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.ApplySizeModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_RangedWeapon_C::ApplySizeModifier(int Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.ApplySizeModifier");

	UWidget_ItemInfo_RangedWeapon_C_ApplySizeModifier_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.ExecuteUbergraph_Widget_ItemInfo_RangedWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_RangedWeapon_C::ExecuteUbergraph_Widget_ItemInfo_RangedWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.ExecuteUbergraph_Widget_ItemInfo_RangedWeapon");

	UWidget_ItemInfo_RangedWeapon_C_ExecuteUbergraph_Widget_ItemInfo_RangedWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSubAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ActionLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemInfo_RangedWeapon_C::OnSubAction__DelegateSignature(const struct FText& ActionLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C.OnSubAction__DelegateSignature");

	UWidget_ItemInfo_RangedWeapon_C_OnSubAction__DelegateSignature_Params params;
	params.ActionLabel = ActionLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
