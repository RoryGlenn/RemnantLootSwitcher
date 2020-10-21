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

// Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UCharacterMod_Regenerate_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.OnPostComputeStats");

	UCharacterMod_Regenerate_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.ExecuteUbergraph_CharacterMod_Regenerate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMod_Regenerate_C::ExecuteUbergraph_CharacterMod_Regenerate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.ExecuteUbergraph_CharacterMod_Regenerate");

	UCharacterMod_Regenerate_C_ExecuteUbergraph_CharacterMod_Regenerate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
