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

// Function Action_Mod_SingleTarget_FireProjectile_ColdSpear.Action_Mod_SingleTarget_FireProjectile_ColdSpear_C.GetFiringDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UAction_Mod_SingleTarget_FireProjectile_ColdSpear_C::GetFiringDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SingleTarget_FireProjectile_ColdSpear.Action_Mod_SingleTarget_FireProjectile_ColdSpear_C.GetFiringDirection");

	UAction_Mod_SingleTarget_FireProjectile_ColdSpear_C_GetFiringDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
