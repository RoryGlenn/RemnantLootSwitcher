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

// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.TryUnregisterPanel
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MiniMap_Overview_C::TryUnregisterPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.TryUnregisterPanel");

	UWidget_MiniMap_Overview_C_TryUnregisterPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.InitMiniMapWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMiniMapDisplayActor*    DisplayActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MiniMap_Overview_C::InitMiniMapWidget(class AMiniMapDisplayActor* DisplayActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.InitMiniMapWidget");

	UWidget_MiniMap_Overview_C_InitMiniMapWidget_Params params;
	params.DisplayActor = DisplayActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_MiniMap_Overview_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.Destruct");

	UWidget_MiniMap_Overview_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.ExecuteUbergraph_Widget_MiniMap_Overview
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MiniMap_Overview_C::ExecuteUbergraph_Widget_MiniMap_Overview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.ExecuteUbergraph_Widget_MiniMap_Overview");

	UWidget_MiniMap_Overview_C_ExecuteUbergraph_Widget_MiniMap_Overview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
