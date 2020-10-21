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

// Function Character_NPC_Smite.Character_NPC_Smite_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_NPC_Smite_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC_Smite.Character_NPC_Smite_C.ReceiveBeginPlay");

	ACharacter_NPC_Smite_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_NPC_Smite.Character_NPC_Smite_C.ExecuteUbergraph_Character_NPC_Smite
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_NPC_Smite_C::ExecuteUbergraph_Character_NPC_Smite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_NPC_Smite.Character_NPC_Smite_C.ExecuteUbergraph_Character_NPC_Smite");

	ACharacter_NPC_Smite_C_ExecuteUbergraph_Character_NPC_Smite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
