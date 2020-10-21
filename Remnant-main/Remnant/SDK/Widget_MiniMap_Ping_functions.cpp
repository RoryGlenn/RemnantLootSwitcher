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

// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MiniMap_Ping_C::UpdateMinimapDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay");

	UWidget_MiniMap_Ping_C_UpdateMinimapDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMiniMapPanel*           MiniMapPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MiniMap_Ping_C::OnRegisteredToPanel(class UMiniMapPanel* MiniMapPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel");

	UWidget_MiniMap_Ping_C_OnRegisteredToPanel_Params params;
	params.MiniMapPanel = MiniMapPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MiniMap_Ping_C::ExecuteUbergraph_Widget_MiniMap_Ping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping");

	UWidget_MiniMap_Ping_C_ExecuteUbergraph_Widget_MiniMap_Ping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
