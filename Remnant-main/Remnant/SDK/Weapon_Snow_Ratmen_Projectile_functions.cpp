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

// Function Weapon_Snow_Ratmen_Projectile.Weapon_Snow_Ratmen_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWeapon_Snow_Ratmen_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Projectile.Weapon_Snow_Ratmen_Projectile_C.ReceiveBeginPlay");

	AWeapon_Snow_Ratmen_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Ratmen_Projectile.Weapon_Snow_Ratmen_Projectile_C.ExecuteUbergraph_Weapon_Snow_Ratmen_Projectile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Snow_Ratmen_Projectile_C::ExecuteUbergraph_Weapon_Snow_Ratmen_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Projectile.Weapon_Snow_Ratmen_Projectile_C.ExecuteUbergraph_Weapon_Snow_Ratmen_Projectile");

	AWeapon_Snow_Ratmen_Projectile_C_ExecuteUbergraph_Weapon_Snow_Ratmen_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
