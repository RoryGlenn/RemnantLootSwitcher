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

// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.OnFire
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Snow_Ratmen_Ranged_Crossbow_C::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.OnFire");

	AWeapon_Snow_Ratmen_Ranged_Crossbow_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.DissolveOut
// (BlueprintCallable, BlueprintEvent)
void AWeapon_Snow_Ratmen_Ranged_Crossbow_C::DissolveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.DissolveOut");

	AWeapon_Snow_Ratmen_Ranged_Crossbow_C_DissolveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Snow_Ratmen_Ranged_Crossbow_C::CustomEvent_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.CustomEvent_1");

	AWeapon_Snow_Ratmen_Ranged_Crossbow_C_CustomEvent_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AWeapon_Snow_Ratmen_Ranged_Crossbow_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.OnEquipped");

	AWeapon_Snow_Ratmen_Ranged_Crossbow_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Snow_Ratmen_Ranged_Crossbow_C::ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Ratmen_Ranged_Crossbow.Weapon_Snow_Ratmen_Ranged_Crossbow_C.ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow");

	AWeapon_Snow_Ratmen_Ranged_Crossbow_C_ExecuteUbergraph_Weapon_Snow_Ratmen_Ranged_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
