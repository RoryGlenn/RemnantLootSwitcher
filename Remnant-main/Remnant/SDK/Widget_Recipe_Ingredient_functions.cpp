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

// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.Get_Icon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidget_Recipe_Ingredient_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.Get_Icon_Brush_1");

	UWidget_Recipe_Ingredient_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.HasRequiredQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Recipe_Ingredient_C::HasRequiredQuantity(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.HasRequiredQuantity");

	UWidget_Recipe_Ingredient_C_HasRequiredQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWidget_Recipe_Ingredient_C::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetTextColor");

	UWidget_Recipe_Ingredient_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetIngredientAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Recipe_Ingredient_C::GetIngredientAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetIngredientAmount");

	UWidget_Recipe_Ingredient_C_GetIngredientAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetIngredientName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_Recipe_Ingredient_C::GetIngredientName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetIngredientName");

	UWidget_Recipe_Ingredient_C_GetIngredientName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
