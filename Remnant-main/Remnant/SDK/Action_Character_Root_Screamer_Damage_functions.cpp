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

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.GetTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Character_Root_Screamer_Damage_C::GetTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.GetTime");

	UAction_Character_Root_Screamer_Damage_C_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnStop
// (BlueprintCallable, BlueprintEvent)
void UAction_Character_Root_Screamer_Damage_C::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnStop");

	UAction_Character_Root_Screamer_Damage_C_OnStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Character_Root_Screamer_Damage_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnActionStart");

	UAction_Character_Root_Screamer_Damage_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnTimer
// (BlueprintCallable, BlueprintEvent)
void UAction_Character_Root_Screamer_Damage_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnTimer");

	UAction_Character_Root_Screamer_Damage_C_OnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnDead_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Character_Root_Screamer_Damage_C::OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnDead_Event_1");

	UAction_Character_Root_Screamer_Damage_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnStateChange_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Character_Root_Screamer_Damage_C::OnStateChange_Event_1(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnStateChange_Event_1");

	UAction_Character_Root_Screamer_Damage_C_OnStateChange_Event_1_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.ExecuteUbergraph_Action_Character_Root_Screamer_Damage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Character_Root_Screamer_Damage_C::ExecuteUbergraph_Action_Character_Root_Screamer_Damage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.ExecuteUbergraph_Action_Character_Root_Screamer_Damage");

	UAction_Character_Root_Screamer_Damage_C_ExecuteUbergraph_Action_Character_Root_Screamer_Damage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
