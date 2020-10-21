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

// WidgetBlueprintGeneratedClass Widget_Debug_Properties.Widget_Debug_Properties_C
// 0x0034 (FullSize[0x0274] - InheritedSize[0x0240])
class UWidget_Debug_Properties_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Label;                                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Properties;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title;                                                     // 0x0258(0x0018) (Edit, BlueprintVisible)
	float                                              Spacing;                                                   // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Debug_Properties.Widget_Debug_Properties_C");
		return ptr;
	}


	void SetComponent(class UQuestComponent* QuestComponent);
	void ClearProperties();
	void AddProperty(const struct FText& Name, const struct FText& Value);
	void Construct();
	void ExecuteUbergraph_Widget_Debug_Properties(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
