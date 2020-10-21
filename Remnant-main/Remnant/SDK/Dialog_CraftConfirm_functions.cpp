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

// Function Dialog_CraftConfirm.Dialog_CraftConfirm_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             RecipeInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
void ADialog_CraftConfirm_C::Init(const struct FRecipeInfo& RecipeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CraftConfirm.Dialog_CraftConfirm_C.Init");

	ADialog_CraftConfirm_C_Init_Params params;
	params.RecipeInfo = RecipeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
