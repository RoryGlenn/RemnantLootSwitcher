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

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.IsAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InventoryNotification_C::IsAmmo(class AItem* Item, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.IsAmmo");

	UWidget_InventoryNotification_C_IsAmmo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.GetNumAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InventoryNotification_C::GetNumAmmo(const struct FName& Slot, float Quantity, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.GetNumAmmo");

	UWidget_InventoryNotification_C_GetNumAmmo_Params params;
	params.Slot = Slot;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.AdjustQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InventoryNotification_C::AdjustQuantity(class UClass* ItemBP, int Quantity, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.AdjustQuantity");

	UWidget_InventoryNotification_C_AdjustQuantity_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.SetSmall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Small                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InventoryNotification_C::SetSmall(bool Small)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.SetSmall");

	UWidget_InventoryNotification_C_SetSmall_Params params;
	params.Small = Small;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.Get_Descript_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_InventoryNotification_C::Get_Descript_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.Get_Descript_Visibility_1");

	UWidget_InventoryNotification_C_Get_Descript_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.Build Loot Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InventoryNotification_C::Build_Loot_Entry(class UClass* Item, int Quantity, class UClass* Trait, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.Build Loot Entry");

	UWidget_InventoryNotification_C_Build_Loot_Entry_Params params;
	params.Item = Item;
	params.Quantity = Quantity;
	params.Trait = Trait;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_InventoryNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.Construct");

	UWidget_InventoryNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
void UWidget_InventoryNotification_C::WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1");

	UWidget_InventoryNotification_C_WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InventoryNotification.Widget_InventoryNotification_C.ExecuteUbergraph_Widget_InventoryNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InventoryNotification_C::ExecuteUbergraph_Widget_InventoryNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotification.Widget_InventoryNotification_C.ExecuteUbergraph_Widget_InventoryNotification");

	UWidget_InventoryNotification_C_ExecuteUbergraph_Widget_InventoryNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
