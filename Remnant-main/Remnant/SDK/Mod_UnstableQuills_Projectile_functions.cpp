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

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayAbsorbedMaxVFX
// (Public, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::PlayAbsorbedMaxVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayAbsorbedMaxVFX");

	AMod_UnstableQuills_Projectile_C_PlayAbsorbedMaxVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayBreakoffVFX
// (Public, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::PlayBreakoffVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayBreakoffVFX");

	AMod_UnstableQuills_Projectile_C_PlayBreakoffVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.GetCurrentGatheredDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurrentGatheredDamage          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_UnstableQuills_Projectile_C::GetCurrentGatheredDamage(float* CurrentGatheredDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.GetCurrentGatheredDamage");

	AMod_UnstableQuills_Projectile_C_GetCurrentGatheredDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentGatheredDamage != nullptr)
		*CurrentGatheredDamage = params.CurrentGatheredDamage;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.LockDamageBonus
// (Public, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::LockDamageBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.LockDamageBonus");

	AMod_UnstableQuills_Projectile_C_LockDamageBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnAttachedTookDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Damage_info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void AMod_UnstableQuills_Projectile_C::OnAttachedTookDamage(const struct FDamageInfo& Damage_info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnAttachedTookDamage");

	AMod_UnstableQuills_Projectile_C_OnAttachedTookDamage_Params params;
	params.Damage_info = Damage_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayDestroyVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::PlayDestroyVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayDestroyVFX");

	AMod_UnstableQuills_Projectile_C_PlayDestroyVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ShouldDoQuickDissolve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_UnstableQuills_Projectile_C::ShouldDoQuickDissolve(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ShouldDoQuickDissolve");

	AMod_UnstableQuills_Projectile_C_ShouldDoQuickDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_UnstableQuills_Projectile_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ReceiveTick");

	AMod_UnstableQuills_Projectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AMod_UnstableQuills_Projectile_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnProjectileHit");

	AMod_UnstableQuills_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnProjectileStop
// (Event, Protected, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::OnProjectileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnProjectileStop");

	AMod_UnstableQuills_Projectile_C_OnProjectileStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.DoDissolve
// (BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::DoDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.DoDissolve");

	AMod_UnstableQuills_Projectile_C_DoDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ReceiveBeginPlay");

	AMod_UnstableQuills_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_UnstableQuills_Projectile_C::Destroy(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.Destroy");

	AMod_UnstableQuills_Projectile_C_Destroy_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayDestroyFVXMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::PlayDestroyFVXMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayDestroyFVXMulti");

	AMod_UnstableQuills_Projectile_C_PlayDestroyFVXMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnNotifyTakeDamage_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AMod_UnstableQuills_Projectile_C::OnNotifyTakeDamage_Event_1(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnNotifyTakeDamage_Event_1");

	AMod_UnstableQuills_Projectile_C_OnNotifyTakeDamage_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayBreakOffVFXMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::PlayBreakOffVFXMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayBreakOffVFXMulti");

	AMod_UnstableQuills_Projectile_C_PlayBreakOffVFXMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayAbsorbedMaxVFXMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMod_UnstableQuills_Projectile_C::PlayAbsorbedMaxVFXMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayAbsorbedMaxVFXMulti");

	AMod_UnstableQuills_Projectile_C_PlayAbsorbedMaxVFXMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ExecuteUbergraph_Mod_UnstableQuills_Projectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_UnstableQuills_Projectile_C::ExecuteUbergraph_Mod_UnstableQuills_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ExecuteUbergraph_Mod_UnstableQuills_Projectile");

	AMod_UnstableQuills_Projectile_C_ExecuteUbergraph_Mod_UnstableQuills_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
