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

// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AItem_Trinket_TriggerOnEquip_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped");

	AItem_Trinket_TriggerOnEquip_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped
// (Event, Public, BlueprintEvent)
void AItem_Trinket_TriggerOnEquip_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped");

	AItem_Trinket_TriggerOnEquip_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Trinket_TriggerOnEquip_C::ExecuteUbergraph_Item_Trinket_TriggerOnEquip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip");

	AItem_Trinket_TriggerOnEquip_C_ExecuteUbergraph_Item_Trinket_TriggerOnEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
