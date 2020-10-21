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

// Function Trait_Spirit.Trait_Spirit_C.GetWeaponPowerBuildUpMod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Spirit_C::GetWeaponPowerBuildUpMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Spirit.Trait_Spirit_C.GetWeaponPowerBuildUpMod");

	UTrait_Spirit_C_GetWeaponPowerBuildUpMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_Spirit.Trait_Spirit_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_Spirit_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Spirit.Trait_Spirit_C.OnComputeStats");

	UTrait_Spirit_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Spirit.Trait_Spirit_C.ExecuteUbergraph_Trait_Spirit
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Spirit_C::ExecuteUbergraph_Trait_Spirit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Spirit.Trait_Spirit_C.ExecuteUbergraph_Trait_Spirit");

	UTrait_Spirit_C_ExecuteUbergraph_Trait_Spirit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
