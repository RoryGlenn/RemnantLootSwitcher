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

// Function Widget_StatList.Widget_StatList_C.GetWidgetForStat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_ItemStat_C*      Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StatList_C::GetWidgetForStat(const struct FName& Name, class UWidget_ItemStat_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatList.Widget_StatList_C.GetWidgetForStat");

	UWidget_StatList_C_GetWidgetForStat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function Widget_StatList.Widget_StatList_C.BuildList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_StatList_C::BuildList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatList.Widget_StatList_C.BuildList");

	UWidget_StatList_C_BuildList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatList.Widget_StatList_C.SetInspectInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_StatList_C::SetInspectInfo(const struct FInspectInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatList.Widget_StatList_C.SetInspectInfo");

	UWidget_StatList_C_SetInspectInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatList.Widget_StatList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StatList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatList.Widget_StatList_C.Construct");

	UWidget_StatList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatList.Widget_StatList_C.ExecuteUbergraph_Widget_StatList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StatList_C::ExecuteUbergraph_Widget_StatList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatList.Widget_StatList_C.ExecuteUbergraph_Widget_StatList");

	UWidget_StatList_C_ExecuteUbergraph_Widget_StatList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
