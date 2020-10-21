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

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_MapGenDebug_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.GetText_1");

	UWidget_MapGenDebug_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateQuestInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_MapGenDebug_C::UpdateQuestInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateQuestInfo");

	UWidget_MapGenDebug_C_UpdateQuestInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateMapGenInfo
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MapGenDebug_C::UpdateMapGenInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateMapGenInfo");

	UWidget_MapGenDebug_C_UpdateMapGenInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateTileInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_MapGenDebug_C::UpdateTileInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateTileInfo");

	UWidget_MapGenDebug_C_UpdateTileInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.SetZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZoneActor*              ZoneActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MapGenDebug_C::SetZone(class AZoneActor* ZoneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.SetZone");

	UWidget_MapGenDebug_C_SetZone_Params params;
	params.ZoneActor = ZoneActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MapGenDebug_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.Tick");

	UWidget_MapGenDebug_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.ExecuteUbergraph_Widget_MapGenDebug
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MapGenDebug_C::ExecuteUbergraph_Widget_MapGenDebug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.ExecuteUbergraph_Widget_MapGenDebug");

	UWidget_MapGenDebug_C_ExecuteUbergraph_Widget_MapGenDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
