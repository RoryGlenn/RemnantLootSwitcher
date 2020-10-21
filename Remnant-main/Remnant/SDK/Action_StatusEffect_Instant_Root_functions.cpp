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

// Function Action_StatusEffect_Instant_Root.Action_StatusEffect_Instant_Root_C.OnValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_Instant_Root_C::OnValueChanged(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Root.Action_StatusEffect_Instant_Root_C.OnValueChanged");

	UAction_StatusEffect_Instant_Root_C_OnValueChanged_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant_Root.Action_StatusEffect_Instant_Root_C.ExecuteUbergraph_Action_StatusEffect_Instant_Root
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_Instant_Root_C::ExecuteUbergraph_Action_StatusEffect_Instant_Root(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Root.Action_StatusEffect_Instant_Root_C.ExecuteUbergraph_Action_StatusEffect_Instant_Root");

	UAction_StatusEffect_Instant_Root_C_ExecuteUbergraph_Action_StatusEffect_Instant_Root_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
