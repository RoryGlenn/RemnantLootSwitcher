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

// Function Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARangedWeapon*           InRangedWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Weapon_Gun_Scope_Base_C::Init(class ARangedWeapon* InRangedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C.Init");

	UWidget_Weapon_Gun_Scope_Base_C_Init_Params params;
	params.InRangedWeapon = InRangedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
