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

// Function BP_ImpactVisualization_Base_NonFireMode.BP_ImpactVisualization_Base_NonFireMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ImpactVisualization_Base_NonFireMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactVisualization_Base_NonFireMode.BP_ImpactVisualization_Base_NonFireMode_C.ReceiveBeginPlay");

	ABP_ImpactVisualization_Base_NonFireMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ImpactVisualization_Base_NonFireMode.BP_ImpactVisualization_Base_NonFireMode_C.ExecuteUbergraph_BP_ImpactVisualization_Base_NonFireMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ImpactVisualization_Base_NonFireMode_C::ExecuteUbergraph_BP_ImpactVisualization_Base_NonFireMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactVisualization_Base_NonFireMode.BP_ImpactVisualization_Base_NonFireMode_C.ExecuteUbergraph_BP_ImpactVisualization_Base_NonFireMode");

	ABP_ImpactVisualization_Base_NonFireMode_C_ExecuteUbergraph_BP_ImpactVisualization_Base_NonFireMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
