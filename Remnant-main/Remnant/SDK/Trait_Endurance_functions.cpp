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

// Function Trait_Endurance.Trait_Endurance_C.GetMaxStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Endurance_C::GetMaxStamina(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Endurance.Trait_Endurance_C.GetMaxStamina");

	UTrait_Endurance_C_GetMaxStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_Endurance.Trait_Endurance_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_Endurance_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Endurance.Trait_Endurance_C.OnComputeStats");

	UTrait_Endurance_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Endurance.Trait_Endurance_C.ExecuteUbergraph_Trait_Endurance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Endurance_C::ExecuteUbergraph_Trait_Endurance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Endurance.Trait_Endurance_C.ExecuteUbergraph_Trait_Endurance");

	UTrait_Endurance_C_ExecuteUbergraph_Trait_Endurance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
