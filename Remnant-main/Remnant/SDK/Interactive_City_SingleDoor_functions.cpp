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

// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.CanUseItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AInteractive_City_SingleDoor_C::CanUseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.CanUseItem");

	AInteractive_City_SingleDoor_C_CanUseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnRep_Locked
// (BlueprintCallable, BlueprintEvent)
void AInteractive_City_SingleDoor_C::OnRep_Locked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnRep_Locked");

	AInteractive_City_SingleDoor_C_OnRep_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_City_SingleDoor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.ReceiveBeginPlay");

	AInteractive_City_SingleDoor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.UseItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AInteractive_City_SingleDoor_C::UseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.UseItem");

	AInteractive_City_SingleDoor_C_UseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_City_SingleDoor_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature(class UInspectableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature");

	AInteractive_City_SingleDoor_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnBeginInspect
// (BlueprintCallable, BlueprintEvent)
void AInteractive_City_SingleDoor_C::OnBeginInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnBeginInspect");

	AInteractive_City_SingleDoor_C_OnBeginInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_2_InteractiveDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_City_SingleDoor_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_2_InteractiveDelegate__DelegateSignature(const struct FName& StateName, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_2_InteractiveDelegate__DelegateSignature");

	AInteractive_City_SingleDoor_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_2_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnOpenDoor
// (BlueprintCallable, BlueprintEvent)
void AInteractive_City_SingleDoor_C::OnOpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnOpenDoor");

	AInteractive_City_SingleDoor_C_OnOpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnOpenedDoor
// (BlueprintCallable, BlueprintEvent)
void AInteractive_City_SingleDoor_C::OnOpenedDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.OnOpenedDoor");

	AInteractive_City_SingleDoor_C_OnOpenedDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.HandleEndInspect
// (BlueprintCallable, BlueprintEvent)
void AInteractive_City_SingleDoor_C::HandleEndInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.HandleEndInspect");

	AInteractive_City_SingleDoor_C_HandleEndInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.ExecuteUbergraph_Interactive_City_SingleDoor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_City_SingleDoor_C::ExecuteUbergraph_Interactive_City_SingleDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_SingleDoor.Interactive_City_SingleDoor_C.ExecuteUbergraph_Interactive_City_SingleDoor");

	AInteractive_City_SingleDoor_C_ExecuteUbergraph_Interactive_City_SingleDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
