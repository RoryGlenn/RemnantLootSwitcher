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

// Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.AddedNoWoundedTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Consumable_LiquidEscape_C::AddedNoWoundedTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.AddedNoWoundedTag");

	UAction_Consumable_LiquidEscape_C_AddedNoWoundedTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Consumable_LiquidEscape_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.OnActionStart");

	UAction_Consumable_LiquidEscape_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.ExecuteUbergraph_Action_Consumable_LiquidEscape
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Consumable_LiquidEscape_C::ExecuteUbergraph_Action_Consumable_LiquidEscape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.ExecuteUbergraph_Action_Consumable_LiquidEscape");

	UAction_Consumable_LiquidEscape_C_ExecuteUbergraph_Action_Consumable_LiquidEscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
