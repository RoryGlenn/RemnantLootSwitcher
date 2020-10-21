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

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.TestDriftstone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::TestDriftstone(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.TestDriftstone");

	ABP_Cloud_Mod_FrozenMist_C_TestDriftstone_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopActionOnCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::StopActionOnCharacter(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopActionOnCharacter");

	ABP_Cloud_Mod_FrozenMist_C_StopActionOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoActionToCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::DoActionToCharacter(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoActionToCharacter");

	ABP_Cloud_Mod_FrozenMist_C_DoActionToCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.AddFrostbiteStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::AddFrostbiteStack(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.AddFrostbiteStack");

	ABP_Cloud_Mod_FrozenMist_C_AddFrostbiteStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Start
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Cloud_Mod_FrozenMist_C::SFX_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Start");

	ABP_Cloud_Mod_FrozenMist_C_SFX_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Stop
// (BlueprintCallable, BlueprintEvent)
void ABP_Cloud_Mod_FrozenMist_C::SFX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Stop");

	ABP_Cloud_Mod_FrozenMist_C_SFX_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Cloud_Mod_FrozenMist_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveBeginPlay");

	ABP_Cloud_Mod_FrozenMist_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent*        ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::DoAction(class ACharacterGunfire* TargetCharacter, class UActionComponent* ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoAction");

	ABP_Cloud_Mod_FrozenMist_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::StopAction(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopAction");

	ABP_Cloud_Mod_FrozenMist_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.MulticastFadeOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Cloud_Mod_FrozenMist_C::MulticastFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.MulticastFadeOut");

	ABP_Cloud_Mod_FrozenMist_C_MulticastFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveTick");

	ABP_Cloud_Mod_FrozenMist_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ExecuteUbergraph_BP_Cloud_Mod_FrozenMist
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Cloud_Mod_FrozenMist_C::ExecuteUbergraph_BP_Cloud_Mod_FrozenMist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ExecuteUbergraph_BP_Cloud_Mod_FrozenMist");

	ABP_Cloud_Mod_FrozenMist_C_ExecuteUbergraph_BP_Cloud_Mod_FrozenMist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
