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

// Function Widget_Cinematic.Widget_Cinematic_C.DetermineSkipControl
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Cinematic_C::DetermineSkipControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.DetermineSkipControl");

	UWidget_Cinematic_C_DetermineSkipControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.Get_SkipInfo_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Cinematic_C::Get_SkipInfo_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.Get_SkipInfo_Visibility_1");

	UWidget_Cinematic_C_Get_SkipInfo_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Cinematic.Widget_Cinematic_C.OnSkipVoteChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerGunfire*>  RelevantPlayers                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ShouldSkip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Cinematic_C::OnSkipVoteChanged(TArray<class APlayerGunfire*>* RelevantPlayers, bool ShouldSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.OnSkipVoteChanged");

	UWidget_Cinematic_C_OnSkipVoteChanged_Params params;
	params.ShouldSkip = ShouldSkip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantPlayers != nullptr)
		*RelevantPlayers = params.RelevantPlayers;

}


// Function Widget_Cinematic.Widget_Cinematic_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Cinematic_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.UnbindEvents");

	UWidget_Cinematic_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSequencerPlayerSettings SequenceSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULevelSequence*          InLevelSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Cinematic_C::End(const struct FSequencerPlayerSettings& SequenceSettings, class ULevelSequence* InLevelSequence, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.End");

	UWidget_Cinematic_C_End_Params params;
	params.SequenceSettings = SequenceSettings;
	params.InLevelSequence = InLevelSequence;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Cinematic_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.BindEvents");

	UWidget_Cinematic_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Cinematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.Construct");

	UWidget_Cinematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Cinematic_C::BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Cinematic_C_BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.DelayShowPrompt
// (BlueprintCallable, BlueprintEvent)
void UWidget_Cinematic_C::DelayShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.DelayShowPrompt");

	UWidget_Cinematic_C_DelayShowPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Cinematic_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.Destruct");

	UWidget_Cinematic_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Cinematic.Widget_Cinematic_C.ExecuteUbergraph_Widget_Cinematic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Cinematic_C::ExecuteUbergraph_Widget_Cinematic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Cinematic.Widget_Cinematic_C.ExecuteUbergraph_Widget_Cinematic");

	UWidget_Cinematic_C_ExecuteUbergraph_Widget_Cinematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
