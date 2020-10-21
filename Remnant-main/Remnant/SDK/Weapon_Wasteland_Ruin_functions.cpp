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

// Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.OnActivated
// (Event, Public, BlueprintEvent)
void AWeapon_Wasteland_Ruin_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.OnActivated");

	AWeapon_Wasteland_Ruin_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.ExecuteUbergraph_Weapon_Wasteland_Ruin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Wasteland_Ruin_C::ExecuteUbergraph_Weapon_Wasteland_Ruin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.ExecuteUbergraph_Weapon_Wasteland_Ruin");

	AWeapon_Wasteland_Ruin_C_ExecuteUbergraph_Weapon_Wasteland_Ruin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
