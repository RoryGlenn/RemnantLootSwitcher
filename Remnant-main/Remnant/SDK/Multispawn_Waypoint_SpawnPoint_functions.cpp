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

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMultispawn_Waypoint_SpawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ReceiveBeginPlay");

	AMultispawn_Waypoint_SpawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.OnPostSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultispawn_Waypoint_SpawnPoint_C::OnPostSpawn(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.OnPostSpawn");

	AMultispawn_Waypoint_SpawnPoint_C_OnPostSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.PossessedBy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultispawn_Waypoint_SpawnPoint_C::PossessedBy(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.PossessedBy");

	AMultispawn_Waypoint_SpawnPoint_C_PossessedBy_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.StartPreSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultispawn_Waypoint_SpawnPoint_C::StartPreSpawn(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.StartPreSpawn");

	AMultispawn_Waypoint_SpawnPoint_C_StartPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultispawn_Waypoint_SpawnPoint_C::ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint");

	AMultispawn_Waypoint_SpawnPoint_C_ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.EventPossessedBy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMultispawn_Waypoint_SpawnPoint_C::EventPossessedBy__DelegateSignature(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.EventPossessedBy__DelegateSignature");

	AMultispawn_Waypoint_SpawnPoint_C_EventPossessedBy__DelegateSignature_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
