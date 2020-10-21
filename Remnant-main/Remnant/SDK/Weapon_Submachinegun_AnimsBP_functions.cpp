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

// Function Weapon_Submachinegun_AnimsBP.Weapon_Submachinegun_AnimsBP_C.ExecuteUbergraph_Weapon_Submachinegun_AnimsBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWeapon_Submachinegun_AnimsBP_C::ExecuteUbergraph_Weapon_Submachinegun_AnimsBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Submachinegun_AnimsBP.Weapon_Submachinegun_AnimsBP_C.ExecuteUbergraph_Weapon_Submachinegun_AnimsBP");

	UWeapon_Submachinegun_AnimsBP_C_ExecuteUbergraph_Weapon_Submachinegun_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
