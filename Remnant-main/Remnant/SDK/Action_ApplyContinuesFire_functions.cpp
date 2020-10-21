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

// Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_ApplyContinuesFire_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.OnActionStart");

	UAction_ApplyContinuesFire_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void UAction_ApplyContinuesFire_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.CustomEvent_1");

	UAction_ApplyContinuesFire_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_ApplyContinuesFire_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.OnActionStop");

	UAction_ApplyContinuesFire_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.ExecuteUbergraph_Action_ApplyContinuesFire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ApplyContinuesFire_C::ExecuteUbergraph_Action_ApplyContinuesFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyContinuesFire.Action_ApplyContinuesFire_C.ExecuteUbergraph_Action_ApplyContinuesFire");

	UAction_ApplyContinuesFire_C_ExecuteUbergraph_Action_ApplyContinuesFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
