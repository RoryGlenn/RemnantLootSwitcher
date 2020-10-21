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

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.HandleTargetAcceleration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_Homing_Base_C::HandleTargetAcceleration(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.HandleTargetAcceleration");

	ABP_Projectile_Homing_Base_C_HandleTargetAcceleration_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.SetHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_Homing_Base_C::SetHomingTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.SetHomingTarget");

	ABP_Projectile_Homing_Base_C_SetHomingTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.InitDumbFire
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_Homing_Base_C::InitDumbFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.InitDumbFire");

	ABP_Projectile_Homing_Base_C_InitDumbFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C. StopHoming
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_Homing_Base_C::_StopHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C. StopHoming");

	ABP_Projectile_Homing_Base_C__StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.HasValidTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Projectile_Homing_Base_C::HasValidTarget(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.HasValidTarget");

	ABP_Projectile_Homing_Base_C_HasValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.InitializeProjectile
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_Homing_Base_C::InitializeProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.InitializeProjectile");

	ABP_Projectile_Homing_Base_C_InitializeProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ValidateHit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           bSimulating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Projectile_Homing_Base_C::ValidateHit(const struct FHitResult& Hit, bool bSimulating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ValidateHit");

	ABP_Projectile_Homing_Base_C_ValidateHit_Params params;
	params.Hit = Hit;
	params.bSimulating = bSimulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HomingAccelerationMagnitude    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_Homing_Base_C::Init(class AActor* TargetComponent, float HomingAccelerationMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.Init");

	ABP_Projectile_Homing_Base_C_Init_Params params;
	params.TargetComponent = TargetComponent;
	params.HomingAccelerationMagnitude = HomingAccelerationMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_Homing_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ReceiveTick");

	ABP_Projectile_Homing_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Projectile_Homing_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ReceiveBeginPlay");

	ABP_Projectile_Homing_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ExecuteUbergraph_BP_Projectile_Homing_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_Homing_Base_C::ExecuteUbergraph_BP_Projectile_Homing_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ExecuteUbergraph_BP_Projectile_Homing_Base");

	ABP_Projectile_Homing_Base_C_ExecuteUbergraph_BP_Projectile_Homing_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
