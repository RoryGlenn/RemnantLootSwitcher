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

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.MakeAbsorbDamageInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo             Damage_info                    (Parm, OutParm, ContainsInstancedReference)
void AProjectile_Mod_Vampiric_C::MakeAbsorbDamageInfo(struct FDamageInfo* Damage_info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.MakeAbsorbDamageInfo");

	AProjectile_Mod_Vampiric_C_MakeAbsorbDamageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damage_info != nullptr)
		*Damage_info = params.Damage_info;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnDamageDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void AProjectile_Mod_Vampiric_C::OnDamageDone(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnDamageDone");

	AProjectile_Mod_Vampiric_C_OnDamageDone_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.LerpScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::LerpScale(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.LerpScale");

	AProjectile_Mod_Vampiric_C_LerpScale_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateVariance
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::UpdateVariance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateVariance");

	AProjectile_Mod_Vampiric_C_UpdateVariance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.LerpToVarianceLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::LerpToVarianceLocation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.LerpToVarianceLocation");

	AProjectile_Mod_Vampiric_C_LerpToVarianceLocation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ResetVarianceLocationTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectile_Mod_Vampiric_C::ResetVarianceLocationTarget(bool ForceImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ResetVarianceLocationTarget");

	AProjectile_Mod_Vampiric_C_ResetVarianceLocationTarget_Params params;
	params.ForceImmediate = ForceImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.AddVarianceLocationTarget
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::AddVarianceLocationTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.AddVarianceLocationTarget");

	AProjectile_Mod_Vampiric_C_AddVarianceLocationTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GetRegenAndDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Regen                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::GetRegenAndDuration(float* Regen, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GetRegenAndDuration");

	AProjectile_Mod_Vampiric_C_GetRegenAndDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Regen != nullptr)
		*Regen = params.Regen;
	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GiveHealthToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::GiveHealthToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GiveHealthToPlayer");

	AProjectile_Mod_Vampiric_C_GiveHealthToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.DetermineReachedPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReachedPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectile_Mod_Vampiric_C::DetermineReachedPlayer(bool* ReachedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.DetermineReachedPlayer");

	AProjectile_Mod_Vampiric_C_DetermineReachedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReachedPlayer != nullptr)
		*ReachedPlayer = params.ReachedPlayer;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnAttachedActorDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::OnAttachedActorDied(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnAttachedActorDied");

	AProjectile_Mod_Vampiric_C_OnAttachedActorDied_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.AbsorbHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::AbsorbHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.AbsorbHealth");

	AProjectile_Mod_Vampiric_C_AbsorbHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.StopAbsorbingAndReturnHome
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::StopAbsorbingAndReturnHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.StopAbsorbingAndReturnHome");

	AProjectile_Mod_Vampiric_C_StopAbsorbingAndReturnHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.BeginAbsorbTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::BeginAbsorbTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.BeginAbsorbTimer");

	AProjectile_Mod_Vampiric_C_BeginAbsorbTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.SetAttachedActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::SetAttachedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.SetAttachedActor");

	AProjectile_Mod_Vampiric_C_SetAttachedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ValidateHit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           bSimulating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AProjectile_Mod_Vampiric_C::ValidateHit(const struct FHitResult& Hit, bool bSimulating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ValidateHit");

	AProjectile_Mod_Vampiric_C_ValidateHit_Params params;
	params.Hit = Hit;
	params.bSimulating = bSimulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GoToHome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::GoToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GoToHome");

	AProjectile_Mod_Vampiric_C_GoToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateCollision
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::UpdateCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateCollision");

	AProjectile_Mod_Vampiric_C_UpdateCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnRep_ReturningHome
// (BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::OnRep_ReturningHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnRep_ReturningHome");

	AProjectile_Mod_Vampiric_C_OnRep_ReturningHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateHome
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::UpdateHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateHome");

	AProjectile_Mod_Vampiric_C_UpdateHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::UpdateTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateTarget");

	AProjectile_Mod_Vampiric_C_UpdateTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ReceiveTick");

	AProjectile_Mod_Vampiric_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnProjectileStop
// (Event, Protected, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::OnProjectileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnProjectileStop");

	AProjectile_Mod_Vampiric_C_OnProjectileStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AProjectile_Mod_Vampiric_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnProjectileHit");

	AProjectile_Mod_Vampiric_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ReceiveBeginPlay");

	AProjectile_Mod_Vampiric_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.SetHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::SetHomingTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.SetHomingTarget");

	AProjectile_Mod_Vampiric_C_SetHomingTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C. StopHoming
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::_StopHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C. StopHoming");

	AProjectile_Mod_Vampiric_C__StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayHealthVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              OwningCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::PlayHealthVFX(class ACharacter* OwningCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayHealthVFX");

	AProjectile_Mod_Vampiric_C_PlayHealthVFX_Params params;
	params.OwningCharacter = OwningCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.DetachAndReturnHome
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayBeforeMoving              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::DetachAndReturnHome(float DelayBeforeMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.DetachAndReturnHome");

	AProjectile_Mod_Vampiric_C_DetachAndReturnHome_Params params;
	params.DelayBeforeMoving = DelayBeforeMoving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.BugVanishes
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::BugVanishes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.BugVanishes");

	AProjectile_Mod_Vampiric_C_BugVanishes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayLandingEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectile_Mod_Vampiric_C::PlayLandingEffects(bool IsCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayLandingEffects");

	AProjectile_Mod_Vampiric_C_PlayLandingEffects_Params params;
	params.IsCharacter = IsCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayEatingVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProjectile_Mod_Vampiric_C::PlayEatingVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayEatingVFX");

	AProjectile_Mod_Vampiric_C_PlayEatingVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnTargetTookDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AProjectile_Mod_Vampiric_C::OnTargetTookDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnTargetTookDamage");

	AProjectile_Mod_Vampiric_C_OnTargetTookDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ExecuteUbergraph_Projectile_Mod_Vampiric
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectile_Mod_Vampiric_C::ExecuteUbergraph_Projectile_Mod_Vampiric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ExecuteUbergraph_Projectile_Mod_Vampiric");

	AProjectile_Mod_Vampiric_C_ExecuteUbergraph_Projectile_Mod_Vampiric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
