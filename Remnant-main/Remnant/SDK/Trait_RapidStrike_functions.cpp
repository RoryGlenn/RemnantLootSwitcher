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

// Function Trait_RapidStrike.Trait_RapidStrike_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InspectLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTrait_RapidStrike_C::ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.ModifyInspectInfo");

	UTrait_RapidStrike_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InspectLevel = InspectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Trait_RapidStrike.Trait_RapidStrike_C.GetAttackSpeedMod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_RapidStrike_C::GetAttackSpeedMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.GetAttackSpeedMod");

	UTrait_RapidStrike_C_GetAttackSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_RapidStrike.Trait_RapidStrike_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_RapidStrike_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.OnComputeStats");

	UTrait_RapidStrike_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_RapidStrike.Trait_RapidStrike_C.ExecuteUbergraph_Trait_RapidStrike
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_RapidStrike_C::ExecuteUbergraph_Trait_RapidStrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.ExecuteUbergraph_Trait_RapidStrike");

	UTrait_RapidStrike_C_ExecuteUbergraph_Trait_RapidStrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
