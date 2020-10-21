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

// Function Dialog_Base.Dialog_Base_C.ToggleInputMode
struct ADialog_Base_C_ToggleInputMode_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dialog_Base.Dialog_Base_C.UpdateMouse
struct ADialog_Base_C_UpdateMouse_Params
{
};

// Function Dialog_Base.Dialog_Base_C.OnInputDeviceChanged
struct ADialog_Base_C_OnInputDeviceChanged_Params
{
	int                                                ControllerId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputDevice                                       CurrentInputDevice;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Base.Dialog_Base_C.ExecuteUbergraph_Dialog_Base
struct ADialog_Base_C_ExecuteUbergraph_Dialog_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
