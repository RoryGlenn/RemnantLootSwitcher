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

// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.CalcMoveToDestination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Blizzard_StormCloud_C::CalcMoveToDestination(struct FVector* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.CalcMoveToDestination");

	AMod_Blizzard_StormCloud_C_CalcMoveToDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

}


// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.GetRandomPointInCircle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AMod_Blizzard_StormCloud_C::GetRandomPointInCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.GetRandomPointInCircle");

	AMod_Blizzard_StormCloud_C_GetRandomPointInCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_Blizzard_StormCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.ReceiveBeginPlay");

	AMod_Blizzard_StormCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.StartFX
// (BlueprintCallable, BlueprintEvent)
void AMod_Blizzard_StormCloud_C::StartFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.StartFX");

	AMod_Blizzard_StormCloud_C_StartFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.DoRain
// (BlueprintCallable, BlueprintEvent)
void AMod_Blizzard_StormCloud_C::DoRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.DoRain");

	AMod_Blizzard_StormCloud_C_DoRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.StopFX
// (BlueprintCallable, BlueprintEvent)
void AMod_Blizzard_StormCloud_C::StopFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.StopFX");

	AMod_Blizzard_StormCloud_C_StopFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.ExecuteUbergraph_Mod_Blizzard_StormCloud
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Blizzard_StormCloud_C::ExecuteUbergraph_Mod_Blizzard_StormCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C.ExecuteUbergraph_Mod_Blizzard_StormCloud");

	AMod_Blizzard_StormCloud_C_ExecuteUbergraph_Mod_Blizzard_StormCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
