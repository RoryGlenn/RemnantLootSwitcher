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

// Function Tracer_Ruin.Tracer_Ruin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATracer_Ruin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Ruin.Tracer_Ruin_C.ReceiveBeginPlay");

	ATracer_Ruin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracer_Ruin.Tracer_Ruin_C.ExecuteUbergraph_Tracer_Ruin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATracer_Ruin_C::ExecuteUbergraph_Tracer_Ruin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Ruin.Tracer_Ruin_C.ExecuteUbergraph_Tracer_Ruin");

	ATracer_Ruin_C_ExecuteUbergraph_Tracer_Ruin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
