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

// Function BP_Snow_Bonfire_A.BP_Snow_Bonfire_A_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Snow_Bonfire_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Bonfire_A.BP_Snow_Bonfire_A_C.UserConstructionScript");

	ABP_Snow_Bonfire_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Snow_Bonfire_A.BP_Snow_Bonfire_A_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Snow_Bonfire_A_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Bonfire_A.BP_Snow_Bonfire_A_C.ReceiveBeginPlay");

	ABP_Snow_Bonfire_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Snow_Bonfire_A.BP_Snow_Bonfire_A_C.ExecuteUbergraph_BP_Snow_Bonfire_A
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Snow_Bonfire_A_C::ExecuteUbergraph_BP_Snow_Bonfire_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snow_Bonfire_A.BP_Snow_Bonfire_A_C.ExecuteUbergraph_BP_Snow_Bonfire_A");

	ABP_Snow_Bonfire_A_C_ExecuteUbergraph_BP_Snow_Bonfire_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif