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

// Function Trinket_SoulEmber.Trinket_SoulEmber_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrinket_SoulEmber_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.ModifyInspectInfo");

	ATrinket_SoulEmber_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnEquipped
// (Event, Public, BlueprintEvent)
void ATrinket_SoulEmber_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnEquipped");

	ATrinket_SoulEmber_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnUnequipped
// (Event, Public, BlueprintEvent)
void ATrinket_SoulEmber_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnUnequipped");

	ATrinket_SoulEmber_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_SoulEmber.Trinket_SoulEmber_C.ExecuteUbergraph_Trinket_SoulEmber
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrinket_SoulEmber_C::ExecuteUbergraph_Trinket_SoulEmber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.ExecuteUbergraph_Trinket_SoulEmber");

	ATrinket_SoulEmber_C_ExecuteUbergraph_Trinket_SoulEmber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
