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

// Function BP_Mod_FrozenMist_ProjectileVisualization.BP_Mod_FrozenMist_ProjectileVisualization_C.GetRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Mod_FrozenMist_ProjectileVisualization_C::GetRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_FrozenMist_ProjectileVisualization.BP_Mod_FrozenMist_ProjectileVisualization_C.GetRadius");

	ABP_Mod_FrozenMist_ProjectileVisualization_C_GetRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
