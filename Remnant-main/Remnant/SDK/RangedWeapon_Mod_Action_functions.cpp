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

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARangedWeapon_Mod_Action_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ModifyDamage");

	ARangedWeapon_Mod_Action_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent*        ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARangedWeapon_Mod_Action_C::DoAction(class UActionComponent* ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoAction");

	ARangedWeapon_Mod_Action_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnActivate
// (Event, Public, BlueprintEvent)
void ARangedWeapon_Mod_Action_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnActivate");

	ARangedWeapon_Mod_Action_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnStartCustomIdle
// (Event, Public, BlueprintEvent)
void ARangedWeapon_Mod_Action_C::OnStartCustomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnStartCustomIdle");

	ARangedWeapon_Mod_Action_C_OnStartCustomIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnEndCustomIdle
// (Event, Public, BlueprintEvent)
void ARangedWeapon_Mod_Action_C::OnEndCustomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnEndCustomIdle");

	ARangedWeapon_Mod_Action_C_OnEndCustomIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnDetached
// (Event, Public, BlueprintEvent)
void ARangedWeapon_Mod_Action_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnDetached");

	ARangedWeapon_Mod_Action_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoBlowback
// (BlueprintCallable, BlueprintEvent)
void ARangedWeapon_Mod_Action_C::DoBlowback()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoBlowback");

	ARangedWeapon_Mod_Action_C_DoBlowback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ExecuteUbergraph_RangedWeapon_Mod_Action
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARangedWeapon_Mod_Action_C::ExecuteUbergraph_RangedWeapon_Mod_Action(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ExecuteUbergraph_RangedWeapon_Mod_Action");

	ARangedWeapon_Mod_Action_C_ExecuteUbergraph_RangedWeapon_Mod_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
