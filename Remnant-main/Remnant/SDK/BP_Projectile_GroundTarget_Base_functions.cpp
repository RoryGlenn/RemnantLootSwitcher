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

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ConditionallyIncrementWallHitCount
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_GroundTarget_Base_C::ConditionallyIncrementWallHitCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ConditionallyIncrementWallHitCount");

	ABP_Projectile_GroundTarget_Base_C_ConditionallyIncrementWallHitCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ValidateFlatSurface
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Projectile_GroundTarget_Base_C::ValidateFlatSurface(const struct FVector& Location, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ValidateFlatSurface");

	ABP_Projectile_GroundTarget_Base_C_ValidateFlatSurface_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ValidateHit
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           bSimulating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Projectile_GroundTarget_Base_C::ValidateHit(const struct FHitResult& Hit, bool bSimulating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ValidateHit");

	ABP_Projectile_GroundTarget_Base_C_ValidateHit_Params params;
	params.Hit = Hit;
	params.bSimulating = bSimulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.OnHitGround
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                 GroundLocation                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_GroundTarget_Base_C::OnHitGround(const struct FHitResult& Impact, const struct FVector& GroundLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.OnHitGround");

	ABP_Projectile_GroundTarget_Base_C_OnHitGround_Params params;
	params.Impact = Impact;
	params.GroundLocation = GroundLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.OnMaxHitsReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasGroundHit                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Projectile_GroundTarget_Base_C::OnMaxHitsReached(bool WasGroundHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.OnMaxHitsReached");

	ABP_Projectile_GroundTarget_Base_C_OnMaxHitsReached_Params params;
	params.WasGroundHit = WasGroundHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ExecuteUbergraph_BP_Projectile_GroundTarget_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_GroundTarget_Base_C::ExecuteUbergraph_BP_Projectile_GroundTarget_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ExecuteUbergraph_BP_Projectile_GroundTarget_Base");

	ABP_Projectile_GroundTarget_Base_C_ExecuteUbergraph_BP_Projectile_GroundTarget_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
