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

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.GetItemLevelFromRecipe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base*    Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::GetItemLevelFromRecipe(class UCraftingRecipe_Base* Recipe, int* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.GetItemLevelFromRecipe");

	UWidget_CraftConfirm_C_GetItemLevelFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemLevel != nullptr)
		*ItemLevel = params.ItemLevel;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.GetItemFromRecipe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base*    Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::GetItemFromRecipe(class UCraftingRecipe_Base* Recipe, class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.GetItemFromRecipe");

	UWidget_CraftConfirm_C_GetItemFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             RecipeInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_CraftConfirm_C::Init(const struct FRecipeInfo& RecipeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.Init");

	UWidget_CraftConfirm_C_Init_Params params;
	params.RecipeInfo = RecipeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_CraftConfirm_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_CraftConfirm_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_CraftConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.Construct");

	UWidget_CraftConfirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_CraftConfirm_C_BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_CraftConfirm_C_BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CraftConfirm.Widget_CraftConfirm_C.ExecuteUbergraph_Widget_CraftConfirm
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CraftConfirm_C::ExecuteUbergraph_Widget_CraftConfirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CraftConfirm.Widget_CraftConfirm_C.ExecuteUbergraph_Widget_CraftConfirm");

	UWidget_CraftConfirm_C_ExecuteUbergraph_Widget_CraftConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
