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

// WidgetBlueprintGeneratedClass Widget_ItemStatSkillTier.Widget_ItemStatSkillTier_C
// 0x008B (FullSize[0x02E0] - InheritedSize[0x0255])
class UWidget_ItemStatSkillTier_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData_UFGF[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAdvTextBlock*                               Label;                                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdvTextBlock*                               LabelCurrent;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdvTextBlock*                               SetLabel;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdvTextBlock*                               SetLabelCurrent;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0280(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatSkillTier.Widget_ItemStatSkillTier_C");
		return ptr;
	}


	void Refresh();
	void Construct();
	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatSkillTier(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
