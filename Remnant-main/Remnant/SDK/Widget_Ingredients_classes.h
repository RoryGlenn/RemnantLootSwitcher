#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Ingredients.Widget_Ingredients_C
// 0x003C (FullSize[0x0285] - InheritedSize[0x0249])
class UWidget_Ingredients_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_YM9D[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVerticalBox*                                Ingredients;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRecipeInfo                                 Recipe;                                                    // 0x0258(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              IngredientSpacing;                                         // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowScrap;                                                 // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Ingredients.Widget_Ingredients_C");
		return ptr;
	}


	void IsScrap(const struct FIngredientInfo& Ingredient, bool* Out);
	void BuildIngredientList();
	void SetRecipe(const struct FRecipeInfo& Recipe);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
