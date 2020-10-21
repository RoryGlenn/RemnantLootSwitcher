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

// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.TerrainIsIce
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACharacter_Snow_Packmaster_Base_C::TerrainIsIce(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.TerrainIsIce");

	ACharacter_Snow_Packmaster_Base_C_TerrainIsIce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.IsBoulderNearby
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACharacter_Snow_Packmaster_Base_C::IsBoulderNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.IsBoulderNearby");

	ACharacter_Snow_Packmaster_Base_C_IsBoulderNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.SpawnShockwave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::SpawnShockwave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.SpawnShockwave");

	ACharacter_Snow_Packmaster_Base_C_SpawnShockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.ReceiveBeginPlay");

	ACharacter_Snow_Packmaster_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnLoopStart
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::OnLoopStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnLoopStart");

	ACharacter_Snow_Packmaster_Base_C_OnLoopStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnSlamStart
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::OnSlamStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnSlamStart");

	ACharacter_Snow_Packmaster_Base_C_OnSlamStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnGroundSlam
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::OnGroundSlam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnGroundSlam");

	ACharacter_Snow_Packmaster_Base_C_OnGroundSlam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.ThrowProjectile
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::ThrowProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.ThrowProjectile");

	ACharacter_Snow_Packmaster_Base_C_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnInteractiveDamage
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Packmaster_Base_C::OnInteractiveDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.OnInteractiveDamage");

	ACharacter_Snow_Packmaster_Base_C_OnInteractiveDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.ExecuteUbergraph_Character_Snow_Packmaster_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Packmaster_Base_C::ExecuteUbergraph_Character_Snow_Packmaster_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_Base.Character_Snow_Packmaster_Base_C.ExecuteUbergraph_Character_Snow_Packmaster_Base");

	ACharacter_Snow_Packmaster_Base_C_ExecuteUbergraph_Character_Snow_Packmaster_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
