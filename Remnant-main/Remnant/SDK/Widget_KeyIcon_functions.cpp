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

// Function Widget_KeyIcon.Widget_KeyIcon_C.GetInputActionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputActionName                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_KeyIcon_C::GetInputActionName(struct FString* InputActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.GetInputActionName");

	UWidget_KeyIcon_C_GetInputActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputActionName != nullptr)
		*InputActionName = params.InputActionName;

}


// Function Widget_KeyIcon.Widget_KeyIcon_C.ModifyKeyName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_KeyIcon_C::ModifyKeyName(const struct FString& KeyName, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.ModifyKeyName");

	UWidget_KeyIcon_C_ModifyKeyName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Widget_KeyIcon.Widget_KeyIcon_C.SetActionText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_KeyIcon_C::SetActionText(const struct FString& ActionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.SetActionText");

	UWidget_KeyIcon_C_SetActionText_Params params;
	params.ActionKey = ActionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_KeyIcon.Widget_KeyIcon_C.ExecuteUbergraph_Widget_KeyIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_KeyIcon_C::ExecuteUbergraph_Widget_KeyIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.ExecuteUbergraph_Widget_KeyIcon");

	UWidget_KeyIcon_C_ExecuteUbergraph_Widget_KeyIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
