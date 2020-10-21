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

// WidgetBlueprintGeneratedClass Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C
// 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
class UWidget_ItemStatCustomLeft_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAdvTextBlock*                               StatName;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0250(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Widget_ItemStatCustomLeft(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
