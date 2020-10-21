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

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ClampEncumbrance
// (Public, BlueprintCallable, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::ClampEncumbrance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ClampEncumbrance");

	UCharacter_Player_ComputedStats_C_ClampEncumbrance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageVisualStats
// (Public, BlueprintCallable, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::ModifyDamageVisualStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageVisualStats");

	UCharacter_Player_ComputedStats_C_ModifyDamageVisualStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.GenerateTotalDamageModStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OutputStat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   DamageModStat                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   DamageScalarStat               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Player_ComputedStats_C::GenerateTotalDamageModStat(const struct FName& OutputStat, const struct FName& DamageModStat, const struct FName& DamageScalarStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.GenerateTotalDamageModStat");

	UCharacter_Player_ComputedStats_C_GenerateTotalDamageModStat_Params params;
	params.OutputStat = OutputStat;
	params.DamageModStat = DamageModStat;
	params.DamageScalarStat = DamageScalarStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyCritChance
// (Public, BlueprintCallable, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::ModifyCritChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyCritChance");

	UCharacter_Player_ComputedStats_C_ModifyCritChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyEquipLoad
// (Public, BlueprintCallable, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::ModifyEquipLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyEquipLoad");

	UCharacter_Player_ComputedStats_C_ModifyEquipLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   AttributeMod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   DamageBonusStat                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Player_ComputedStats_C::ModifyDamageBonus(const struct FName& Attribute, const struct FName& AttributeMod, const struct FName& DamageBonusStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageBonus");

	UCharacter_Player_ComputedStats_C_ModifyDamageBonus_Params params;
	params.Attribute = Attribute;
	params.AttributeMod = AttributeMod;
	params.DamageBonusStat = DamageBonusStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageBonuses
// (Public, BlueprintCallable, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::ModifyDamageBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageBonuses");

	UCharacter_Player_ComputedStats_C_ModifyDamageBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyResistances
// (Public, BlueprintCallable, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::ModifyResistances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyResistances");

	UCharacter_Player_ComputedStats_C_ModifyResistances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnComputeStats");

	UCharacter_Player_ComputedStats_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnPostComputeStats");

	UCharacter_Player_ComputedStats_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnComputeDerivedStats
// (Event, Public, BlueprintEvent)
void UCharacter_Player_ComputedStats_C::OnComputeDerivedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnComputeDerivedStats");

	UCharacter_Player_ComputedStats_C_OnComputeDerivedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ExecuteUbergraph_Character_Player_ComputedStats
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Player_ComputedStats_C::ExecuteUbergraph_Character_Player_ComputedStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ExecuteUbergraph_Character_Player_ComputedStats");

	UCharacter_Player_ComputedStats_C_ExecuteUbergraph_Character_Player_ComputedStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
