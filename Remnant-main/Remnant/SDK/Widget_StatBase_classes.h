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

// WidgetBlueprintGeneratedClass Widget_StatBase.Widget_StatBase_C
// 0x000C (FullSize[0x0255] - InheritedSize[0x0249])
class UWidget_StatBase_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_N660[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       StatNameID;                                                // 0x024C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatBase.Widget_StatBase_C");
		return ptr;
	}


	void Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo);
	void InitFromInspectInfo(const struct FInspectInfo& InspectInfo, bool Comparing, const struct FInspectInfo& InspectInfoCompare);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
