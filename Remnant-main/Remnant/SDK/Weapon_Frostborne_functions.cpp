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

// Function Weapon_Frostborne.Weapon_Frostborne_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Frostborne_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.ModifyInspectInfo");

	AWeapon_Frostborne_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Weapon_Frostborne.Weapon_Frostborne_C.AddFrostbiteStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Frostborne_C::AddFrostbiteStack(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.AddFrostbiteStack");

	AWeapon_Frostborne_C_AddFrostbiteStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Frostborne.Weapon_Frostborne_C.DriftstoneAddStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Frostborne_C::DriftstoneAddStack(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.DriftstoneAddStack");

	AWeapon_Frostborne_C_DriftstoneAddStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Frostborne.Weapon_Frostborne_C.OnHitTarget
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AWeapon_Frostborne_C::OnHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.OnHitTarget");

	AWeapon_Frostborne_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Frostborne.Weapon_Frostborne_C.OnInHand
// (Event, Public, BlueprintEvent)
void AWeapon_Frostborne_C::OnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.OnInHand");

	AWeapon_Frostborne_C_OnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Frostborne.Weapon_Frostborne_C.OnNotInHand
// (Event, Public, BlueprintEvent)
void AWeapon_Frostborne_C::OnNotInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.OnNotInHand");

	AWeapon_Frostborne_C_OnNotInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Frostborne.Weapon_Frostborne_C.ExecuteUbergraph_Weapon_Frostborne
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Frostborne_C::ExecuteUbergraph_Weapon_Frostborne(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Frostborne.Weapon_Frostborne_C.ExecuteUbergraph_Weapon_Frostborne");

	AWeapon_Frostborne_C_ExecuteUbergraph_Weapon_Frostborne_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
