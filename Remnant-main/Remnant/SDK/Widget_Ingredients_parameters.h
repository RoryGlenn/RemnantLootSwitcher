#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function Widget_Ingredients.Widget_Ingredients_C.IsScrap
struct UWidget_Ingredients_C_IsScrap_Params
{
	struct FIngredientInfo                             Ingredient;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Ingredients.Widget_Ingredients_C.BuildIngredientList
struct UWidget_Ingredients_C_BuildIngredientList_Params
{
};

// Function Widget_Ingredients.Widget_Ingredients_C.SetRecipe
struct UWidget_Ingredients_C_SetRecipe_Params
{
	struct FRecipeInfo                                 Recipe;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
