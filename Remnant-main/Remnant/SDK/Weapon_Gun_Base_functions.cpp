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

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnFire
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Gun_Base_C::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnFire");

	AWeapon_Gun_Base_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AWeapon_Gun_Base_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnEquipped");

	AWeapon_Gun_Base_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnUnequipped
// (Event, Public, BlueprintEvent)
void AWeapon_Gun_Base_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnUnequipped");

	AWeapon_Gun_Base_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWeapon_Gun_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.ReceiveBeginPlay");

	AWeapon_Gun_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.ExecuteUbergraph_Weapon_Gun_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Gun_Base_C::ExecuteUbergraph_Weapon_Gun_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.ExecuteUbergraph_Weapon_Gun_Base");

	AWeapon_Gun_Base_C_ExecuteUbergraph_Weapon_Gun_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
