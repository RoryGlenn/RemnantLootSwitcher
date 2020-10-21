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

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ABP_Root_Rot_Bomb_C::OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage");

	ABP_Root_Rot_Bomb_C_OnNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Root_Rot_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay");

	ABP_Root_Rot_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_Root_Rot_Bomb_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer");

	ABP_Root_Rot_Bomb_C_OnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Root_Rot_Bomb_C::ExecuteUbergraph_BP_Root_Rot_Bomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb");

	ABP_Root_Rot_Bomb_C_ExecuteUbergraph_BP_Root_Rot_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
