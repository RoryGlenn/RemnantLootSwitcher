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

// Function Interactive_Waypoint_AnimBP.Interactive_Waypoint_AnimBP_C.ExecuteUbergraph_Interactive_Waypoint_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractive_Waypoint_AnimBP_C::ExecuteUbergraph_Interactive_Waypoint_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint_AnimBP.Interactive_Waypoint_AnimBP_C.ExecuteUbergraph_Interactive_Waypoint_AnimBP");

	UInteractive_Waypoint_AnimBP_C_ExecuteUbergraph_Interactive_Waypoint_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
