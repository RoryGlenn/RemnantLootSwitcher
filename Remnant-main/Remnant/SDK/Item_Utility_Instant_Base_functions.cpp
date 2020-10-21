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

// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.DoAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Utility_Instant_Base_C::DoAction(int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.DoAction");

	AItem_Utility_Instant_Base_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;

}


// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnUse
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
void AItem_Utility_Instant_Base_C::OnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnUse");

	AItem_Utility_Instant_Base_C_OnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnActivate
// (BlueprintCallable, BlueprintEvent)
void AItem_Utility_Instant_Base_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnActivate");

	AItem_Utility_Instant_Base_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnUnequipped
// (Event, Public, BlueprintEvent)
void AItem_Utility_Instant_Base_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnUnequipped");

	AItem_Utility_Instant_Base_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.ExecuteUbergraph_Item_Utility_Instant_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Utility_Instant_Base_C::ExecuteUbergraph_Item_Utility_Instant_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.ExecuteUbergraph_Item_Utility_Instant_Base");

	AItem_Utility_Instant_Base_C_ExecuteUbergraph_Item_Utility_Instant_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
