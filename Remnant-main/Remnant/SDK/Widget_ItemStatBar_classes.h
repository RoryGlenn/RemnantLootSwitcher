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

// WidgetBlueprintGeneratedClass Widget_ItemStatBar.Widget_ItemStatBar_C
// 0x00EB (FullSize[0x0340] - InheritedSize[0x0255])
class UWidget_ItemStatBar_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData_2VVI[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                Bar;                                                       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                CompareBar;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Label;                                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0278(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               Comparing;                                                 // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2LU1[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInspectStat                                CompareStat;                                               // 0x02E0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatBar.Widget_ItemStatBar_C");
		return ptr;
	}


	void Refresh();
	void Construct();
	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
