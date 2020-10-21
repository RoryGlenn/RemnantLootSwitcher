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

// Function BP_Decal.BP_Decal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Decal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal.BP_Decal_C.UserConstructionScript");

	ABP_Decal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Decal.BP_Decal_C.UpdateSortOrder
// (BlueprintCallable, BlueprintEvent)
void ABP_Decal_C::UpdateSortOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal.BP_Decal_C.UpdateSortOrder");

	ABP_Decal_C_UpdateSortOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Decal.BP_Decal_C.ExecuteUbergraph_BP_Decal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Decal_C::ExecuteUbergraph_BP_Decal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal.BP_Decal_C.ExecuteUbergraph_BP_Decal");

	ABP_Decal_C_ExecuteUbergraph_BP_Decal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
