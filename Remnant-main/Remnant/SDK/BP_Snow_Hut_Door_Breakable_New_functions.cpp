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

// Function BP_Snow_Hut_Door_Breakable_New.BP_Snow_Hut_Door_Breakable_New_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBreakableComponent*     Breakable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Snow_Hut_Door_Breakable_New_C::BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature(class UBreakableComponent* Breakable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Hut_Door_Breakable_New.BP_Snow_Hut_Door_Breakable_New_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature");

	ABP_Snow_Hut_Door_Breakable_New_C_BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature_Params params;
	params.Breakable = Breakable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Snow_Hut_Door_Breakable_New.BP_Snow_Hut_Door_Breakable_New_C.ExecuteUbergraph_BP_Snow_Hut_Door_Breakable_New
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Snow_Hut_Door_Breakable_New_C::ExecuteUbergraph_BP_Snow_Hut_Door_Breakable_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Hut_Door_Breakable_New.BP_Snow_Hut_Door_Breakable_New_C.ExecuteUbergraph_BP_Snow_Hut_Door_Breakable_New");

	ABP_Snow_Hut_Door_Breakable_New_C_ExecuteUbergraph_BP_Snow_Hut_Door_Breakable_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
