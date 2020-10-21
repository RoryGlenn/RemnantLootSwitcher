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

// Function Character_Snow_Packmaster_Fens_Heavy_Projectile.Character_Snow_Packmaster_Fens_Heavy_Projectile_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACharacter_Snow_Packmaster_Fens_Heavy_Projectile_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Fens_Heavy_Projectile.Character_Snow_Packmaster_Fens_Heavy_Projectile_C.OnProjectileHit");

	ACharacter_Snow_Packmaster_Fens_Heavy_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Fens_Heavy_Projectile.Character_Snow_Packmaster_Fens_Heavy_Projectile_C.ExecuteUbergraph_Character_Snow_Packmaster_Fens_Heavy_Projectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Packmaster_Fens_Heavy_Projectile_C::ExecuteUbergraph_Character_Snow_Packmaster_Fens_Heavy_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Fens_Heavy_Projectile.Character_Snow_Packmaster_Fens_Heavy_Projectile_C.ExecuteUbergraph_Character_Snow_Packmaster_Fens_Heavy_Projectile");

	ACharacter_Snow_Packmaster_Fens_Heavy_Projectile_C_ExecuteUbergraph_Character_Snow_Packmaster_Fens_Heavy_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
