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

// Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCharacterMod_Bruiser_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ModifyDamage");

	UCharacterMod_Bruiser_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ExecuteUbergraph_CharacterMod_Bruiser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMod_Bruiser_C::ExecuteUbergraph_CharacterMod_Bruiser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ExecuteUbergraph_CharacterMod_Bruiser");

	UCharacterMod_Bruiser_C_ExecuteUbergraph_CharacterMod_Bruiser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
