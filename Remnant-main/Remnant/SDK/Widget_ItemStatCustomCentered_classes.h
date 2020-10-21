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

// WidgetBlueprintGeneratedClass Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C
// 0x0073 (FullSize[0x02C8] - InheritedSize[0x0255])
class UWidget_ItemStatCustomCentered_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData_QJ1Q[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAdvTextBlock*                               StatName;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0268(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatCustomCentered.Widget_ItemStatCustomCentered_C");
		return ptr;
	}


	void Refresh();
	void Construct();
	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void ExecuteUbergraph_Widget_ItemStatCustomCentered(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
