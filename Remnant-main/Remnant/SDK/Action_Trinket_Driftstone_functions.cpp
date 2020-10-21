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

// Function Action_Trinket_Driftstone.Action_Trinket_Driftstone_C.isDOT
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isDOT                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Trinket_Driftstone_C::isDOT(class UClass* Type, bool* isDOT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_Driftstone.Action_Trinket_Driftstone_C.isDOT");

	UAction_Trinket_Driftstone_C_isDOT_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isDOT != nullptr)
		*isDOT = params.isDOT;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
