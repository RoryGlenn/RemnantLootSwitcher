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

// Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.Init_1
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Armor_C::Init_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.Init_1");

	UWidget_ItemInfo_Armor_C_Init_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Armor_C::OnSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.OnSetItem");

	UWidget_ItemInfo_Armor_C_OnSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemInfo_Armor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.Construct");

	UWidget_ItemInfo_Armor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_Armor_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.Init");

	UWidget_ItemInfo_Armor_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.ApplySizeModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Armor_C::ApplySizeModifier(int Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.ApplySizeModifier");

	UWidget_ItemInfo_Armor_C_ApplySizeModifier_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.ExecuteUbergraph_Widget_ItemInfo_Armor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_Armor_C::ExecuteUbergraph_Widget_ItemInfo_Armor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C.ExecuteUbergraph_Widget_ItemInfo_Armor");

	UWidget_ItemInfo_Armor_C_ExecuteUbergraph_Widget_ItemInfo_Armor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
