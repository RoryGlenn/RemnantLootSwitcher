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

// Function MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C.ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMiniMap_Remnant_TemporaryWaypoint_C::ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C.ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint");

	UMiniMap_Remnant_TemporaryWaypoint_C_ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
