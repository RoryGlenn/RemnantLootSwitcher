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

// Function Dialog_InGameBase.Dialog_InGameBase_C.InpActEvt_Menu_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_InGameBase_C::InpActEvt_Menu_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InGameBase.Dialog_InGameBase_C.InpActEvt_Menu_K2Node_InputActionEvent_1");

	ADialog_InGameBase_C_InpActEvt_Menu_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InGameBase.Dialog_InGameBase_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_InGameBase_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InGameBase.Dialog_InGameBase_C.OnBeginDialog");

	ADialog_InGameBase_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InGameBase.Dialog_InGameBase_C.OnEndDialog
// (Event, Public, BlueprintEvent)
void ADialog_InGameBase_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InGameBase.Dialog_InGameBase_C.OnEndDialog");

	ADialog_InGameBase_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InGameBase.Dialog_InGameBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADialog_InGameBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InGameBase.Dialog_InGameBase_C.ReceiveBeginPlay");

	ADialog_InGameBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InGameBase.Dialog_InGameBase_C.OnInteractive_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_InGameBase_C::OnInteractive_Event_1(const struct FName& StateName, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InGameBase.Dialog_InGameBase_C.OnInteractive_Event_1");

	ADialog_InGameBase_C_OnInteractive_Event_1_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InGameBase.Dialog_InGameBase_C.ExecuteUbergraph_Dialog_InGameBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_InGameBase_C::ExecuteUbergraph_Dialog_InGameBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InGameBase.Dialog_InGameBase_C.ExecuteUbergraph_Dialog_InGameBase");

	ADialog_InGameBase_C_ExecuteUbergraph_Dialog_InGameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
