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

// Function Dialog_Ping.Dialog_Ping_C.PingOnRelease
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OnRelease                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADialog_Ping_C::PingOnRelease(bool* OnRelease)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.PingOnRelease");

	ADialog_Ping_C_PingOnRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnRelease != nullptr)
		*OnRelease = params.OnRelease;

}


// Function Dialog_Ping.Dialog_Ping_C.MakePingSelection
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_Ping_C::MakePingSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.MakePingSelection");

	ADialog_Ping_C_MakePingSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.FireEmote
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_Ping_C::FireEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.FireEmote");

	ADialog_Ping_C_FireEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.ValidateAimInput
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_Ping_C::ValidateAimInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.ValidateAimInput");

	ADialog_Ping_C_ValidateAimInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.ShowEmotesScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::ShowEmotesScreen(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.ShowEmotesScreen");

	ADialog_Ping_C_ShowEmotesScreen_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.AddPingContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionPing             PingContext                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ADialog_Ping_C::AddPingContext(const struct FActionPing& PingContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.AddPingContext");

	ADialog_Ping_C_AddPingContext_Params params;
	params.PingContext = PingContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Ping_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Ping_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Ping_K2Node_InputActionEvent_14");

	ADialog_Ping_C_InpActEvt_Ping_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Ping_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Ping_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Ping_K2Node_InputActionEvent_13");

	ADialog_Ping_C_InpActEvt_Ping_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Melee_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Melee_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Melee_K2Node_InputActionEvent_12");

	ADialog_Ping_C_InpActEvt_Melee_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Fire_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Fire_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Fire_K2Node_InputActionEvent_11");

	ADialog_Ping_C_InpActEvt_Fire_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Fire_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Fire_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Fire_K2Node_InputActionEvent_10");

	ADialog_Ping_C_InpActEvt_Fire_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Aim_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Aim_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Aim_K2Node_InputActionEvent_9");

	ADialog_Ping_C_InpActEvt_Aim_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_Back_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_UI_Back_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_Back_K2Node_InputActionEvent_8");

	ADialog_Ping_C_InpActEvt_UI_Back_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7");

	ADialog_Ping_C_InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6");

	ADialog_Ping_C_InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5");

	ADialog_Ping_C_InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4");

	ADialog_Ping_C_InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3");

	ADialog_Ping_C_InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_DragonHeart_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_DragonHeart_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_DragonHeart_K2Node_InputActionEvent_2");

	ADialog_Ping_C_InpActEvt_DragonHeart_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_AltFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_AltFire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_AltFire_K2Node_InputActionEvent_1");

	ADialog_Ping_C_InpActEvt_AltFire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4");

	ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3");

	ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2");

	ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADialog_Ping_C::InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1");

	ADialog_Ping_C_InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1");

	ADialog_Ping_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2");

	ADialog_Ping_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3");

	ADialog_Ping_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_4");

	ADialog_Ping_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ADialog_Ping_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.OnBeginDialog");

	ADialog_Ping_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.OnEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::OnEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.OnEvent");

	ADialog_Ping_C_OnEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.OnEndDialog
// (Event, Public, BlueprintEvent)
void ADialog_Ping_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.OnEndDialog");

	ADialog_Ping_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Ping.Dialog_Ping_C.ExecuteUbergraph_Dialog_Ping
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Ping_C::ExecuteUbergraph_Dialog_Ping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Ping.Dialog_Ping_C.ExecuteUbergraph_Dialog_Ping");

	ADialog_Ping_C_ExecuteUbergraph_Dialog_Ping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
