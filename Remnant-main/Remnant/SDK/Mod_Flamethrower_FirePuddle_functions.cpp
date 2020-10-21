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

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.AddFireStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_FirePuddle_C::AddFireStack(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.AddFireStack");

	AMod_Flamethrower_FirePuddle_C_AddFireStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent*        ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_FirePuddle_C::DoAction(class ACharacterGunfire* TargetCharacter, class UActionComponent* ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.DoAction");

	AMod_Flamethrower_FirePuddle_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.StopAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_FirePuddle_C::StopAction(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.StopAction");

	AMod_Flamethrower_FirePuddle_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.MulticastFadeOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AMod_Flamethrower_FirePuddle_C::MulticastFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.MulticastFadeOut");

	AMod_Flamethrower_FirePuddle_C_MulticastFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Start
// (BlueprintCallable, BlueprintEvent)
void AMod_Flamethrower_FirePuddle_C::FX_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Start");

	AMod_Flamethrower_FirePuddle_C_FX_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Stop
// (BlueprintCallable, BlueprintEvent)
void AMod_Flamethrower_FirePuddle_C::FX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Stop");

	AMod_Flamethrower_FirePuddle_C_FX_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_Flamethrower_FirePuddle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveBeginPlay");

	AMod_Flamethrower_FirePuddle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_FirePuddle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveTick");

	AMod_Flamethrower_FirePuddle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ExecuteUbergraph_Mod_Flamethrower_FirePuddle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_FirePuddle_C::ExecuteUbergraph_Mod_Flamethrower_FirePuddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ExecuteUbergraph_Mod_Flamethrower_FirePuddle");

	AMod_Flamethrower_FirePuddle_C_ExecuteUbergraph_Mod_Flamethrower_FirePuddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
