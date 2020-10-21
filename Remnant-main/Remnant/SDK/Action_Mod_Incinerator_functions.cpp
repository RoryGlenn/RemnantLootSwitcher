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

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ApplyFireDOTStacking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Incinerator_C::ApplyFireDOTStacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ApplyFireDOTStacking");

	UAction_Mod_Incinerator_C_ApplyFireDOTStacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.GetWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Incinerator_C::GetWeapon(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.GetWeapon");

	UAction_Mod_Incinerator_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.GetDamageCause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Incinerator_C::GetDamageCause(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.GetDamageCause");

	UAction_Mod_Incinerator_C_GetDamageCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ReadValues
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Incinerator_C::ReadValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ReadValues");

	UAction_Mod_Incinerator_C_ReadValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_Incinerator_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.OnActionStart");

	UAction_Mod_Incinerator_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ExecuteUbergraph_Action_Mod_Incinerator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Incinerator_C::ExecuteUbergraph_Action_Mod_Incinerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ExecuteUbergraph_Action_Mod_Incinerator");

	UAction_Mod_Incinerator_C_ExecuteUbergraph_Action_Mod_Incinerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
