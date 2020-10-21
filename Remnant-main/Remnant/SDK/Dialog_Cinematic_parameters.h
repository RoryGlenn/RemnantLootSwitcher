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

// Function Dialog_Cinematic.Dialog_Cinematic_C.SetContext
struct ADialog_Cinematic_C_SetContext_Params
{
	class ULevelSequence*                              Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Cinematic.Dialog_Cinematic_C.OnEndDialog
struct ADialog_Cinematic_C_OnEndDialog_Params
{
};

// Function Dialog_Cinematic.Dialog_Cinematic_C.ExecuteUbergraph_Dialog_Cinematic
struct ADialog_Cinematic_C_ExecuteUbergraph_Dialog_Cinematic_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
