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

// WidgetBlueprintGeneratedClass Widget_ItemStatMiniHorizontal.Widget_ItemStatMiniHorizontal_C
// 0x00E3 (FullSize[0x0338] - InheritedSize[0x0255])
class UWidget_ItemStatMiniHorizontal_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData_75YT[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Icon;                                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatValue;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0270(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               Comparing;                                                 // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_8RJ0[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInspectStat                                CompareStat;                                               // 0x02D8(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatMiniHorizontal.Widget_ItemStatMiniHorizontal_C");
		return ptr;
	}


	void Refresh();
	void Construct();
	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatMiniHorizontal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
