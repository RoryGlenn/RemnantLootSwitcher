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

// Function NPCDialogueComponent.NPCDialogueComponent_C.ExitIfHostile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNPCDialogueComponent_C::ExitIfHostile(class AActor* Actor, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.ExitIfHostile");

	UNPCDialogueComponent_C_ExitIfHostile_Params params;
	params.Actor = Actor;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.ExitOnCombat
// (Public, BlueprintCallable, BlueprintEvent)
void UNPCDialogueComponent_C::ExitOnCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.ExitOnCombat");

	UNPCDialogueComponent_C_ExitOnCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnInteractive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNPCDialogueComponent_C::OnInteractive(const struct FName& StateName, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnInteractive");

	UNPCDialogueComponent_C_OnInteractive_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnNotifyTakeDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UNPCDialogueComponent_C::OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnNotifyTakeDamage");

	UNPCDialogueComponent_C_OnNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargetChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNPCDialogueComponent_C::OnTargetChanged_Event_1(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargetChanged_Event_1");

	UNPCDialogueComponent_C_OnTargetChanged_Event_1_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargeted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNPCDialogueComponent_C::OnTargeted_Event_1(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargeted_Event_1");

	UNPCDialogueComponent_C_OnTargeted_Event_1_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnDialogBegin_Event_1
// (BlueprintCallable, BlueprintEvent)
void UNPCDialogueComponent_C::OnDialogBegin_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnDialogBegin_Event_1");

	UNPCDialogueComponent_C_OnDialogBegin_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnDialogEnd_Event_1
// (BlueprintCallable, BlueprintEvent)
void UNPCDialogueComponent_C::OnDialogEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnDialogEnd_Event_1");

	UNPCDialogueComponent_C_OnDialogEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargeted_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNPCDialogueComponent_C::OnTargeted_Event_2(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.OnTargeted_Event_2");

	UNPCDialogueComponent_C_OnTargeted_Event_2_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UNPCDialogueComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.ReceiveBeginPlay");

	UNPCDialogueComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NPCDialogueComponent.NPCDialogueComponent_C.ExecuteUbergraph_NPCDialogueComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNPCDialogueComponent_C::ExecuteUbergraph_NPCDialogueComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCDialogueComponent.NPCDialogueComponent_C.ExecuteUbergraph_NPCDialogueComponent");

	UNPCDialogueComponent_C_ExecuteUbergraph_NPCDialogueComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
