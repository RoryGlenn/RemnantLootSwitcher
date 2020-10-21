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

// Function Weapon_IronSentinel.Weapon_IronSentinel_C.OnComputeStats
// (Event, Protected, BlueprintEvent)
void AWeapon_IronSentinel_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_IronSentinel.Weapon_IronSentinel_C.OnComputeStats");

	AWeapon_IronSentinel_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_IronSentinel.Weapon_IronSentinel_C.ExecuteUbergraph_Weapon_IronSentinel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_IronSentinel_C::ExecuteUbergraph_Weapon_IronSentinel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_IronSentinel.Weapon_IronSentinel_C.ExecuteUbergraph_Weapon_IronSentinel");

	AWeapon_IronSentinel_C_ExecuteUbergraph_Weapon_IronSentinel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
