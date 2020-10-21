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

// Function Dialog_TravelMenu.Dialog_TravelMenu_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_TravelMenu_C::SetContext(class AActor* Context, class UUserWidget* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_TravelMenu.Dialog_TravelMenu_C.SetContext");

	ADialog_TravelMenu_C_SetContext_Params params;
	params.Context = Context;
	params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
