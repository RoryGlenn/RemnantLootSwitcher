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

// Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_SongOfSwords_Activate_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStart");

	UAction_Mod_SongOfSwords_Activate_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Mod_SongOfSwords_Activate_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStop");

	UAction_Mod_SongOfSwords_Activate_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.ExecuteUbergraph_Action_Mod_SongOfSwords_Activate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_SongOfSwords_Activate_C::ExecuteUbergraph_Action_Mod_SongOfSwords_Activate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.ExecuteUbergraph_Action_Mod_SongOfSwords_Activate");

	UAction_Mod_SongOfSwords_Activate_C_ExecuteUbergraph_Action_Mod_SongOfSwords_Activate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
