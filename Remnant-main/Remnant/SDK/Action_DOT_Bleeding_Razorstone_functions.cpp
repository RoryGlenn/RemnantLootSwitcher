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

// Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_DOT_Bleeding_Razorstone_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnReapplyBuff");

	UAction_DOT_Bleeding_Razorstone_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_DOT_Bleeding_Razorstone_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnActionStart");

	UAction_DOT_Bleeding_Razorstone_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.ExecuteUbergraph_Action_DOT_Bleeding_Razorstone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_DOT_Bleeding_Razorstone_C::ExecuteUbergraph_Action_DOT_Bleeding_Razorstone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.ExecuteUbergraph_Action_DOT_Bleeding_Razorstone");

	UAction_DOT_Bleeding_Razorstone_C_ExecuteUbergraph_Action_DOT_Bleeding_Razorstone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
