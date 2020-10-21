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

// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.Get_PlayerName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_PartyMemberChat_C::Get_PlayerName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.Get_PlayerName_Text_1");

	UWidget_PartyMemberChat_C_Get_PlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnTalkingChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PartyMemberChat_C::OnTalkingChanged_Event_1(bool IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnTalkingChanged_Event_1");

	UWidget_PartyMemberChat_C_OnTalkingChanged_Event_1_Params params;
	params.IsTalking = IsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnPlayerNameChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_PartyMemberChat_C::OnPlayerNameChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnPlayerNameChanged_Event_1");

	UWidget_PartyMemberChat_C_OnPlayerNameChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_PartyMemberChat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.Construct");

	UWidget_PartyMemberChat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnChatRestrictionChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_PartyMemberChat_C::OnChatRestrictionChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.OnChatRestrictionChanged_Event_1");

	UWidget_PartyMemberChat_C_OnChatRestrictionChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.FinishFadeOut
// (BlueprintCallable, BlueprintEvent)
void UWidget_PartyMemberChat_C::FinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.FinishFadeOut");

	UWidget_PartyMemberChat_C_FinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.RefreshName
// (BlueprintCallable, BlueprintEvent)
void UWidget_PartyMemberChat_C::RefreshName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.RefreshName");

	UWidget_PartyMemberChat_C_RefreshName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.ExecuteUbergraph_Widget_PartyMemberChat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PartyMemberChat_C::ExecuteUbergraph_Widget_PartyMemberChat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyMemberChat.Widget_PartyMemberChat_C.ExecuteUbergraph_Widget_PartyMemberChat");

	UWidget_PartyMemberChat_C_ExecuteUbergraph_Widget_PartyMemberChat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
