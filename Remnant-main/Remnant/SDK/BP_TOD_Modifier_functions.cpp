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

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetColorScheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Scheme                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_TOD_Modifier_C::SetColorScheme(const struct FString& Scheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetColorScheme");

	ABP_TOD_Modifier_C_SetColorScheme_Params params;
	params.Scheme = Scheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TOD_Modifier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.ReceiveBeginPlay");

	ABP_TOD_Modifier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.OnRegionEnter
// (Event, Public, BlueprintEvent)
void ABP_TOD_Modifier_C::OnRegionEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.OnRegionEnter");

	ABP_TOD_Modifier_C_OnRegionEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.Update
// (BlueprintCallable, BlueprintEvent)
void ABP_TOD_Modifier_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.Update");

	ABP_TOD_Modifier_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_TOD_Modifier_C::SetLabSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky");

	ABP_TOD_Modifier_C_SetLabSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky_MC
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_TOD_Modifier_C::SetLabSky_MC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky_MC");

	ABP_TOD_Modifier_C_SetLabSky_MC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.ExecuteUbergraph_BP_TOD_Modifier
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TOD_Modifier_C::ExecuteUbergraph_BP_TOD_Modifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.ExecuteUbergraph_BP_TOD_Modifier");

	ABP_TOD_Modifier_C_ExecuteUbergraph_BP_TOD_Modifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
