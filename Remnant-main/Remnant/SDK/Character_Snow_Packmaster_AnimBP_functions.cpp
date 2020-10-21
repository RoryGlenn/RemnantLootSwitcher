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

// Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.OnCharacterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Snow_Packmaster_AnimBP_C::OnCharacterEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.OnCharacterEvent");

	UCharacter_Snow_Packmaster_AnimBP_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UCharacter_Snow_Packmaster_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.BlueprintBeginPlay");

	UCharacter_Snow_Packmaster_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Snow_Packmaster_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.BlueprintUpdateAnimation");

	UCharacter_Snow_Packmaster_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.ExecuteUbergraph_Character_Snow_Packmaster_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Snow_Packmaster_AnimBP_C::ExecuteUbergraph_Character_Snow_Packmaster_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C.ExecuteUbergraph_Character_Snow_Packmaster_AnimBP");

	UCharacter_Snow_Packmaster_AnimBP_C_ExecuteUbergraph_Character_Snow_Packmaster_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
