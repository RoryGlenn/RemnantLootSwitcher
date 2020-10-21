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

// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.SetSpawnPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_SpawnPoint_C::SetSpawnPosition(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.SetSpawnPosition");

	AInteractive_Campfire_SpawnPoint_C_SetSpawnPosition_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.SetSpawnState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SpawnState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_SpawnPoint_C::SetSpawnState(class ACharacterGunfire* Character, const struct FName& SpawnState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.SetSpawnState");

	AInteractive_Campfire_SpawnPoint_C_SetSpawnState_Params params;
	params.Character = Character;
	params.SpawnState = SpawnState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.OnPreSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_SpawnPoint_C::OnPreSpawn(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.OnPreSpawn");

	AInteractive_Campfire_SpawnPoint_C_OnPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.PossessedBy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_SpawnPoint_C::PossessedBy(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.PossessedBy");

	AInteractive_Campfire_SpawnPoint_C_PossessedBy_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.ExecuteUbergraph_Interactive_Campfire_SpawnPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_SpawnPoint_C::ExecuteUbergraph_Interactive_Campfire_SpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C.ExecuteUbergraph_Interactive_Campfire_SpawnPoint");

	AInteractive_Campfire_SpawnPoint_C_ExecuteUbergraph_Interactive_Campfire_SpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
