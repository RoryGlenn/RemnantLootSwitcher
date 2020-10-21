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

// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemStatCustomCentered_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Refresh");

	UWidget_ItemStatCustomCentered_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemStatCustomCentered_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Construct");

	UWidget_ItemStatCustomCentered_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat            Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectStat            CompareStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemStatCustomCentered_C::Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.Init");

	UWidget_ItemStatCustomCentered_C_Init_Params params;
	params.Stat = Stat;
	params.Comparing = Comparing;
	params.CompareStat = CompareStat;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.ExecuteUbergraph_Widget_ItemStatCustomCentered
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemStatCustomCentered_C::ExecuteUbergraph_Widget_ItemStatCustomCentered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C.ExecuteUbergraph_Widget_ItemStatCustomCentered");

	UWidget_ItemStatCustomCentered_C_ExecuteUbergraph_Widget_ItemStatCustomCentered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
