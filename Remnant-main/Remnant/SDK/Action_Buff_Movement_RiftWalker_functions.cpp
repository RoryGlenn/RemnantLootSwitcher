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

// Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Buff_Movement_RiftWalker_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnComputeStats");

	UAction_Buff_Movement_RiftWalker_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Buff_Movement_RiftWalker_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnActionStart");

	UAction_Buff_Movement_RiftWalker_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.ExecuteUbergraph_Action_Buff_Movement_RiftWalker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Buff_Movement_RiftWalker_C::ExecuteUbergraph_Action_Buff_Movement_RiftWalker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.ExecuteUbergraph_Action_Buff_Movement_RiftWalker");

	UAction_Buff_Movement_RiftWalker_C_ExecuteUbergraph_Action_Buff_Movement_RiftWalker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
