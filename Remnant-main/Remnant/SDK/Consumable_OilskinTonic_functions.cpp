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

// Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AConsumable_OilskinTonic_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ModifyInspectInfo");

	AConsumable_OilskinTonic_C_ModifyInspectInfo_Params params;
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


// Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent*        ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AConsumable_OilskinTonic_C::DoAction(class UActionComponent* ActionComponent, class AActor* Cause, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.DoAction");

	AConsumable_OilskinTonic_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;
	params.Cause = Cause;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ExecuteUbergraph_Consumable_OilskinTonic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AConsumable_OilskinTonic_C::ExecuteUbergraph_Consumable_OilskinTonic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ExecuteUbergraph_Consumable_OilskinTonic");

	AConsumable_OilskinTonic_C_ExecuteUbergraph_Consumable_OilskinTonic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
