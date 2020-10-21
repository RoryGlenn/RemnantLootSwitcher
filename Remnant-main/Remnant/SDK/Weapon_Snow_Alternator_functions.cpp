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

// Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.OnFire
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Snow_Alternator_C::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.OnFire");

	AWeapon_Snow_Alternator_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.ExecuteUbergraph_Weapon_Snow_Alternator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Snow_Alternator_C::ExecuteUbergraph_Weapon_Snow_Alternator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.ExecuteUbergraph_Weapon_Snow_Alternator");

	AWeapon_Snow_Alternator_C_ExecuteUbergraph_Weapon_Snow_Alternator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
