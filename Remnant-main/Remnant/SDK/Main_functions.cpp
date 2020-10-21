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

// Function Main.Main_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMain_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main.Main_C.ReceiveBeginPlay");

	AMain_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Main.Main_C.ExecuteUbergraph_Main
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMain_C::ExecuteUbergraph_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main.Main_C.ExecuteUbergraph_Main");

	AMain_C_ExecuteUbergraph_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
