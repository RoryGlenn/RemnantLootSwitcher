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

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.IsPlayerBaseCrystal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AInteractive_DragonCrystal_C::IsPlayerBaseCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.IsPlayerBaseCrystal");

	AInteractive_DragonCrystal_C_IsPlayerBaseCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.EndGrab
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::EndGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.EndGrab");

	AInteractive_DragonCrystal_C_EndGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BeginGrab
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::BeginGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BeginGrab");

	AInteractive_DragonCrystal_C_BeginGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.AlignToWaypoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::AlignToWaypoint(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.AlignToWaypoint");

	AInteractive_DragonCrystal_C_AlignToWaypoint_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Activate
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::State_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Activate");

	AInteractive_DragonCrystal_C_State_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Active
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::State_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Active");

	AInteractive_DragonCrystal_C_State_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Inactive
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::State_Inactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Inactive");

	AInteractive_DragonCrystal_C_State_Inactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.PlayBlastFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::PlayBlastFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.PlayBlastFX");

	AInteractive_DragonCrystal_C_PlayBlastFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature(class AActor* Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature");

	AInteractive_DragonCrystal_C_BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.OnActivate
// (Event, Public, BlueprintEvent)
void AInteractive_DragonCrystal_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.OnActivate");

	AInteractive_DragonCrystal_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_DragonCrystal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ReceiveBeginPlay");

	AInteractive_DragonCrystal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BeginUseCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasSummoned                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_DragonCrystal_C::BeginUseCheckpoint(class ACharacter_Master_Player_C* Character, bool WasSummoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BeginUseCheckpoint");

	AInteractive_DragonCrystal_C_BeginUseCheckpoint_Params params;
	params.Character = Character;
	params.WasSummoned = WasSummoned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.EndUseCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::EndUseCheckpoint(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.EndUseCheckpoint");

	AInteractive_DragonCrystal_C_EndUseCheckpoint_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.TransitionToMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::TransitionToMenu(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.TransitionToMenu");

	AInteractive_DragonCrystal_C_TransitionToMenu_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.TransitionFromMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::TransitionFromMenu(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.TransitionFromMenu");

	AInteractive_DragonCrystal_C_TransitionFromMenu_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature");

	AInteractive_DragonCrystal_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ActivateIdleVFX
// (BlueprintCallable, BlueprintEvent)
void AInteractive_DragonCrystal_C::ActivateIdleVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ActivateIdleVFX");

	AInteractive_DragonCrystal_C_ActivateIdleVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ExecuteUbergraph_Interactive_DragonCrystal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_DragonCrystal_C::ExecuteUbergraph_Interactive_DragonCrystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ExecuteUbergraph_Interactive_DragonCrystal");

	AInteractive_DragonCrystal_C_ExecuteUbergraph_Interactive_DragonCrystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
