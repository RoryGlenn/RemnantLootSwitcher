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

// Function Action_Trinket_CompulsionLoop.Action_Trinket_CompulsionLoop_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Trinket_CompulsionLoop_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_CompulsionLoop.Action_Trinket_CompulsionLoop_C.OnComputeStats");

	UAction_Trinket_CompulsionLoop_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Trinket_CompulsionLoop.Action_Trinket_CompulsionLoop_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Trinket_CompulsionLoop_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_CompulsionLoop.Action_Trinket_CompulsionLoop_C.OnActionStart");

	UAction_Trinket_CompulsionLoop_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Trinket_CompulsionLoop.Action_Trinket_CompulsionLoop_C.ExecuteUbergraph_Action_Trinket_CompulsionLoop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Trinket_CompulsionLoop_C::ExecuteUbergraph_Action_Trinket_CompulsionLoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_CompulsionLoop.Action_Trinket_CompulsionLoop_C.ExecuteUbergraph_Action_Trinket_CompulsionLoop");

	UAction_Trinket_CompulsionLoop_C_ExecuteUbergraph_Action_Trinket_CompulsionLoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
