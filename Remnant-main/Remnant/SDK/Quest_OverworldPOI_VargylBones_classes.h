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

// BlueprintGeneratedClass Quest_OverworldPOI_VargylBones.Quest_OverworldPOI_VargylBones_C
// 0x0028 (FullSize[0x0568] - InheritedSize[0x0540])
class AQuest_OverworldPOI_VargylBones_C : public ARemnantQuest
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UQuestObjective*                             ReceiveSword;                                              // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Sword;                                                     // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Waypoint;                                                  // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           POI;                                                       // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OverworldPOI_VargylBones.Quest_OverworldPOI_VargylBones_C");
		return ptr;
	}


	void BndEvt__Sword_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void OnCollected_Event_1();
	void CompleteObjectiveSword();
	void BndEvt__ReceiveSword_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void OnQuestComplete(EQuestResult Result);
	void ExecuteUbergraph_Quest_OverworldPOI_VargylBones(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
