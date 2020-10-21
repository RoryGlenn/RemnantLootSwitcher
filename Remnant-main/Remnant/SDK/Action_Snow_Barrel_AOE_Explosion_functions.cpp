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

// Function Action_Snow_Barrel_AOE_Explosion.Action_Snow_Barrel_AOE_Explosion_C.DoSecondaryEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Falloff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageInfo             DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UAction_Snow_Barrel_AOE_Explosion_C::DoSecondaryEffect(class AActor* Target, float Falloff, const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Snow_Barrel_AOE_Explosion.Action_Snow_Barrel_AOE_Explosion_C.DoSecondaryEffect");

	UAction_Snow_Barrel_AOE_Explosion_C_DoSecondaryEffect_Params params;
	params.Target = Target;
	params.Falloff = Falloff;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Snow_Barrel_AOE_Explosion.Action_Snow_Barrel_AOE_Explosion_C.ExecuteUbergraph_Action_Snow_Barrel_AOE_Explosion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Snow_Barrel_AOE_Explosion_C::ExecuteUbergraph_Action_Snow_Barrel_AOE_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Snow_Barrel_AOE_Explosion.Action_Snow_Barrel_AOE_Explosion_C.ExecuteUbergraph_Action_Snow_Barrel_AOE_Explosion");

	UAction_Snow_Barrel_AOE_Explosion_C_ExecuteUbergraph_Action_Snow_Barrel_AOE_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
