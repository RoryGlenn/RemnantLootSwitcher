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

// Function Widget_HealthBar.Widget_HealthBar_C.Init
struct UWidget_HealthBar_C_Init_Params
{
	class ACharacterGunfire*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HealthBar.Widget_HealthBar_C.Get_Health_Percent_1
struct UWidget_HealthBar_C_Get_Health_Percent_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HealthBar.Widget_HealthBar_C.OnTargetInvalid
struct UWidget_HealthBar_C_OnTargetInvalid_Params
{
};

// Function Widget_HealthBar.Widget_HealthBar_C.ExecuteUbergraph_Widget_HealthBar
struct UWidget_HealthBar_C_ExecuteUbergraph_Widget_HealthBar_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
