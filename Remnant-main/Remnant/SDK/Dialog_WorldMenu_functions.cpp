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

// Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode
// (Public, BlueprintCallable, BlueprintEvent)
void ADialog_WorldMenu_C::BeginSurvivalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode");

	ADialog_WorldMenu_C_BeginSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_WorldMenu_C::SetContext(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext");

	ADialog_WorldMenu_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
