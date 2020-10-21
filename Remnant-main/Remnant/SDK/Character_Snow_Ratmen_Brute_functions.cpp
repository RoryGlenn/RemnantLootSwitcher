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

// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.DamageBreakable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Ratmen_Brute_C::DamageBreakable(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.DamageBreakable");

	ACharacter_Snow_Ratmen_Brute_C_DamageBreakable_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.IsShieldNearby
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACharacter_Snow_Ratmen_Brute_C::IsShieldNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.IsShieldNearby");

	ACharacter_Snow_Ratmen_Brute_C_IsShieldNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_Snow_Ratmen_Brute_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ReceiveBeginPlay");

	ACharacter_Snow_Ratmen_Brute_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Ratmen_Brute_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ReceiveTick");

	ACharacter_Snow_Ratmen_Brute_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldThrown
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Ratmen_Brute_C::ShieldThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldThrown");

	ACharacter_Snow_Ratmen_Brute_C_ShieldThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldPickup
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Ratmen_Brute_C::ShieldPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldPickup");

	ACharacter_Snow_Ratmen_Brute_C_ShieldPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldedTag
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Ratmen_Brute_C::ShieldedTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ShieldedTag");

	ACharacter_Snow_Ratmen_Brute_C_ShieldedTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.RemoveShieldedTag
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Snow_Ratmen_Brute_C::RemoveShieldedTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.RemoveShieldedTag");

	ACharacter_Snow_Ratmen_Brute_C_RemoveShieldedTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACharacter_Snow_Ratmen_Brute_C::BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ACharacter_Snow_Ratmen_Brute_C_BndEvt__BreakableCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ExecuteUbergraph_Character_Snow_Ratmen_Brute
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Snow_Ratmen_Brute_C::ExecuteUbergraph_Character_Snow_Ratmen_Brute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Ratmen_Brute.Character_Snow_Ratmen_Brute_C.ExecuteUbergraph_Character_Snow_Ratmen_Brute");

	ACharacter_Snow_Ratmen_Brute_C_ExecuteUbergraph_Character_Snow_Ratmen_Brute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
