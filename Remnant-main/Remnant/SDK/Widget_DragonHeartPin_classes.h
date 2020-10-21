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

// WidgetBlueprintGeneratedClass Widget_DragonHeartPin.Widget_DragonHeartPin_C
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UWidget_DragonHeartPin_C : public UUserWidget
{
public:
	class UImage*                                      DragonHeartPin;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DragonHeartPin.Widget_DragonHeartPin_C");
		return ptr;
	}


	void SetEnabled(bool Enabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
