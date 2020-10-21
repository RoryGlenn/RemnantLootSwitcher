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

// Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.GetSpawnPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASpawnPoint_Emerge_Pipes_C::GetSpawnPosition(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.GetSpawnPosition");

	ASpawnPoint_Emerge_Pipes_C_GetSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.OnLoaded_A7285A1749F52692FA8C46B1C5236273
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Pipes_C::OnLoaded_A7285A1749F52692FA8C46B1C5236273(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.OnLoaded_A7285A1749F52692FA8C46B1C5236273");

	ASpawnPoint_Emerge_Pipes_C_OnLoaded_A7285A1749F52692FA8C46B1C5236273_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpawnPoint_Emerge_Pipes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.ReceiveBeginPlay");

	ASpawnPoint_Emerge_Pipes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.OnPostSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Pipes_C::OnPostSpawn(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.OnPostSpawn");

	ASpawnPoint_Emerge_Pipes_C_OnPostSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.ExecuteUbergraph_SpawnPoint_Emerge_Pipes
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Pipes_C::ExecuteUbergraph_SpawnPoint_Emerge_Pipes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.ExecuteUbergraph_SpawnPoint_Emerge_Pipes");

	ASpawnPoint_Emerge_Pipes_C_ExecuteUbergraph_SpawnPoint_Emerge_Pipes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
