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

// Function BP_Snow_Campfire_Interior.BP_Snow_Campfire_Interior_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Snow_Campfire_Interior_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Campfire_Interior.BP_Snow_Campfire_Interior_C.ReceiveBeginPlay");

	ABP_Snow_Campfire_Interior_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Snow_Campfire_Interior.BP_Snow_Campfire_Interior_C.ExecuteUbergraph_BP_Snow_Campfire_Interior
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Snow_Campfire_Interior_C::ExecuteUbergraph_BP_Snow_Campfire_Interior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Campfire_Interior.BP_Snow_Campfire_Interior_C.ExecuteUbergraph_BP_Snow_Campfire_Interior");

	ABP_Snow_Campfire_Interior_C_ExecuteUbergraph_BP_Snow_Campfire_Interior_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
