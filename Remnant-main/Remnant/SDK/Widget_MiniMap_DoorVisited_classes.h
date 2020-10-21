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

// WidgetBlueprintGeneratedClass Widget_MiniMap_DoorVisited.Widget_MiniMap_DoorVisited_C
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UWidget_MiniMap_DoorVisited_C : public URemnantMiniMapWidget
{
public:
	class UMiniMapImage*                               MiniMapImage_159;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_DoorVisited.Widget_MiniMap_DoorVisited_C");
		return ptr;
	}


	struct FWidgetTransform UpdateMiniMapWidget(const struct FWidgetTransform& InTransform);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
