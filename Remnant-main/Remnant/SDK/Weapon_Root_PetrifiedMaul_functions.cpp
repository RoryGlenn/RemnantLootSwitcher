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

// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Root_PetrifiedMaul_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ModifyInspectInfo");

	AWeapon_Root_PetrifiedMaul_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Root_PetrifiedMaul_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ModifyDamage");

	AWeapon_Root_PetrifiedMaul_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.MulticastPetrifiedProcFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Root_PetrifiedMaul_C::MulticastPetrifiedProcFX(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.MulticastPetrifiedProcFX");

	AWeapon_Root_PetrifiedMaul_C_MulticastPetrifiedProcFX_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ExecuteUbergraph_Weapon_Root_PetrifiedMaul
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Root_PetrifiedMaul_C::ExecuteUbergraph_Weapon_Root_PetrifiedMaul(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_PetrifiedMaul.Weapon_Root_PetrifiedMaul_C.ExecuteUbergraph_Weapon_Root_PetrifiedMaul");

	AWeapon_Root_PetrifiedMaul_C_ExecuteUbergraph_Weapon_Root_PetrifiedMaul_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
