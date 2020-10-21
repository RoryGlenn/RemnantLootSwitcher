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

// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.UpdateInfoVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Default_C::UpdateInfoVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.UpdateInfoVisibility");

	UWidget_ItemInfo_Default_C_UpdateInfoVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.BuildBasicInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Default_C::BuildBasicInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.BuildBasicInfo");

	UWidget_ItemInfo_Default_C_BuildBasicInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.GetItemLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ItemInfo_Default_C::GetItemLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.GetItemLabel");

	UWidget_ItemInfo_Default_C_GetItemLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.BuildStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Default_C::BuildStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.BuildStats");

	UWidget_ItemInfo_Default_C_BuildStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemInfo_Default_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.Construct");

	UWidget_ItemInfo_Default_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Default_C::OnSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.OnSetItem");

	UWidget_ItemInfo_Default_C_OnSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Default_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.Init");

	UWidget_ItemInfo_Default_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.ExecuteUbergraph_Widget_ItemInfo_Default
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Default_C::ExecuteUbergraph_Widget_ItemInfo_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Default.Widget_ItemInfo_Default_C.ExecuteUbergraph_Widget_ItemInfo_Default");

	UWidget_ItemInfo_Default_C_ExecuteUbergraph_Widget_ItemInfo_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
