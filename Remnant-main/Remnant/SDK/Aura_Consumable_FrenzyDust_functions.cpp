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

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAura_Consumable_FrenzyDust_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ReceiveBeginPlay");

	AAura_Consumable_FrenzyDust_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent*        ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAura_Consumable_FrenzyDust_C::DoAction(class ACharacterGunfire* TargetCharacter, class UActionComponent* ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.DoAction");

	AAura_Consumable_FrenzyDust_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAura_Consumable_FrenzyDust_C::FadeOut(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.FadeOut");

	AAura_Consumable_FrenzyDust_C_FadeOut_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.StopAura
// (BlueprintCallable, BlueprintEvent)
void AAura_Consumable_FrenzyDust_C::StopAura()
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.StopAura");

	AAura_Consumable_FrenzyDust_C_StopAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ExecuteUbergraph_Aura_Consumable_FrenzyDust
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAura_Consumable_FrenzyDust_C::ExecuteUbergraph_Aura_Consumable_FrenzyDust(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ExecuteUbergraph_Aura_Consumable_FrenzyDust");

	AAura_Consumable_FrenzyDust_C_ExecuteUbergraph_Aura_Consumable_FrenzyDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
