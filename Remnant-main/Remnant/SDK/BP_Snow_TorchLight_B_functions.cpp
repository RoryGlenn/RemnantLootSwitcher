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

// Function BP_Snow_TorchLight_B.BP_Snow_TorchLight_B_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Snow_TorchLight_B_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_TorchLight_B.BP_Snow_TorchLight_B_C.ReceiveBeginPlay");

	ABP_Snow_TorchLight_B_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Snow_TorchLight_B.BP_Snow_TorchLight_B_C.ExecuteUbergraph_BP_Snow_TorchLight_B
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Snow_TorchLight_B_C::ExecuteUbergraph_BP_Snow_TorchLight_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_TorchLight_B.BP_Snow_TorchLight_B_C.ExecuteUbergraph_BP_Snow_TorchLight_B");

	ABP_Snow_TorchLight_B_C_ExecuteUbergraph_BP_Snow_TorchLight_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
