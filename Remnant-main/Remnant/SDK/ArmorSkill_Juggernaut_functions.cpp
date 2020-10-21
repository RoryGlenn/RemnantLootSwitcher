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

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetStaggerReductionChance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Chance                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_Juggernaut_C::GetStaggerReductionChance(int Tier, float* Chance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetStaggerReductionChance");

	UArmorSkill_Juggernaut_C_GetStaggerReductionChance_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Chance != nullptr)
		*Chance = params.Chance;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)
void UArmorSkill_Juggernaut_C::GetDescription(class AActor* Actor, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetDescription");

	UArmorSkill_Juggernaut_C_GetDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.FilterIncomingDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UArmorSkill_Juggernaut_C::FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.FilterIncomingDamage");

	UArmorSkill_Juggernaut_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetTierDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)
void UArmorSkill_Juggernaut_C::GetTierDescription(class AActor* Actor, int Tier, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetTierDescription");

	UArmorSkill_Juggernaut_C_GetTierDescription_Params params;
	params.Actor = Actor;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UArmorSkill_Juggernaut_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.OnActionStart");

	UArmorSkill_Juggernaut_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.Timer
// (BlueprintCallable, BlueprintEvent)
void UArmorSkill_Juggernaut_C::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.Timer");

	UArmorSkill_Juggernaut_C_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UArmorSkill_Juggernaut_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.OnComputeStats");

	UArmorSkill_Juggernaut_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.ExecuteUbergraph_ArmorSkill_Juggernaut
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_Juggernaut_C::ExecuteUbergraph_ArmorSkill_Juggernaut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.ExecuteUbergraph_ArmorSkill_Juggernaut");

	UArmorSkill_Juggernaut_C_ExecuteUbergraph_ArmorSkill_Juggernaut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
