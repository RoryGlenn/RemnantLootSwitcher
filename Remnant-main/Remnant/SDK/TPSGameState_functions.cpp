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

// Function TPSGameState.TPSGameState_C.UpdateTimePlayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATPSGameState_C::UpdateTimePlayed(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.UpdateTimePlayed");

	ATPSGameState_C_UpdateTimePlayed_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TPSGameState.TPSGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATPSGameState_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.ReceiveTick");

	ATPSGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TPSGameState.TPSGameState_C.BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EMusicIntensity                Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATPSGameState_C::BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature(EMusicIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature");

	ATPSGameState_C_BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TPSGameState.TPSGameState_C.ExecuteUbergraph_TPSGameState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATPSGameState_C::ExecuteUbergraph_TPSGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.ExecuteUbergraph_TPSGameState");

	ATPSGameState_C_ExecuteUbergraph_TPSGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
