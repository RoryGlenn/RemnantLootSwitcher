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

// Function Weapon_Fist.Weapon_Fist_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Fist_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.ModifyDamage");

	AWeapon_Fist_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Weapon_Fist.Weapon_Fist_C.IsDefaultEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DefaultEquipment               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Fist_C::IsDefaultEquipment(bool* DefaultEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.IsDefaultEquipment");

	AWeapon_Fist_C_IsDefaultEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DefaultEquipment != nullptr)
		*DefaultEquipment = params.DefaultEquipment;

}


// Function Weapon_Fist.Weapon_Fist_C.GetLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
unsigned char AWeapon_Fist_C::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.GetLevel");

	AWeapon_Fist_C_GetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Weapon_Fist.Weapon_Fist_C.PostComputeCharacterStats
// (Event, Protected, BlueprintEvent)
void AWeapon_Fist_C::PostComputeCharacterStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.PostComputeCharacterStats");

	AWeapon_Fist_C_PostComputeCharacterStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Fist.Weapon_Fist_C.ExecuteUbergraph_Weapon_Fist
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Fist_C::ExecuteUbergraph_Weapon_Fist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.ExecuteUbergraph_Weapon_Fist");

	AWeapon_Fist_C_ExecuteUbergraph_Weapon_Fist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
