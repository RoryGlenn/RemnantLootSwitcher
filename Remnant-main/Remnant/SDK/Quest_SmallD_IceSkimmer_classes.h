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

// BlueprintGeneratedClass Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C
// 0x0059 (FullSize[0x05E9] - InheritedSize[0x0590])
class AQuest_SmallD_IceSkimmer_C : public AQuest_Dungeon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantQuestSubQuest*                       Packmaster;                                                // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestLink*                           LinkToOverworld;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        LockedDoorTrigger;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        PackmasterCheckTrigger;                                    // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         ArmorSetReward;                                            // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         NPCSmite;                                                  // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         HullDoor;                                                  // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         NPCSebum;                                                  // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               HasSeenLoot;                                               // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PY2J[0x7];                                     // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemnantQuestEntity*                         NewVar_1;                                                  // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SelfChatter;                                               // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SmallD_IceSkimmer.Quest_SmallD_IceSkimmer_C");
		return ptr;
	}


	void OnCompleteQuest();
	void TuskTradeArmor();
	void OnQuestComplete(EQuestResult Result);
	void BndEvt__ApproachLockedDoor_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter* Player);
	void BndEvt__PackmasterSpawnCheck_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter* Player);
	void UpdateEntityVariables();
	void BndEvt__ArmorSetReward_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void OnInteract_ArmorSet(const struct FName& StateName, class AActor* Other);
	void InspectArmor();
	void SetSmiteDoorOpen();
	void ExecuteUbergraph_Quest_SmallD_IceSkimmer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
