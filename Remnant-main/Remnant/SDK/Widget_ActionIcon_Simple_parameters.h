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

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.SetBarStyle
struct UWidget_ActionIcon_Simple_C_SetBarStyle_Params
{
	class UObject*                                     Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.SetStacks
struct UWidget_ActionIcon_Simple_C_SetStacks_Params
{
	int                                                Stacks;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.DrawStacks
struct UWidget_ActionIcon_Simple_C_DrawStacks_Params
{
};

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.Construct
struct UWidget_ActionIcon_Simple_C_Construct_Params
{
};

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.Tick
struct UWidget_ActionIcon_Simple_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.ExecuteUbergraph_Widget_ActionIcon_Simple
struct UWidget_ActionIcon_Simple_C_ExecuteUbergraph_Widget_ActionIcon_Simple_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
