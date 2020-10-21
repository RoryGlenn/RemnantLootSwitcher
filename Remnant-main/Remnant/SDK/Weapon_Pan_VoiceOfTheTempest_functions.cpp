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

// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Pan_VoiceOfTheTempest_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.ModifyInspectInfo");

	AWeapon_Pan_VoiceOfTheTempest_C_ModifyInspectInfo_Params params;
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


// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnActivated
// (Event, Public, BlueprintEvent)
void AWeapon_Pan_VoiceOfTheTempest_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnActivated");

	AWeapon_Pan_VoiceOfTheTempest_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnHitTarget
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AWeapon_Pan_VoiceOfTheTempest_C::OnHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnHitTarget");

	AWeapon_Pan_VoiceOfTheTempest_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AWeapon_Pan_VoiceOfTheTempest_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnEquipped");

	AWeapon_Pan_VoiceOfTheTempest_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnUnequipped
// (Event, Public, BlueprintEvent)
void AWeapon_Pan_VoiceOfTheTempest_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnUnequipped");

	AWeapon_Pan_VoiceOfTheTempest_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnStateChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Pan_VoiceOfTheTempest_C::OnStateChange(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.OnStateChange");

	AWeapon_Pan_VoiceOfTheTempest_C_OnStateChange_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Pan_VoiceOfTheTempest_C::ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C.ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest");

	AWeapon_Pan_VoiceOfTheTempest_C_ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
