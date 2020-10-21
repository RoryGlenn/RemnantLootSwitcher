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

// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.Do Action
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAction_StatusEffect_Instant_C::Do_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.Do Action");

	UAction_StatusEffect_Instant_C_Do_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_Instant_C::OnValueChanged(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnValueChanged");

	UAction_StatusEffect_Instant_C_OnValueChanged_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_StatusEffect_Instant_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnActionStart");

	UAction_StatusEffect_Instant_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.ExecuteUbergraph_Action_StatusEffect_Instant
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_Instant_C::ExecuteUbergraph_Action_StatusEffect_Instant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.ExecuteUbergraph_Action_StatusEffect_Instant");

	UAction_StatusEffect_Instant_C_ExecuteUbergraph_Action_StatusEffect_Instant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
