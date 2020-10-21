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

// Function GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam.TriggerOnExteralAuthFailed
// (Final, Native, Protected)
void UGunfireTechRequirementsImplSteam::TriggerOnExteralAuthFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam.TriggerOnExteralAuthFailed");

	UGunfireTechRequirementsImplSteam_TriggerOnExteralAuthFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
