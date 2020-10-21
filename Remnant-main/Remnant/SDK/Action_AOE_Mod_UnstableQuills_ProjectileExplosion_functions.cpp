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

// Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.ModifyDamage");

	UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.GetDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C::GetDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.GetDamage");

	UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;

}


// Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.OnActionStart");

	UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.ExecuteUbergraph_Action_AOE_Mod_UnstableQuills_ProjectileExplosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C::ExecuteUbergraph_Action_AOE_Mod_UnstableQuills_ProjectileExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_UnstableQuills_ProjectileExplosion.Action_AOE_Mod_UnstableQuills_ProjectileExplosion_C.ExecuteUbergraph_Action_AOE_Mod_UnstableQuills_ProjectileExplosion");

	UAction_AOE_Mod_UnstableQuills_ProjectileExplosion_C_ExecuteUbergraph_Action_AOE_Mod_UnstableQuills_ProjectileExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
