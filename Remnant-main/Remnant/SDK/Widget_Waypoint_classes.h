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

// WidgetBlueprintGeneratedClass Widget_Waypoint.Widget_Waypoint_C
// 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
class UWidget_Waypoint_C : public UFocusWidget
{
public:
	class UTextBlock*                                  Label;                                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FZoneLinkInfo                               WaypointInfo;                                              // 0x02B8(0x0078) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Waypoint.Widget_Waypoint_C");
		return ptr;
	}


	struct FText Get_Label_Text_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
