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
// Functions
//---------------------------------------------------------------------------

// Function SpawnPoint_Item.SpawnPoint_Item_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpawnPoint_Item_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Item.SpawnPoint_Item_C.ReceiveBeginPlay");

	ASpawnPoint_Item_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Item.SpawnPoint_Item_C.ExecuteUbergraph_SpawnPoint_Item
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Item_C::ExecuteUbergraph_SpawnPoint_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Item.SpawnPoint_Item_C.ExecuteUbergraph_SpawnPoint_Item");

	ASpawnPoint_Item_C_ExecuteUbergraph_SpawnPoint_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
