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

// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.Add Fire Stack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Incinerator_FirePuddle_C::Add_Fire_Stack(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.Add Fire Stack");

	AMod_Incinerator_FirePuddle_C_Add_Fire_Stack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.FX_Start
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMod_Incinerator_FirePuddle_C::FX_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.FX_Start");

	AMod_Incinerator_FirePuddle_C_FX_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.FX_Stop
// (BlueprintCallable, BlueprintEvent)
void AMod_Incinerator_FirePuddle_C::FX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.FX_Stop");

	AMod_Incinerator_FirePuddle_C_FX_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_Incinerator_FirePuddle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.ReceiveBeginPlay");

	AMod_Incinerator_FirePuddle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent*        ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Incinerator_FirePuddle_C::DoAction(class ACharacterGunfire* TargetCharacter, class UActionComponent* ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.DoAction");

	AMod_Incinerator_FirePuddle_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.MulticastFadeOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMod_Incinerator_FirePuddle_C::MulticastFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.MulticastFadeOut");

	AMod_Incinerator_FirePuddle_C_MulticastFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.StopAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Incinerator_FirePuddle_C::StopAction(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.StopAction");

	AMod_Incinerator_FirePuddle_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Incinerator_FirePuddle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.ReceiveTick");

	AMod_Incinerator_FirePuddle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.StopForCinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsInCinematic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_Incinerator_FirePuddle_C::StopForCinematic(class APlayerControllerGunfire* Player, bool bIsInCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.StopForCinematic");

	AMod_Incinerator_FirePuddle_C_StopForCinematic_Params params;
	params.Player = Player;
	params.bIsInCinematic = bIsInCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.ExecuteUbergraph_Mod_Incinerator_FirePuddle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Incinerator_FirePuddle_C::ExecuteUbergraph_Mod_Incinerator_FirePuddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_FirePuddle.Mod_Incinerator_FirePuddle_C.ExecuteUbergraph_Mod_Incinerator_FirePuddle");

	AMod_Incinerator_FirePuddle_C_ExecuteUbergraph_Mod_Incinerator_FirePuddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
