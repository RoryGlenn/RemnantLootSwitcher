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

// Function BP_HealthBar.BP_HealthBar_C.GetTargetHeightAndRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HealthBar_C::GetTargetHeightAndRadius(float* Height, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealthBar.BP_HealthBar_C.GetTargetHeightAndRadius");

	ABP_HealthBar_C_GetTargetHeightAndRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
	if (Radius != nullptr)
		*Radius = params.Radius;

}


// Function BP_HealthBar.BP_HealthBar_C.DestroyHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HealthBar_C::DestroyHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealthBar.BP_HealthBar_C.DestroyHealthBar");

	ABP_HealthBar_C_DestroyHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HealthBar.BP_HealthBar_C.UpdateTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_HealthBar_C::UpdateTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealthBar.BP_HealthBar_C.UpdateTransform");

	ABP_HealthBar_C_UpdateTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HealthBar.BP_HealthBar_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HealthBar_C::Init(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealthBar.BP_HealthBar_C.Init");

	ABP_HealthBar_C_Init_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HealthBar.BP_HealthBar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HealthBar_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealthBar.BP_HealthBar_C.ReceiveTick");

	ABP_HealthBar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HealthBar.BP_HealthBar_C.ExecuteUbergraph_BP_HealthBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HealthBar_C::ExecuteUbergraph_BP_HealthBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealthBar.BP_HealthBar_C.ExecuteUbergraph_BP_HealthBar");

	ABP_HealthBar_C_ExecuteUbergraph_BP_HealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
