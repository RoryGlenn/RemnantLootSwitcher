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

// Function GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS.DLCEntitlementsUpdated
// (Final, Native, Protected)
void UGunfireTechRequirementsImplEOS::DLCEntitlementsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS.DLCEntitlementsUpdated");

	UGunfireTechRequirementsImplEOS_DLCEntitlementsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
