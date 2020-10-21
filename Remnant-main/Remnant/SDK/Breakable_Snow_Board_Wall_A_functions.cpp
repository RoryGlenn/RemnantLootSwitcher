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

// Function Breakable_Snow_Board_Wall_A.Breakable_Snow_Board_Wall_A_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBreakableComponent*     Breakable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABreakable_Snow_Board_Wall_A_C::BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature(class UBreakableComponent* Breakable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breakable_Snow_Board_Wall_A.Breakable_Snow_Board_Wall_A_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature");

	ABreakable_Snow_Board_Wall_A_C_BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature_Params params;
	params.Breakable = Breakable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Breakable_Snow_Board_Wall_A.Breakable_Snow_Board_Wall_A_C.ExecuteUbergraph_Breakable_Snow_Board_Wall_A
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABreakable_Snow_Board_Wall_A_C::ExecuteUbergraph_Breakable_Snow_Board_Wall_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Breakable_Snow_Board_Wall_A.Breakable_Snow_Board_Wall_A_C.ExecuteUbergraph_Breakable_Snow_Board_Wall_A");

	ABreakable_Snow_Board_Wall_A_C_ExecuteUbergraph_Breakable_Snow_Board_Wall_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
