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

// Function Weapon_Melee_Base.Weapon_Melee_Base_C.GetWeaponDamageScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Melee_Base_C::GetWeaponDamageScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Melee_Base.Weapon_Melee_Base_C.GetWeaponDamageScalar");

	AWeapon_Melee_Base_C_GetWeaponDamageScalar_Params params;

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
