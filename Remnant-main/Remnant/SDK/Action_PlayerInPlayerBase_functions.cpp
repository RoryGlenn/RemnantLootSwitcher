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

// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_PlayerInPlayerBase_C::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick");

	UAction_PlayerInPlayerBase_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_PlayerInPlayerBase_C::ExecuteUbergraph_Action_PlayerInPlayerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase");

	UAction_PlayerInPlayerBase_C_ExecuteUbergraph_Action_PlayerInPlayerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
