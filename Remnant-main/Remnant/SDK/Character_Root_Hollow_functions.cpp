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

// Function Character_Root_Hollow.Character_Root_Hollow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_Root_Hollow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.ReceiveBeginPlay");

	ACharacter_Root_Hollow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnTeleportOut
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::OnTeleportOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnTeleportOut");

	ACharacter_Root_Hollow_C_OnTeleportOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnTeleportIn
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::OnTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnTeleportIn");

	ACharacter_Root_Hollow_C_OnTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnShieldBreak
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::OnShieldBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnShieldBreak");

	ACharacter_Root_Hollow_C_OnShieldBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnFXLoopStart
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::OnFXLoopStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnFXLoopStart");

	ACharacter_Root_Hollow_C_OnFXLoopStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnFXLoopEnd
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::OnFXLoopEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnFXLoopEnd");

	ACharacter_Root_Hollow_C_OnFXLoopEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnHollowAbsorbStart
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::OnHollowAbsorbStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnHollowAbsorbStart");

	ACharacter_Root_Hollow_C_OnHollowAbsorbStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.DissolveOut
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Root_Hollow_C::DissolveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.DissolveOut");

	ACharacter_Root_Hollow_C_DissolveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.OnDead_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Root_Hollow_C::OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.OnDead_Event_2");

	ACharacter_Root_Hollow_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Hollow.Character_Root_Hollow_C.ExecuteUbergraph_Character_Root_Hollow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Root_Hollow_C::ExecuteUbergraph_Character_Root_Hollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Hollow.Character_Root_Hollow_C.ExecuteUbergraph_Character_Root_Hollow");

	ACharacter_Root_Hollow_C_ExecuteUbergraph_Character_Root_Hollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
