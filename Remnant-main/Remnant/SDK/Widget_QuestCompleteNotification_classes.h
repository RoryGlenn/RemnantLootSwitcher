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

// WidgetBlueprintGeneratedClass Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C
// 0x0017 (FullSize[0x0260] - InheritedSize[0x0249])
class UWidget_QuestCompleteNotification_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_RPO4[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                QuestUpdates;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C");
		return ptr;
	}


	void ObjectiveSuccess(const struct FRemnantQuestReward& QuestReward);
	void InitQuests();
	void QuestSuccess(const struct FRemnantQuestReward& QuestReward);
	void QuestComplete(class AQuest* Quest);
	void FindWidgetForQuest(class AQuest* Quest, class UWidget_QuestNotification_Quest_C** Widget);
	void UpdateQuest(class ARemnantQuest* Quest);
	void Construct();
	void OnNotifyQuestReward_Event_1(const struct FRemnantQuestReward& Reward);
	void ExecuteUbergraph_Widget_QuestCompleteNotification(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
