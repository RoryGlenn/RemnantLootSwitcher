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

// WidgetBlueprintGeneratedClass Widget_ItemStatPrimary.Widget_ItemStatPrimary_C
// 0x00FD (FullSize[0x0352] - InheritedSize[0x0255])
class UWidget_ItemStatPrimary_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData_H1VQ[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ArrowDown;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ArrowUp;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_119;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdvTextBlock*                               StatLabel;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatValue;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0288(0x0060) (Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	bool                                               Comparing;                                                 // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn)
	unsigned char                                      UnknownData_WPT5[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInspectStat                                CompareStat;                                               // 0x02F0(0x0060) (Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	bool                                               LeftAligned_;                                              // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseLowPassComparison;                                      // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatPrimary.Widget_ItemStatPrimary_C");
		return ptr;
	}


	void LeftAligned(bool Condition);
	void Refresh();
	struct FText Get_PrevValue_Text_1();
	ESlateVisibility GetVisibility_1();
	struct FSlateColor Get_StatValue_ColorAndOpacity_1();
	struct FText Get_StatValue_Text_1();
	void Construct();
	void OnBeginPreview_Event_1();
	void OnEndPreview_Event_1();
	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatPrimary(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
