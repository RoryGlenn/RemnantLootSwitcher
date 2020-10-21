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

// Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_City_BacktrackDoor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.ReceiveBeginPlay");

	AInteractive_City_BacktrackDoor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.AttemptedOpen
// (BlueprintCallable, BlueprintEvent)
void AInteractive_City_BacktrackDoor_C::AttemptedOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.AttemptedOpen");

	AInteractive_City_BacktrackDoor_C_AttemptedOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.ExecuteUbergraph_Interactive_City_BacktrackDoor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_City_BacktrackDoor_C::ExecuteUbergraph_Interactive_City_BacktrackDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.ExecuteUbergraph_Interactive_City_BacktrackDoor");

	AInteractive_City_BacktrackDoor_C_ExecuteUbergraph_Interactive_City_BacktrackDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.PlayerAttemptedToOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AInteractive_City_BacktrackDoor_C::PlayerAttemptedToOpen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C.PlayerAttemptedToOpen__DelegateSignature");

	AInteractive_City_BacktrackDoor_C_PlayerAttemptedToOpen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
