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

// Function Weapon_Melee_SkinnedBase.Weapon_Melee_SkinnedBase_C.GetWeaponDamageScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Inspecting                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Melee_SkinnedBase_C::GetWeaponDamageScalar(bool Inspecting, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Melee_SkinnedBase.Weapon_Melee_SkinnedBase_C.GetWeaponDamageScalar");

	AWeapon_Melee_SkinnedBase_C_GetWeaponDamageScalar_Params params;
	params.Inspecting = Inspecting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
