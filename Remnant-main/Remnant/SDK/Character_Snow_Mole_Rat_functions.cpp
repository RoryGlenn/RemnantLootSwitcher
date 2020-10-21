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

// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Combat_Eyes
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::FX_Combat_Eyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Combat_Eyes");

	ACharacter_Snow_Mole_Rat_C_FX_Combat_Eyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Summoned_Eyes
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::FX_Summoned_Eyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Summoned_Eyes");

	ACharacter_Snow_Mole_Rat_C_FX_Summoned_Eyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Summ_Eye_Off
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::FX_Summ_Eye_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Summ_Eye_Off");

	ACharacter_Snow_Mole_Rat_C_FX_Summ_Eye_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Combat_Eyes_Off
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::FX_Combat_Eyes_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_Combat_Eyes_Off");

	ACharacter_Snow_Mole_Rat_C_FX_Combat_Eyes_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_DeathFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::FX_DeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.FX_DeathFX");

	ACharacter_Snow_Mole_Rat_C_FX_DeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.ReceiveBeginPlay");

	ACharacter_Snow_Mole_Rat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.OnEnterDown
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::OnEnterDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.OnEnterDown");

	ACharacter_Snow_Mole_Rat_C_OnEnterDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.OnExitDown
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::OnExitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.OnExitDown");

	ACharacter_Snow_Mole_Rat_C_OnExitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.OnDead_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Mole_Rat_C::OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.OnDead_Event_2");

	ACharacter_Snow_Mole_Rat_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.CombatEnter
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::CombatEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.CombatEnter");

	ACharacter_Snow_Mole_Rat_C_CombatEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.CombatExit
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Mole_Rat_C::CombatExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.CombatExit");

	ACharacter_Snow_Mole_Rat_C_CombatExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.ExecuteUbergraph_Character_Snow_Mole_Rat
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Mole_Rat_C::ExecuteUbergraph_Character_Snow_Mole_Rat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C.ExecuteUbergraph_Character_Snow_Mole_Rat");

	ACharacter_Snow_Mole_Rat_C_ExecuteUbergraph_Character_Snow_Mole_Rat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
