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

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ClearSpawnPositionStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Multispawn_Waypoint_C::ClearSpawnPositionStatus(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ClearSpawnPositionStatus");

	ABP_Multispawn_Waypoint_C_ClearSpawnPositionStatus_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.GetAvailableSpawnTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_Multispawn_Waypoint_C::GetAvailableSpawnTransform(class AActor* Actor, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.GetAvailableSpawnTransform");

	ABP_Multispawn_Waypoint_C_GetAvailableSpawnTransform_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Multispawn_Waypoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.UserConstructionScript");

	ABP_Multispawn_Waypoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Multispawn_Waypoint_C::Finished(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.Finished");

	ABP_Multispawn_Waypoint_C_Finished_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ClientShowCharacterSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Multispawn_Waypoint_C::ClientShowCharacterSwap(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ClientShowCharacterSwap");

	ABP_Multispawn_Waypoint_C_ClientShowCharacterSwap_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.EvemtClosedCharacterSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Multispawn_Waypoint_C::EvemtClosedCharacterSelect(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.EvemtClosedCharacterSelect");

	ABP_Multispawn_Waypoint_C_EvemtClosedCharacterSelect_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.EventPossessedBy_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Multispawn_Waypoint_C::EventPossessedBy_Event_1(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.EventPossessedBy_Event_1");

	ABP_Multispawn_Waypoint_C_EventPossessedBy_Event_1_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Multispawn_Waypoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ReceiveBeginPlay");

	ABP_Multispawn_Waypoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ExecuteUbergraph_BP_Multispawn_Waypoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Multispawn_Waypoint_C::ExecuteUbergraph_BP_Multispawn_Waypoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ExecuteUbergraph_BP_Multispawn_Waypoint");

	ABP_Multispawn_Waypoint_C_ExecuteUbergraph_BP_Multispawn_Waypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
