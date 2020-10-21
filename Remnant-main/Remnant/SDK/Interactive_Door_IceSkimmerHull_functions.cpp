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

// Function Interactive_Door_IceSkimmerHull.Interactive_Door_IceSkimmerHull_C.UnlockedDoor
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Door_IceSkimmerHull_C::UnlockedDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Door_IceSkimmerHull.Interactive_Door_IceSkimmerHull_C.UnlockedDoor");

	AInteractive_Door_IceSkimmerHull_C_UnlockedDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Door_IceSkimmerHull.Interactive_Door_IceSkimmerHull_C.ExecuteUbergraph_Interactive_Door_IceSkimmerHull
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Door_IceSkimmerHull_C::ExecuteUbergraph_Interactive_Door_IceSkimmerHull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Door_IceSkimmerHull.Interactive_Door_IceSkimmerHull_C.ExecuteUbergraph_Interactive_Door_IceSkimmerHull");

	AInteractive_Door_IceSkimmerHull_C_ExecuteUbergraph_Interactive_Door_IceSkimmerHull_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
