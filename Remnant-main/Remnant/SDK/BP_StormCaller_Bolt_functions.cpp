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

// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Snap to Ceiling and floor
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_StormCaller_Bolt_C::Snap_to_Ceiling_and_floor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Snap to Ceiling and floor");

	ABP_StormCaller_Bolt_C_Snap_to_Ceiling_and_floor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Floor Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_StormCaller_Bolt_C::Floor_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Floor Check");

	ABP_StormCaller_Bolt_C_Floor_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Ceiling Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_StormCaller_Bolt_C::Ceiling_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Ceiling Check");

	ABP_StormCaller_Bolt_C_Ceiling_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlaySpawnFX
// (BlueprintCallable, BlueprintEvent)
void ABP_StormCaller_Bolt_C::PlaySpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlaySpawnFX");

	ABP_StormCaller_Bolt_C_PlaySpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlayStrikeFX
// (BlueprintCallable, BlueprintEvent)
void ABP_StormCaller_Bolt_C::PlayStrikeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlayStrikeFX");

	ABP_StormCaller_Bolt_C_PlayStrikeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_StormCaller_Bolt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ReceiveBeginPlay");

	ABP_StormCaller_Bolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ExecuteUbergraph_BP_StormCaller_Bolt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StormCaller_Bolt_C::ExecuteUbergraph_BP_StormCaller_Bolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ExecuteUbergraph_BP_StormCaller_Bolt");

	ABP_StormCaller_Bolt_C_ExecuteUbergraph_BP_StormCaller_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
