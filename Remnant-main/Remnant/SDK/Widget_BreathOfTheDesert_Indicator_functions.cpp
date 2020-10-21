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

// Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BreathOfTheDesert_Indicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.Tick");

	UWidget_BreathOfTheDesert_Indicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BreathOfTheDesert_Indicator_C::ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator");

	UWidget_BreathOfTheDesert_Indicator_C_ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
