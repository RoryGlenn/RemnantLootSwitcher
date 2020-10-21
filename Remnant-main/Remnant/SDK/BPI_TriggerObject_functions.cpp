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

// Function BPI_TriggerObject.BPI_TriggerObject_C.SetTriggerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_TriggerObject_C::SetTriggerState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TriggerObject.BPI_TriggerObject_C.SetTriggerState");

	UBPI_TriggerObject_C_SetTriggerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
