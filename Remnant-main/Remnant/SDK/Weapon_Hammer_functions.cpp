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

// Function Weapon_Hammer.Weapon_Hammer_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Hammer_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.ModifyDamage");

	AWeapon_Hammer_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Weapon_Hammer.Weapon_Hammer_C.DoHammerAOE
// (BlueprintCallable, BlueprintEvent)
void AWeapon_Hammer_C::DoHammerAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.DoHammerAOE");

	AWeapon_Hammer_C_DoHammerAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Hammer.Weapon_Hammer_C.DoChargeHammerAOE
// (BlueprintCallable, BlueprintEvent)
void AWeapon_Hammer_C::DoChargeHammerAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.DoChargeHammerAOE");

	AWeapon_Hammer_C_DoChargeHammerAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Hammer.Weapon_Hammer_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AWeapon_Hammer_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.OnEquipped");

	AWeapon_Hammer_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Hammer.Weapon_Hammer_C.OnUnequipped
// (Event, Public, BlueprintEvent)
void AWeapon_Hammer_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.OnUnequipped");

	AWeapon_Hammer_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Hammer.Weapon_Hammer_C.OnStateChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Hammer_C::OnStateChange(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.OnStateChange");

	AWeapon_Hammer_C_OnStateChange_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Hammer.Weapon_Hammer_C.NotifyHitTarget
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AWeapon_Hammer_C::NotifyHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.NotifyHitTarget");

	AWeapon_Hammer_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Hammer.Weapon_Hammer_C.ExecuteUbergraph_Weapon_Hammer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Hammer_C::ExecuteUbergraph_Weapon_Hammer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.ExecuteUbergraph_Weapon_Hammer");

	AWeapon_Hammer_C_ExecuteUbergraph_Weapon_Hammer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
