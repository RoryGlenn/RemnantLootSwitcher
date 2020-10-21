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

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.RemoveBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealthBars_C::RemoveBoss(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealthBars.Widget_BossHealthBars_C.RemoveBoss");

	UWidget_BossHealthBars_C_RemoveBoss_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealthBars.Widget_BossHealthBars_C.AddBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealthBars_C::AddBoss(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealthBars.Widget_BossHealthBars_C.AddBoss");

	UWidget_BossHealthBars_C_AddBoss_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealthBars.Widget_BossHealthBars_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_BossHealthBars_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealthBars.Widget_BossHealthBars_C.Construct");

	UWidget_BossHealthBars_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealthBars.Widget_BossHealthBars_C.OnBossRelevant_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealthBars_C::OnBossRelevant_Event_1(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealthBars.Widget_BossHealthBars_C.OnBossRelevant_Event_1");

	UWidget_BossHealthBars_C_OnBossRelevant_Event_1_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealthBars.Widget_BossHealthBars_C.OnBossNotRelevant_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealthBars_C::OnBossNotRelevant_Event_1(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealthBars.Widget_BossHealthBars_C.OnBossNotRelevant_Event_1");

	UWidget_BossHealthBars_C_OnBossNotRelevant_Event_1_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealthBars.Widget_BossHealthBars_C.ExecuteUbergraph_Widget_BossHealthBars
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealthBars_C::ExecuteUbergraph_Widget_BossHealthBars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealthBars.Widget_BossHealthBars_C.ExecuteUbergraph_Widget_BossHealthBars");

	UWidget_BossHealthBars_C_ExecuteUbergraph_Widget_BossHealthBars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
