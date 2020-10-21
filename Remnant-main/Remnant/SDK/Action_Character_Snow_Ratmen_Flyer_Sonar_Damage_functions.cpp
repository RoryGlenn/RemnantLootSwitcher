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

// Function Action_Character_Snow_Ratmen_Flyer_Sonar_Damage.Action_Character_Snow_Ratmen_Flyer_Sonar_Damage_C.GetTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Character_Snow_Ratmen_Flyer_Sonar_Damage_C::GetTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Snow_Ratmen_Flyer_Sonar_Damage.Action_Character_Snow_Ratmen_Flyer_Sonar_Damage_C.GetTime");

	UAction_Character_Snow_Ratmen_Flyer_Sonar_Damage_C_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
