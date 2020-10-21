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

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ScaleArmorStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StatName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Base_ComputedStats_C::ScaleArmorStat(const struct FName& StatName, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ScaleArmorStat");

	UCharacter_Base_ComputedStats_C_ScaleArmorStat_Params params;
	params.StatName = StatName;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyExperience
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Base_ComputedStats_C::ModifyExperience(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyExperience");

	UCharacter_Base_ComputedStats_C_ModifyExperience_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyArmorAndResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Base_ComputedStats_C::ModifyArmorAndResistance(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyArmorAndResistance");

	UCharacter_Base_ComputedStats_C_ModifyArmorAndResistance_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Base_ComputedStats_C::ModifyHealth(int Level, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyHealth");

	UCharacter_Base_ComputedStats_C_ModifyHealth_Params params;
	params.Level = Level;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Base_ComputedStats_C::ModifyDamage(int Level, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyDamage");

	UCharacter_Base_ComputedStats_C_ModifyDamage_Params params;
	params.Level = Level;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UCharacter_Base_ComputedStats_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.OnPostComputeStats");

	UCharacter_Base_ComputedStats_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ExecuteUbergraph_Character_Base_ComputedStats
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Base_ComputedStats_C::ExecuteUbergraph_Character_Base_ComputedStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ExecuteUbergraph_Character_Base_ComputedStats");

	UCharacter_Base_ComputedStats_C_ExecuteUbergraph_Character_Base_ComputedStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
