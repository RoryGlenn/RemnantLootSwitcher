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

// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.DetermineForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void ACharacter_Snow_Packmaster_GroundProjectile_C::DetermineForceFeedback(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.DetermineForceFeedback");

	ACharacter_Snow_Packmaster_GroundProjectile_C_DetermineForceFeedback_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SetHitCharacterCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Packmaster_GroundProjectile_C::SetHitCharacterCooldown(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SetHitCharacterCooldown");

	ACharacter_Snow_Packmaster_GroundProjectile_C_SetHitCharacterCooldown_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ValidateHitCharacterCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACharacter_Snow_Packmaster_GroundProjectile_C::ValidateHitCharacterCooldown(class AActor* Actor, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ValidateHitCharacterCooldown");

	ACharacter_Snow_Packmaster_GroundProjectile_C_ValidateHitCharacterCooldown_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.TestLineOfSight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACharacter_Snow_Packmaster_GroundProjectile_C::TestLineOfSight(class AActor* to)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.TestLineOfSight");

	ACharacter_Snow_Packmaster_GroundProjectile_C_TestLineOfSight_Params params;
	params.to = to;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_Snow_Packmaster_GroundProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ReceiveBeginPlay");

	ACharacter_Snow_Packmaster_GroundProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACharacter_Snow_Packmaster_GroundProjectile_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ACharacter_Snow_Packmaster_GroundProjectile_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SFX_Shockwave_FadeIn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_GroundProjectile_C::SFX_Shockwave_FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SFX_Shockwave_FadeIn");

	ACharacter_Snow_Packmaster_GroundProjectile_C_SFX_Shockwave_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SFX_Shockwave_FadeOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_GroundProjectile_C::SFX_Shockwave_FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.SFX_Shockwave_FadeOut");

	ACharacter_Snow_Packmaster_GroundProjectile_C_SFX_Shockwave_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Packmaster_GroundProjectile_C::ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_GroundProjectile.Character_Snow_Packmaster_GroundProjectile_C.ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile");

	ACharacter_Snow_Packmaster_GroundProjectile_C_ExecuteUbergraph_Character_Snow_Packmaster_GroundProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
