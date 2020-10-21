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

// Function Homestead_Key.Homestead_Key_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHomestead_Key_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Homestead_Key.Homestead_Key_C.UserConstructionScript");

	AHomestead_Key_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
