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

// Function BP_Inspectable.BP_Inspectable_C.OnInspectEnd
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnInspectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnInspectEnd");

	ABP_Inspectable_C_OnInspectEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.EnablePlayerInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Inspectable_C::EnablePlayerInteraction(class APlayerController* PlayerController, bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.EnablePlayerInteraction");

	ABP_Inspectable_C_EnablePlayerInteraction_Params params;
	params.PlayerController = PlayerController;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.InitLore
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::InitLore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.InitLore");

	ABP_Inspectable_C_InitLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.SetLore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Lore                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::SetLore(class UClass* Lore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.SetLore");

	ABP_Inspectable_C_SetLore_Params params;
	params.Lore = Lore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnRep_Lore
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnRep_Lore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnRep_Lore");

	ABP_Inspectable_C_OnRep_Lore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Inspectable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.ReceiveBeginPlay");

	ABP_Inspectable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.On Inspectable Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::On_Inspectable_Complete(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.On Inspectable Complete");

	ABP_Inspectable_C_On_Inspectable_Complete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature(class UInspectableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature");

	ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.Request Dialog Next
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::Request_Dialog_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.Request Dialog Next");

	ABP_Inspectable_C_Request_Dialog_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.Request Dialog Prev
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::Request_Dialog_Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.Request Dialog Prev");

	ABP_Inspectable_C_Request_Dialog_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnNextDialog
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnNextDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnNextDialog");

	ABP_Inspectable_C_OnNextDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnPrevDialog
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnPrevDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnPrevDialog");

	ABP_Inspectable_C_OnPrevDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.BeginTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::BeginTransition(class UInspectableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.BeginTransition");

	ABP_Inspectable_C_BeginTransition_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.ServerBeginInspect
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::ServerBeginInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.ServerBeginInspect");

	ABP_Inspectable_C_ServerBeginInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.ServerEndInspect
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::ServerEndInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.ServerEndInspect");

	ABP_Inspectable_C_ServerEndInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature(class UInspectableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature");

	ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.ForceUpdateUI
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::ForceUpdateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.ForceUpdateUI");

	ABP_Inspectable_C_ForceUpdateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnNotifyReadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBookPage               Page                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Inspectable_C::OnNotifyReadEvent(const struct FBookPage& Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnNotifyReadEvent");

	ABP_Inspectable_C_OnNotifyReadEvent_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnNotifyCacheUIPageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::OnNotifyCacheUIPageEvent(int CurrentPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnNotifyCacheUIPageEvent");

	ABP_Inspectable_C_OnNotifyCacheUIPageEvent_Params params;
	params.CurrentPage = CurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature(class UInspectableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature");

	ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnClientRequestEndInspect
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnClientRequestEndInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnClientRequestEndInspect");

	ABP_Inspectable_C_OnClientRequestEndInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.ServerRequestEndInspect
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::ServerRequestEndInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.ServerRequestEndInspect");

	ABP_Inspectable_C_ServerRequestEndInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsServerController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Inspectable_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature(class UInspectableComponent* Component, bool bIsServerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature");

	ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature_Params params;
	params.Component = Component;
	params.bIsServerController = bIsServerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.NotifyCompleteInspect
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::NotifyCompleteInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.NotifyCompleteInspect");

	ABP_Inspectable_C_NotifyCompleteInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.ExecuteUbergraph_BP_Inspectable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::ExecuteUbergraph_BP_Inspectable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.ExecuteUbergraph_BP_Inspectable");

	ABP_Inspectable_C_ExecuteUbergraph_BP_Inspectable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnNotifyCacheUIPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_C::OnNotifyCacheUIPage__DelegateSignature(int CurrentPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnNotifyCacheUIPage__DelegateSignature");

	ABP_Inspectable_C_OnNotifyCacheUIPage__DelegateSignature_Params params;
	params.CurrentPage = CurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnNotifyRead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBookPage               Page                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Inspectable_C::OnNotifyRead__DelegateSignature(const struct FBookPage& Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnNotifyRead__DelegateSignature");

	ABP_Inspectable_C_OnNotifyRead__DelegateSignature_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnInspectableHUDForceUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnInspectableHUDForceUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnInspectableHUDForceUpdate__DelegateSignature");

	ABP_Inspectable_C_OnInspectableHUDForceUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnInspectableHUDInit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnInspectableHUDInit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnInspectableHUDInit__DelegateSignature");

	ABP_Inspectable_C_OnInspectableHUDInit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable.BP_Inspectable_C.OnLoreNotify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_C::OnLoreNotify__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable.BP_Inspectable_C.OnLoreNotify__DelegateSignature");

	ABP_Inspectable_C_OnLoreNotify__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
