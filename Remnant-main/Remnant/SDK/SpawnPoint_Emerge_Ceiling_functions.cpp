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

// Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.GetSpawnPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASpawnPoint_Emerge_Ceiling_C::GetSpawnPosition(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.GetSpawnPosition");

	ASpawnPoint_Emerge_Ceiling_C_GetSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASpawnPoint_Emerge_Ceiling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.UserConstructionScript");

	ASpawnPoint_Emerge_Ceiling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.OnLoaded_596A836F42791FF4BF25ABA79A061F6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Ceiling_C::OnLoaded_596A836F42791FF4BF25ABA79A061F6E(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.OnLoaded_596A836F42791FF4BF25ABA79A061F6E");

	ASpawnPoint_Emerge_Ceiling_C_OnLoaded_596A836F42791FF4BF25ABA79A061F6E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpawnPoint_Emerge_Ceiling_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.ReceiveBeginPlay");

	ASpawnPoint_Emerge_Ceiling_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.OnPostSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Ceiling_C::OnPostSpawn(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.OnPostSpawn");

	ASpawnPoint_Emerge_Ceiling_C_OnPostSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.ExecuteUbergraph_SpawnPoint_Emerge_Ceiling
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnPoint_Emerge_Ceiling_C::ExecuteUbergraph_SpawnPoint_Emerge_Ceiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ceiling.SpawnPoint_Emerge_Ceiling_C.ExecuteUbergraph_SpawnPoint_Emerge_Ceiling");

	ASpawnPoint_Emerge_Ceiling_C_ExecuteUbergraph_SpawnPoint_Emerge_Ceiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
