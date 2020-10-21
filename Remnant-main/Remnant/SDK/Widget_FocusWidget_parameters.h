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

// Function Widget_FocusWidget.Widget_FocusWidget_C.GetCrafting
struct UWidget_FocusWidget_C_GetCrafting_Params
{
	class UCraftingComponent*                          Crafting;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_FocusWidget.Widget_FocusWidget_C.GetInventory
struct UWidget_FocusWidget_C_GetInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_FocusWidget.Widget_FocusWidget_C.GetContextActor
struct UWidget_FocusWidget_C_GetContextActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
