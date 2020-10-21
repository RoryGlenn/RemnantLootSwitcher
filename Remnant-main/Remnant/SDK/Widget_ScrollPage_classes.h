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

// WidgetBlueprintGeneratedClass Widget_ScrollPage.Widget_ScrollPage_C
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UWidget_ScrollPage_C : public UUserWidget
{
public:
	class UAdvTextBlock*                               Content;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ScrollPage.Widget_ScrollPage_C");
		return ptr;
	}


	void SetFont(const struct FSlateFontInfo& Font);
	void Set_Text(const struct FText& InText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
