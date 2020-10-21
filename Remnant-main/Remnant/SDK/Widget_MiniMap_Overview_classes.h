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

// WidgetBlueprintGeneratedClass Widget_MiniMap_Overview.Widget_MiniMap_Overview_C
// 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
class UWidget_MiniMap_Overview_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMapPanel*                               MiniMap_Widgets;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMiniMapDisplayActor*                        CurrentDisplayActor;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Overview.Widget_MiniMap_Overview_C");
		return ptr;
	}


	void TryUnregisterPanel();
	void InitMiniMapWidget(class AMiniMapDisplayActor* DisplayActor);
	void Destruct();
	void ExecuteUbergraph_Widget_MiniMap_Overview(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
