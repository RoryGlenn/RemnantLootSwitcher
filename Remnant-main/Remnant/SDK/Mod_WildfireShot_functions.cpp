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

// Function Mod_WildfireShot.Mod_WildfireShot_C.GetDotDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_WildfireShot_C::GetDotDuration(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_WildfireShot.Mod_WildfireShot_C.GetDotDuration");

	AMod_WildfireShot_C_GetDotDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_WildfireShot.Mod_WildfireShot_C.GetDotDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_WildfireShot_C::GetDotDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_WildfireShot.Mod_WildfireShot_C.GetDotDamage");

	AMod_WildfireShot_C_GetDotDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_WildfireShot.Mod_WildfireShot_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_WildfireShot_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_WildfireShot.Mod_WildfireShot_C.ModifyDamage");

	AMod_WildfireShot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_WildfireShot.Mod_WildfireShot_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_WildfireShot_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_WildfireShot.Mod_WildfireShot_C.ModifyInspectInfo");

	AMod_WildfireShot_C_ModifyInspectInfo_Params params;
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


// Function Mod_WildfireShot.Mod_WildfireShot_C.OnFire
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_WildfireShot_C::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_WildfireShot.Mod_WildfireShot_C.OnFire");

	AMod_WildfireShot_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_WildfireShot.Mod_WildfireShot_C.ExecuteUbergraph_Mod_WildfireShot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_WildfireShot_C::ExecuteUbergraph_Mod_WildfireShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_WildfireShot.Mod_WildfireShot_C.ExecuteUbergraph_Mod_WildfireShot");

	AMod_WildfireShot_C_ExecuteUbergraph_Mod_WildfireShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
