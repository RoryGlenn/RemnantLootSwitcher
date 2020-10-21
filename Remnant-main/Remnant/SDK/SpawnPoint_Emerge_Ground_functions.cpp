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

// Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpawnPoint_Emerge_Ground_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ReceiveBeginPlay");

	ASpawnPoint_Emerge_Ground_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ExecuteUbergraph_SpawnPoint_Emerge_Ground
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Ground_C::ExecuteUbergraph_SpawnPoint_Emerge_Ground(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ExecuteUbergraph_SpawnPoint_Emerge_Ground");

	ASpawnPoint_Emerge_Ground_C_ExecuteUbergraph_SpawnPoint_Emerge_Ground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
