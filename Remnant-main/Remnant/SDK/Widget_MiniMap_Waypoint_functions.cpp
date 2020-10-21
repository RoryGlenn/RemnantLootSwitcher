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

// Function Widget_MiniMap_Waypoint.Widget_MiniMap_Waypoint_C.UpdateMiniMapWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetTransform        InTransform                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FWidgetTransform        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor)
struct FWidgetTransform UWidget_MiniMap_Waypoint_C::UpdateMiniMapWidget(const struct FWidgetTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Waypoint.Widget_MiniMap_Waypoint_C.UpdateMiniMapWidget");

	UWidget_MiniMap_Waypoint_C_UpdateMiniMapWidget_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
