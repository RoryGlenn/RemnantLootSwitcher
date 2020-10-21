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

// Function BP_FogVolume.BP_FogVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FogVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.UserConstructionScript");

	ABP_FogVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FogVolume.BP_FogVolume_C.Changeopacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FogVolume_C::Changeopacity(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.Changeopacity");

	ABP_FogVolume_C_Changeopacity_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FogVolume.BP_FogVolume_C.UpdateFogVolumeOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          from                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FogVolume_C::UpdateFogVolumeOpacity(float from, float to, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.UpdateFogVolumeOpacity");

	ABP_FogVolume_C_UpdateFogVolumeOpacity_Params params;
	params.from = from;
	params.to = to;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FogVolume.BP_FogVolume_C.ExecuteUbergraph_BP_FogVolume
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FogVolume_C::ExecuteUbergraph_BP_FogVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.ExecuteUbergraph_BP_FogVolume");

	ABP_FogVolume_C_ExecuteUbergraph_BP_FogVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
