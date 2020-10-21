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

// Function Quest_Event_Simulacrum_Snow.Quest_Event_Simulacrum_Snow_C.AllDestroyed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           All_Nexuses_Destroyed          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AQuest_Event_Simulacrum_Snow_C::AllDestroyed(bool* All_Nexuses_Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Event_Simulacrum_Snow.Quest_Event_Simulacrum_Snow_C.AllDestroyed");

	AQuest_Event_Simulacrum_Snow_C_AllDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (All_Nexuses_Destroyed != nullptr)
		*All_Nexuses_Destroyed = params.All_Nexuses_Destroyed;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
