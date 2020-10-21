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

// WidgetBlueprintGeneratedClass Widget_Buffs.Widget_Buffs_C
// 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
class UWidget_Buffs_C : public UWIdget_StatusBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              List;                                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Buffs.Widget_Buffs_C");
		return ptr;
	}


	void RemoveAction(class UAction_Buff_C* StatusEffect);
	void AddAction(class UAction_Buff_C* Buff);
	void Construct();
	void OnActionRemoved_Event_1(class UActionBase* Action);
	void On_Action_Added(class UActionBase* Action);
	void ExecuteUbergraph_Widget_Buffs(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
