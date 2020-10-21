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

// Function Resource_TraitBook.Resource_TraitBook_C.PreAdd
struct AResource_TraitBook_C_PreAdd_Params
{
	class UInventoryComponent*                         Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Resource_TraitBook.Resource_TraitBook_C.OnPickedUp
struct AResource_TraitBook_C_OnPickedUp_Params
{
};

// Function Resource_TraitBook.Resource_TraitBook_C.ExecuteUbergraph_Resource_TraitBook
struct AResource_TraitBook_C_ExecuteUbergraph_Resource_TraitBook_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
