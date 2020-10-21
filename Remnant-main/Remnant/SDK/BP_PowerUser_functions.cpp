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

// Function BP_PowerUser.BP_PowerUser_C.Animate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PowerUser_C::Animate(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.Animate");

	UBP_PowerUser_C_Animate_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.InitializeComponents
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_PowerUser_C::InitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.InitializeComponents");

	UBP_PowerUser_C_InitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.GetPowerSource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PowerSource_C*       Source                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PowerUser_C::GetPowerSource(class ABP_PowerSource_C** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.GetPowerSource");

	UBP_PowerUser_C_GetPowerSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;

}


// Function BP_PowerUser.BP_PowerUser_C.IsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PowerUser_C::IsEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.IsEnabled");

	UBP_PowerUser_C_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;

}


// Function BP_PowerUser.BP_PowerUser_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_PowerUser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.ReceiveBeginPlay");

	UBP_PowerUser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.OnPowerSourceEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PowerUser_C::OnPowerSourceEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.OnPowerSourceEnabled");

	UBP_PowerUser_C_OnPowerSourceEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.AnimateOn
// (BlueprintCallable, BlueprintEvent)
void UBP_PowerUser_C::AnimateOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.AnimateOn");

	UBP_PowerUser_C_AnimateOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.AnimateOff
// (BlueprintCallable, BlueprintEvent)
void UBP_PowerUser_C::AnimateOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.AnimateOff");

	UBP_PowerUser_C_AnimateOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PowerUser_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.ReceiveTick");

	UBP_PowerUser_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.ExecuteUbergraph_BP_PowerUser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PowerUser_C::ExecuteUbergraph_BP_PowerUser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.ExecuteUbergraph_BP_PowerUser");

	UBP_PowerUser_C_ExecuteUbergraph_BP_PowerUser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerUser.BP_PowerUser_C.OnEnabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PowerUser_C::OnEnabled__DelegateSignature(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerUser.BP_PowerUser_C.OnEnabled__DelegateSignature");

	UBP_PowerUser_C_OnEnabled__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
