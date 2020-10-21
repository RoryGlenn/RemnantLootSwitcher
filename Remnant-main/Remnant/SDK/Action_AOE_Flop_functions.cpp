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

// Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamageScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Flop_C::GetDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamageScalar");

	UAction_AOE_Flop_C_GetDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;

}


// Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Flop_C::GetDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamage");

	UAction_AOE_Flop_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;

}


// Function Action_AOE_Flop.Action_AOE_Flop_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_AOE_Flop_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.OnActionStart");

	UAction_AOE_Flop_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Flop.Action_AOE_Flop_C.ExecuteUbergraph_Action_AOE_Flop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Flop_C::ExecuteUbergraph_Action_AOE_Flop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.ExecuteUbergraph_Action_AOE_Flop");

	UAction_AOE_Flop_C_ExecuteUbergraph_Action_AOE_Flop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
