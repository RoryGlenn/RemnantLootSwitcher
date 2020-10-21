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

// WidgetBlueprintGeneratedClass Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C
// 0x0076 (FullSize[0x03C8] - InheritedSize[0x0352])
class UWidget_ItemStatPrimary_ROF_C : public UWidget_ItemStatPrimary_C
{
public:
	unsigned char                                      UnknownData_6K25[0x6];                                     // 0x0352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       ClipSizeStatName;                                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectStat                                ClipSizeStat;                                              // 0x0368(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C");
		return ptr;
	}


	struct FText Get_StatValue_Text_1();
	void Refresh();
	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatPrimary_ROF(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
