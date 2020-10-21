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

// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthMax                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_TentacleShot_Projectile_C::Init(float HealthMax, float Duration, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.Init");

	AMod_TentacleShot_Projectile_C_Init_Params params;
	params.HealthMax = HealthMax;
	params.Duration = Duration;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.Get Owning Character Aggro Group
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   AggroGroup                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_TentacleShot_Projectile_C::Get_Owning_Character_Aggro_Group(struct FName* AggroGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.Get Owning Character Aggro Group");

	AMod_TentacleShot_Projectile_C_Get_Owning_Character_Aggro_Group_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AggroGroup != nullptr)
		*AggroGroup = params.AggroGroup;

}


// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.OnHitGround
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                 GroundLocation                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_TentacleShot_Projectile_C::OnHitGround(const struct FHitResult& Impact, const struct FVector& GroundLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.OnHitGround");

	AMod_TentacleShot_Projectile_C_OnHitGround_Params params;
	params.Impact = Impact;
	params.GroundLocation = GroundLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_TentacleShot_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.ReceiveBeginPlay");

	AMod_TentacleShot_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.ExecuteUbergraph_Mod_TentacleShot_Projectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_TentacleShot_Projectile_C::ExecuteUbergraph_Mod_TentacleShot_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.ExecuteUbergraph_Mod_TentacleShot_Projectile");

	AMod_TentacleShot_Projectile_C_ExecuteUbergraph_Mod_TentacleShot_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
