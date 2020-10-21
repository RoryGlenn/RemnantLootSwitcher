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

// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Refresh
struct UWidget_ItemStatCustomCentered_C_Refresh_Params
{
};

// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Construct
struct UWidget_ItemStatCustomCentered_C_Construct_Params
{
};

// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Init
struct UWidget_ItemStatCustomCentered_C_Init_Params
{
	struct FInspectStat                                Stat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Comparing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat                                CompareStat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo                                InspectInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.ExecuteUbergraph_Widget_ItemStatCustomCentered
struct UWidget_ItemStatCustomCentered_C_ExecuteUbergraph_Widget_ItemStatCustomCentered_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
