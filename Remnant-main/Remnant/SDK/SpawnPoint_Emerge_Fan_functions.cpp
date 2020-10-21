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

// Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.GetSpawnPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASpawnPoint_Emerge_Fan_C::GetSpawnPosition(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.GetSpawnPosition");

	ASpawnPoint_Emerge_Fan_C_GetSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.OnLoaded_4028500A413E5D0EC481B0897E462643
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Fan_C::OnLoaded_4028500A413E5D0EC481B0897E462643(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.OnLoaded_4028500A413E5D0EC481B0897E462643");

	ASpawnPoint_Emerge_Fan_C_OnLoaded_4028500A413E5D0EC481B0897E462643_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpawnPoint_Emerge_Fan_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.ReceiveBeginPlay");

	ASpawnPoint_Emerge_Fan_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.OnPostSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Fan_C::OnPostSpawn(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.OnPostSpawn");

	ASpawnPoint_Emerge_Fan_C_OnPostSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.ExecuteUbergraph_SpawnPoint_Emerge_Fan
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Fan_C::ExecuteUbergraph_SpawnPoint_Emerge_Fan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Fan.SpawnPoint_Emerge_Fan_C.ExecuteUbergraph_SpawnPoint_Emerge_Fan");

	ASpawnPoint_Emerge_Fan_C_ExecuteUbergraph_SpawnPoint_Emerge_Fan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
