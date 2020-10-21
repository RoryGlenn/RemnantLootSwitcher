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

// Function Decal_Character_Snow_Mole_Rat_Bomber.Decal_Character_Snow_Mole_Rat_Bomber_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADecal_Character_Snow_Mole_Rat_Bomber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Decal_Character_Snow_Mole_Rat_Bomber.Decal_Character_Snow_Mole_Rat_Bomber_C.UserConstructionScript");

	ADecal_Character_Snow_Mole_Rat_Bomber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Decal_Character_Snow_Mole_Rat_Bomber.Decal_Character_Snow_Mole_Rat_Bomber_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADecal_Character_Snow_Mole_Rat_Bomber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Decal_Character_Snow_Mole_Rat_Bomber.Decal_Character_Snow_Mole_Rat_Bomber_C.ReceiveBeginPlay");

	ADecal_Character_Snow_Mole_Rat_Bomber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Decal_Character_Snow_Mole_Rat_Bomber.Decal_Character_Snow_Mole_Rat_Bomber_C.ExecuteUbergraph_Decal_Character_Snow_Mole_Rat_Bomber
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADecal_Character_Snow_Mole_Rat_Bomber_C::ExecuteUbergraph_Decal_Character_Snow_Mole_Rat_Bomber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decal_Character_Snow_Mole_Rat_Bomber.Decal_Character_Snow_Mole_Rat_Bomber_C.ExecuteUbergraph_Decal_Character_Snow_Mole_Rat_Bomber");

	ADecal_Character_Snow_Mole_Rat_Bomber_C_ExecuteUbergraph_Decal_Character_Snow_Mole_Rat_Bomber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
