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

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.AllowAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo             InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAction_Debuff_Frostbite_Stacking_OnEnemy_C::AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.AllowAction");

	UAction_Debuff_Frostbite_Stacking_OnEnemy_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Frostbite_Stacking_OnEnemy_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnActionStart");

	UAction_Debuff_Frostbite_Stacking_OnEnemy_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Debuff_Frostbite_Stacking_OnEnemy_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnActionStop");

	UAction_Debuff_Frostbite_Stacking_OnEnemy_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Debuff_Frostbite_Stacking_OnEnemy_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnReapplyBuff");

	UAction_Debuff_Frostbite_Stacking_OnEnemy_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.SFX_Frost_Bite_Stack
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void UAction_Debuff_Frostbite_Stacking_OnEnemy_C::SFX_Frost_Bite_Stack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.SFX_Frost_Bite_Stack");

	UAction_Debuff_Frostbite_Stacking_OnEnemy_C_SFX_Frost_Bite_Stack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Debuff_Frostbite_Stacking_OnEnemy_C::ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy");

	UAction_Debuff_Frostbite_Stacking_OnEnemy_C_ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
