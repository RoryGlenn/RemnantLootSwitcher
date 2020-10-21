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

// Function Widget_KeyIcon.Widget_KeyIcon_C.GetInputActionName
struct UWidget_KeyIcon_C_GetInputActionName_Params
{
	struct FString                                     InputActionName;                                           // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_KeyIcon.Widget_KeyIcon_C.ModifyKeyName
struct UWidget_KeyIcon_C_ModifyKeyName_Params
{
	struct FString                                     KeyName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Result;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_KeyIcon.Widget_KeyIcon_C.SetActionText
struct UWidget_KeyIcon_C_SetActionText_Params
{
	struct FString                                     ActionKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_KeyIcon.Widget_KeyIcon_C.ExecuteUbergraph_Widget_KeyIcon
struct UWidget_KeyIcon_C_ExecuteUbergraph_Widget_KeyIcon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
