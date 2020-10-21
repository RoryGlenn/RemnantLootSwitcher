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

// Function Action_list.Action_List_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_List_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_list.Action_List_C.OnActionStart");

	UAction_List_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_list.Action_List_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_List_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_list.Action_List_C.OnActionStop");

	UAction_List_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_list.Action_List_C.ExecuteUbergraph_Action_List
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_List_C::ExecuteUbergraph_Action_List(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_list.Action_List_C.ExecuteUbergraph_Action_List");

	UAction_List_C_ExecuteUbergraph_Action_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
