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

// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.ApplySizeModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Base_C::ApplySizeModifier(int Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.ApplySizeModifier");

	UWidget_ItemInfo_Base_C_ApplySizeModifier_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Base_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.Init");

	UWidget_ItemInfo_Base_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Base_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.DoAction");

	UWidget_ItemInfo_Base_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.HasInputFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemInfo_Base_C::HasInputFocus(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.HasInputFocus");

	UWidget_ItemInfo_Base_C_HasInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.EndInputFocus
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Base_C::EndInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.EndInputFocus");

	UWidget_ItemInfo_Base_C_EndInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.GetLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Out                            (Parm, OutParm)
void UWidget_ItemInfo_Base_C::GetLabel(struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.GetLabel");

	UWidget_ItemInfo_Base_C_GetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.RefreshInspectInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Base_C::RefreshInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.RefreshInspectInfo");

	UWidget_ItemInfo_Base_C_RefreshInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.InitStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Base_C::InitStats(class UPanelWidget* Root)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.InitStats");

	UWidget_ItemInfo_Base_C_InitStats_Params params;
	params.Root = Root;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetInspectInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo            CompareInspectInfo             (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemInfo_Base_C::SetInspectInfo(const struct FInspectInfo& InspectInfo, bool Comparing, const struct FInspectInfo& CompareInspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetInspectInfo");

	UWidget_ItemInfo_Base_C_SetInspectInfo_Params params;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.CompareInspectInfo = CompareInspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Compare                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo            CompareInspectInfo             (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemInfo_Base_C::SetItem(class UClass* ItemBP, int Level, bool Compare, const struct FInspectInfo& CompareInspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetItem");

	UWidget_ItemInfo_Base_C_SetItem_Params params;
	params.ItemBP = ItemBP;
	params.Level = Level;
	params.Compare = Compare;
	params.CompareInspectInfo = CompareInspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.IsValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemInfo_Base_C::IsValid(class UClass* Item, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.IsValid");

	UWidget_ItemInfo_Base_C_IsValid_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetItemFromInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*     Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo            CompareInspectInfo             (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemInfo_Base_C::SetItemFromInventory(class UInventoryComponent* Inventory, int ItemID, bool Comparing, const struct FInspectInfo& CompareInspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.SetItemFromInventory");

	UWidget_ItemInfo_Base_C_SetItemFromInventory_Params params;
	params.Inventory = Inventory;
	params.ItemID = ItemID;
	params.Comparing = Comparing;
	params.CompareInspectInfo = CompareInspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Base_C::OnSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnSetItem");

	UWidget_ItemInfo_Base_C_OnSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.ExecuteUbergraph_Widget_ItemInfo_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Base_C::ExecuteUbergraph_Widget_ItemInfo_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.ExecuteUbergraph_Widget_ItemInfo_Base");

	UWidget_ItemInfo_Base_C_ExecuteUbergraph_Widget_ItemInfo_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnClickMod__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C*   ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Base_C::OnClickMod__DelegateSignature(class UWidget_ItemModSlot_C* ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnClickMod__DelegateSignature");

	UWidget_ItemInfo_Base_C_OnClickMod__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnSelectMod__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C*   ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Base_C::OnSelectMod__DelegateSignature(class UWidget_ItemModSlot_C* ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Base.Widget_ItemInfo_Base_C.OnSelectMod__DelegateSignature");

	UWidget_ItemInfo_Base_C_OnSelectMod__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
