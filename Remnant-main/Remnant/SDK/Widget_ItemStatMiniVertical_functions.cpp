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

// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Get_StatValue_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWidget_ItemStatMiniVertical_C::Get_StatValue_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Get_StatValue_ColorAndOpacity_1");

	UWidget_ItemStatMiniVertical_C_Get_StatValue_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ItemStatMiniVertical_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Refresh");

	UWidget_ItemStatMiniVertical_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemStatMiniVertical_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Construct");

	UWidget_ItemStatMiniVertical_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat            Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectStat            CompareStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemStatMiniVertical_C::Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Init");

	UWidget_ItemStatMiniVertical_C_Init_Params params;
	params.Stat = Stat;
	params.Comparing = Comparing;
	params.CompareStat = CompareStat;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.ExecuteUbergraph_Widget_ItemStatMiniVertical
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemStatMiniVertical_C::ExecuteUbergraph_Widget_ItemStatMiniVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.ExecuteUbergraph_Widget_ItemStatMiniVertical");

	UWidget_ItemStatMiniVertical_C_ExecuteUbergraph_Widget_ItemStatMiniVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
