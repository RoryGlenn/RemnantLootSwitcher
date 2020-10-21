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

// Function Interactive_Chain_B.Interactive_Chain_B_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInteractive_Chain_B_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Chain_B.Interactive_Chain_B_C.UserConstructionScript");

	AInteractive_Chain_B_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Chain_B.Interactive_Chain_B_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Chain_B_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Chain_B.Interactive_Chain_B_C.ReceiveActorBeginOverlap");

	AInteractive_Chain_B_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Chain_B.Interactive_Chain_B_C.MulticastPushBell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Chain_B_C::MulticastPushBell(const struct FVector& Source, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Chain_B.Interactive_Chain_B_C.MulticastPushBell");

	AInteractive_Chain_B_C_MulticastPushBell_Params params;
	params.Source = Source;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Chain_B.Interactive_Chain_B_C.ExecuteUbergraph_Interactive_Chain_B
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Chain_B_C::ExecuteUbergraph_Interactive_Chain_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Chain_B.Interactive_Chain_B_C.ExecuteUbergraph_Interactive_Chain_B");

	AInteractive_Chain_B_C_ExecuteUbergraph_Interactive_Chain_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
