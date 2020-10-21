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

// Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AProjectile_Mod_Banish_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.OnProjectileHit");

	AProjectile_Mod_Banish_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.ExecuteUbergraph_Projectile_Mod_Banish
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Banish_C::ExecuteUbergraph_Projectile_Mod_Banish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.ExecuteUbergraph_Projectile_Mod_Banish");

	AProjectile_Mod_Banish_C_ExecuteUbergraph_Projectile_Mod_Banish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
