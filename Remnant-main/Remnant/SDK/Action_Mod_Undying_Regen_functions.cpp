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

// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_Undying_Regen_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnActionStart");

	UAction_Mod_Undying_Regen_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Undying_Regen_C::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnTick");

	UAction_Mod_Undying_Regen_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.ExecuteUbergraph_Action_Mod_Undying_Regen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Undying_Regen_C::ExecuteUbergraph_Action_Mod_Undying_Regen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.ExecuteUbergraph_Action_Mod_Undying_Regen");

	UAction_Mod_Undying_Regen_C_ExecuteUbergraph_Action_Mod_Undying_Regen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
