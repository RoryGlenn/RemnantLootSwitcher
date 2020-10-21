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

// Function ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UArmorSkill_Juggernaut_Action_DisplayStacks_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C.OnActionStart");

	UArmorSkill_Juggernaut_Action_DisplayStacks_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C.UpdateStackCount
// (BlueprintCallable, BlueprintEvent)
void UArmorSkill_Juggernaut_Action_DisplayStacks_C::UpdateStackCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C.UpdateStackCount");

	UArmorSkill_Juggernaut_Action_DisplayStacks_C_UpdateStackCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C.ExecuteUbergraph_ArmorSkill_Juggernaut_Action_DisplayStacks
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_Juggernaut_Action_DisplayStacks_C::ExecuteUbergraph_ArmorSkill_Juggernaut_Action_DisplayStacks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C.ExecuteUbergraph_ArmorSkill_Juggernaut_Action_DisplayStacks");

	UArmorSkill_Juggernaut_Action_DisplayStacks_C_ExecuteUbergraph_ArmorSkill_Juggernaut_Action_DisplayStacks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
