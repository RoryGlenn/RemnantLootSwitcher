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

// Function BP_Snow_WoodenStair_Spline.BP_Snow_WoodenStair_Spline_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Snow_WoodenStair_Spline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_WoodenStair_Spline.BP_Snow_WoodenStair_Spline_C.UserConstructionScript");

	ABP_Snow_WoodenStair_Spline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
