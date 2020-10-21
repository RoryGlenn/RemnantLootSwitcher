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

// WidgetBlueprintGeneratedClass Widget_MiniMap_Waypoint.Widget_MiniMap_Waypoint_C
// 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
class UWidget_MiniMap_Waypoint_C : public URemnantMiniMapWidget
{
public:
	class UMiniMapImage*                               MiniMapImage_1;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniMapImage*                               MiniMapImage_193;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Waypoint.Widget_MiniMap_Waypoint_C");
		return ptr;
	}


	struct FWidgetTransform UpdateMiniMapWidget(const struct FWidgetTransform& InTransform);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
