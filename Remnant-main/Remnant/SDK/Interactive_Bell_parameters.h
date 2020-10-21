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

// Function Interactive_Bell.Interactive_Bell_C.MulticastRingBell
struct AInteractive_Bell_C_MulticastRingBell_Params
{
	struct FVector                                     Source;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Bell.Interactive_Bell_C.OnNotifyTakeDamage
struct AInteractive_Bell_C_OnNotifyTakeDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Interactive_Bell.Interactive_Bell_C.RingBell
struct AInteractive_Bell_C_RingBell_Params
{
};

// Function Interactive_Bell.Interactive_Bell_C.ExecuteUbergraph_Interactive_Bell
struct AInteractive_Bell_C_ExecuteUbergraph_Interactive_Bell_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Bell.Interactive_Bell_C.OnRingBell__DelegateSignature
struct AInteractive_Bell_C_OnRingBell__DelegateSignature_Params
{
	class UClass*                                      Note;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
