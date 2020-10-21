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

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AConsumable_OrbOfUndoing_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ModifyInspectInfo");

	AConsumable_OrbOfUndoing_C_ModifyInspectInfo_Params params;
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


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnActivate
// (BlueprintCallable, BlueprintEvent)
void AConsumable_OrbOfUndoing_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnActivate");

	AConsumable_OrbOfUndoing_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AConsumable_OrbOfUndoing_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnEquipped");

	AConsumable_OrbOfUndoing_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ExecuteUbergraph_Consumable_OrbOfUndoing
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AConsumable_OrbOfUndoing_C::ExecuteUbergraph_Consumable_OrbOfUndoing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ExecuteUbergraph_Consumable_OrbOfUndoing");

	AConsumable_OrbOfUndoing_C_ExecuteUbergraph_Consumable_OrbOfUndoing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
