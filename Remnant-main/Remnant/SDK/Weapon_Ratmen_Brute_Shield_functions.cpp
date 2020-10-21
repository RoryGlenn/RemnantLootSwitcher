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

// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.UpdateCollisionProfiles
// (Public, BlueprintCallable, BlueprintEvent)
void AWeapon_Ratmen_Brute_Shield_C::UpdateCollisionProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.UpdateCollisionProfiles");

	AWeapon_Ratmen_Brute_Shield_C_UpdateCollisionProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWeapon_Ratmen_Brute_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.ReceiveBeginPlay");

	AWeapon_Ratmen_Brute_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Ratmen_Brute_Shield_C::OnEvent_Event_1(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnEvent_Event_1");

	AWeapon_Ratmen_Brute_Shield_C_OnEvent_Event_1_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Ratmen_Brute_Shield_C::BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature");

	AWeapon_Ratmen_Brute_Shield_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AWeapon_Ratmen_Brute_Shield_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnProjectileHit");

	AWeapon_Ratmen_Brute_Shield_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnProjectileStop
// (Event, Protected, BlueprintEvent)
void AWeapon_Ratmen_Brute_Shield_C::OnProjectileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnProjectileStop");

	AWeapon_Ratmen_Brute_Shield_C_OnProjectileStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.SFX_Shiled_Loop_Start
// (BlueprintCallable, BlueprintEvent)
void AWeapon_Ratmen_Brute_Shield_C::SFX_Shiled_Loop_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.SFX_Shiled_Loop_Start");

	AWeapon_Ratmen_Brute_Shield_C_SFX_Shiled_Loop_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.SFX_Shiled_Loop_Stop
// (BlueprintCallable, BlueprintEvent)
void AWeapon_Ratmen_Brute_Shield_C::SFX_Shiled_Loop_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.SFX_Shiled_Loop_Stop");

	AWeapon_Ratmen_Brute_Shield_C_SFX_Shiled_Loop_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnDead_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Ratmen_Brute_Shield_C::OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.OnDead_Event_1");

	AWeapon_Ratmen_Brute_Shield_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.ExecuteUbergraph_Weapon_Ratmen_Brute_Shield
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Ratmen_Brute_Shield_C::ExecuteUbergraph_Weapon_Ratmen_Brute_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ratmen_Brute_Shield.Weapon_Ratmen_Brute_Shield_C.ExecuteUbergraph_Weapon_Ratmen_Brute_Shield");

	AWeapon_Ratmen_Brute_Shield_C_ExecuteUbergraph_Weapon_Ratmen_Brute_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
