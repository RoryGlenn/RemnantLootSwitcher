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

// Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.UpdateSchemaByInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ControllerId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputDevice                   InputDevice                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_QuickSelect_C::UpdateSchemaByInput(int ControllerId, EInputDevice InputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.UpdateSchemaByInput");

	UWidget_HUD_QuickSelect_C_UpdateSchemaByInput_Params params;
	params.ControllerId = ControllerId;
	params.InputDevice = InputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_HUD_QuickSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.Construct");

	UWidget_HUD_QuickSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.UpdateImageBindings
// (BlueprintCallable, BlueprintEvent)
void UWidget_HUD_QuickSelect_C::UpdateImageBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.UpdateImageBindings");

	UWidget_HUD_QuickSelect_C_UpdateImageBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.ExecuteUbergraph_Widget_HUD_QuickSelect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_QuickSelect_C::ExecuteUbergraph_Widget_HUD_QuickSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C.ExecuteUbergraph_Widget_HUD_QuickSelect");

	UWidget_HUD_QuickSelect_C_ExecuteUbergraph_Widget_HUD_QuickSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
