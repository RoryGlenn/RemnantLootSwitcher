#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function Widget_ZoneEntering.Widget_ZoneEntering_C.Show
struct UWidget_ZoneEntering_C_Show_Params
{
	struct FText                                       ZoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       WorldName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ZoneEntering.Widget_ZoneEntering_C.Construct
struct UWidget_ZoneEntering_C_Construct_Params
{
};

// Function Widget_ZoneEntering.Widget_ZoneEntering_C.Destruct
struct UWidget_ZoneEntering_C_Destruct_Params
{
};

// Function Widget_ZoneEntering.Widget_ZoneEntering_C.ExecuteUbergraph_Widget_ZoneEntering
struct UWidget_ZoneEntering_C_ExecuteUbergraph_Widget_ZoneEntering_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
