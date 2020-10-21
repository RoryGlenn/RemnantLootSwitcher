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

// Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UArmorSkill_Harden_Scurry_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.OnActionStart");

	UArmorSkill_Harden_Scurry_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UArmorSkill_Harden_Scurry_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.OnComputeStats");

	UArmorSkill_Harden_Scurry_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UArmorSkill_Harden_Scurry_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.OnReapplyBuff");

	UArmorSkill_Harden_Scurry_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.ExecuteUbergraph_ArmorSkill_Harden_Scurry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_Harden_Scurry_C::ExecuteUbergraph_ArmorSkill_Harden_Scurry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C.ExecuteUbergraph_ArmorSkill_Harden_Scurry");

	UArmorSkill_Harden_Scurry_C_ExecuteUbergraph_ArmorSkill_Harden_Scurry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
