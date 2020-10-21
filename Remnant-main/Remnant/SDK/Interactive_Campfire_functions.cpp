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

// Function Interactive_Campfire.Interactive_Campfire_C.ReplenishHealthOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Campfire_C::ReplenishHealthOnly(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.ReplenishHealthOnly");

	AInteractive_Campfire_C_ReplenishHealthOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Interactive_Campfire.Interactive_Campfire_C.CanUpgrade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanUpgrade                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   UpgradeDetails                 (Parm, OutParm)
// class UTexture*                Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_C::CanUpgrade(class ACharacter_Master_Player_C* Character, bool* CanUpgrade, struct FText* UpgradeDetails, class UTexture** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.CanUpgrade");

	AInteractive_Campfire_C_CanUpgrade_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanUpgrade != nullptr)
		*CanUpgrade = params.CanUpgrade;
	if (UpgradeDetails != nullptr)
		*UpgradeDetails = params.UpgradeDetails;
	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function Interactive_Campfire.Interactive_Campfire_C.RemoveFortifyTag
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Campfire_C::RemoveFortifyTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.RemoveFortifyTag");

	AInteractive_Campfire_C_RemoveFortifyTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.OnRep_Fortified
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Campfire_C::OnRep_Fortified()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.OnRep_Fortified");

	AInteractive_Campfire_C_OnRep_Fortified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.DoFortifyVisuals
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Campfire_C::DoFortifyVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.DoFortifyVisuals");

	AInteractive_Campfire_C_DoFortifyVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.UpdateCampfireVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BeingLit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Campfire_C::UpdateCampfireVisuals(bool IsActive, bool BeingLit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.UpdateCampfireVisuals");

	AInteractive_Campfire_C_UpdateCampfireVisuals_Params params;
	params.IsActive = IsActive;
	params.BeingLit = BeingLit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.StateActivate
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Campfire_C::StateActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.StateActivate");

	AInteractive_Campfire_C_StateActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.StateActive
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Campfire_C::StateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.StateActive");

	AInteractive_Campfire_C_StateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_Campfire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.ReceiveBeginPlay");

	AInteractive_Campfire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.BeginUseCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasSummoned                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Campfire_C::BeginUseCheckpoint(class ACharacter_Master_Player_C* Character, bool WasSummoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.BeginUseCheckpoint");

	AInteractive_Campfire_C_BeginUseCheckpoint_Params params;
	params.Character = Character;
	params.WasSummoned = WasSummoned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.EndUseCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_C::EndUseCheckpoint(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.EndUseCheckpoint");

	AInteractive_Campfire_C_EndUseCheckpoint_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.OnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_C::OnUpgrade(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.OnUpgrade");

	AInteractive_Campfire_C_OnUpgrade_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.TransitionToMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_C::TransitionToMenu(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.TransitionToMenu");

	AInteractive_Campfire_C_TransitionToMenu_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature");

	AInteractive_Campfire_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Campfire.Interactive_Campfire_C.ExecuteUbergraph_Interactive_Campfire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Campfire_C::ExecuteUbergraph_Interactive_Campfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Campfire.Interactive_Campfire_C.ExecuteUbergraph_Interactive_Campfire");

	AInteractive_Campfire_C_ExecuteUbergraph_Interactive_Campfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
