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

// WidgetBlueprintGeneratedClass Widget_StatList.Widget_StatList_C
// 0x00B7 (FullSize[0x0300] - InheritedSize[0x0249])
class UWidget_StatList_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_3COZ[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectInfo                                InspectInfo;                                               // 0x0260(0x0080) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FName                                       Category;                                                  // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Spacing;                                                   // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AttributeList_;                                            // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_1XUI[0x3];                                     // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               HideStat;                                                  // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatList.Widget_StatList_C");
		return ptr;
	}


	void GetWidgetForStat(const struct FName& Name, class UWidget_ItemStat_C** Widget);
	void BuildList();
	void SetInspectInfo(const struct FInspectInfo& Info);
	void Construct();
	void ExecuteUbergraph_Widget_StatList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
