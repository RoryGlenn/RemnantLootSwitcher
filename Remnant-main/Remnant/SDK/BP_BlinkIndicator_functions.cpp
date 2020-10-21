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

// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BlinkIndicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveBeginPlay");

	ABP_BlinkIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BlinkIndicator_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveEndPlay");

	ABP_BlinkIndicator_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ExecuteUbergraph_BP_BlinkIndicator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BlinkIndicator_C::ExecuteUbergraph_BP_BlinkIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlinkIndicator.BP_BlinkIndicator_C.ExecuteUbergraph_BP_BlinkIndicator");

	ABP_BlinkIndicator_C_ExecuteUbergraph_BP_BlinkIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
