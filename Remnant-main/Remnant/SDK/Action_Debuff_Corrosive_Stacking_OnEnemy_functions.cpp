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

// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.FilterIncomingDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Debuff_Corrosive_Stacking_OnEnemy_C::FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.FilterIncomingDamage");

	UAction_Debuff_Corrosive_Stacking_OnEnemy_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;

}


// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Corrosive_Stacking_OnEnemy_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.OnActionStart");

	UAction_Debuff_Corrosive_Stacking_OnEnemy_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Debuff_Corrosive_Stacking_OnEnemy_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.OnReapplyBuff");

	UAction_Debuff_Corrosive_Stacking_OnEnemy_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Debuff_Corrosive_Stacking_OnEnemy_C::ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy");

	UAction_Debuff_Corrosive_Stacking_OnEnemy_C_ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
