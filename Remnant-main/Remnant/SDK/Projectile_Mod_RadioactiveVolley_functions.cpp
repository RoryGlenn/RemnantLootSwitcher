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

// Function Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_RadioactiveVolley_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	AProjectile_Mod_RadioactiveVolley_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AProjectile_Mod_RadioactiveVolley_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C.OnProjectileHit");

	AProjectile_Mod_RadioactiveVolley_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C.ExecuteUbergraph_Projectile_Mod_RadioactiveVolley
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_RadioactiveVolley_C::ExecuteUbergraph_Projectile_Mod_RadioactiveVolley(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C.ExecuteUbergraph_Projectile_Mod_RadioactiveVolley");

	AProjectile_Mod_RadioactiveVolley_C_ExecuteUbergraph_Projectile_Mod_RadioactiveVolley_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
