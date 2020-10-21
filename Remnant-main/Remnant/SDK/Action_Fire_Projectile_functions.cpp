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

// Function Action_Fire_Projectile.Action_Fire_Projectile_C.GetAutoArc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAutoArcType                   Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Fire_Projectile_C::GetAutoArc(EAutoArcType* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.GetAutoArc");

	UAction_Fire_Projectile_C_GetAutoArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Fire_Projectile.Action_Fire_Projectile_C.FireTheProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAction_Fire_Projectile_C::FireTheProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.FireTheProjectile");

	UAction_Fire_Projectile_C_FireTheProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Fire_Projectile.Action_Fire_Projectile_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Fire_Projectile_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.OnActionStart");

	UAction_Fire_Projectile_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Fire_Projectile.Action_Fire_Projectile_C.ExecuteUbergraph_Action_Fire_Projectile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Fire_Projectile_C::ExecuteUbergraph_Action_Fire_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.ExecuteUbergraph_Action_Fire_Projectile");

	UAction_Fire_Projectile_C_ExecuteUbergraph_Action_Fire_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
