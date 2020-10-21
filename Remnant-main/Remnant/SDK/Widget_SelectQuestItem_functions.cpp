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

// Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.UseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SelectQuestItem_C::UseItem(class UClass* ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.UseItem");

	UWidget_SelectQuestItem_C_UseItem_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_SelectQuestItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.Construct");

	UWidget_SelectQuestItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.BndEvt__QuestInventory_K2Node_ComponentBoundEvent_27_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SelectQuestItem_C::BndEvt__QuestInventory_K2Node_ComponentBoundEvent_27_OnItemClicked__DelegateSignature(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.BndEvt__QuestInventory_K2Node_ComponentBoundEvent_27_OnItemClicked__DelegateSignature");

	UWidget_SelectQuestItem_C_BndEvt__QuestInventory_K2Node_ComponentBoundEvent_27_OnItemClicked__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.ExecuteUbergraph_Widget_SelectQuestItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SelectQuestItem_C::ExecuteUbergraph_Widget_SelectQuestItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.ExecuteUbergraph_Widget_SelectQuestItem");

	UWidget_SelectQuestItem_C_ExecuteUbergraph_Widget_SelectQuestItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.OnItemUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_SelectQuestItem_C::OnItemUsed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectQuestItem.Widget_SelectQuestItem_C.OnItemUsed__DelegateSignature");

	UWidget_SelectQuestItem_C_OnItemUsed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
