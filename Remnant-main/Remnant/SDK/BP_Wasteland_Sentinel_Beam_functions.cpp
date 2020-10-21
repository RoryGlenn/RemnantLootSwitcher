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

// Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Wasteland_Sentinel_Beam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ReceiveBeginPlay");

	ABP_Wasteland_Sentinel_Beam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ExecuteUbergraph_BP_Wasteland_Sentinel_Beam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wasteland_Sentinel_Beam_C::ExecuteUbergraph_BP_Wasteland_Sentinel_Beam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ExecuteUbergraph_BP_Wasteland_Sentinel_Beam");

	ABP_Wasteland_Sentinel_Beam_C_ExecuteUbergraph_BP_Wasteland_Sentinel_Beam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
