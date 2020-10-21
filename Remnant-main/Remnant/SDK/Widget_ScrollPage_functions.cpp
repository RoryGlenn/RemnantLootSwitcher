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

// Function Widget_ScrollPage.Widget_ScrollPage_C.SetFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ScrollPage_C::SetFont(const struct FSlateFontInfo& Font)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ScrollPage.Widget_ScrollPage_C.SetFont");

	UWidget_ScrollPage_C_SetFont_Params params;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ScrollPage.Widget_ScrollPage_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ScrollPage_C::Set_Text(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ScrollPage.Widget_ScrollPage_C.Set Text");

	UWidget_ScrollPage_C_Set_Text_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
