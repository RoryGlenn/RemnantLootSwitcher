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

// WidgetBlueprintGeneratedClass Widget_FocusWidget.Widget_FocusWidget_C
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class UWidget_FocusWidget_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FocusWidget.Widget_FocusWidget_C");
		return ptr;
	}


	void GetCrafting(class UCraftingComponent** Crafting);
	void GetInventory(class UInventoryComponent** Inventory);
	void GetContextActor(class AActor** Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
