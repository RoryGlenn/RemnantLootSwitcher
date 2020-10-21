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

// BlueprintGeneratedClass Quest_Dungeon_Base.Quest_Dungeon_Base_C
// 0x0030 (FullSize[0x0590] - InheritedSize[0x0560])
class AQuest_Dungeon_Base_C : public AQuest_Base_C
{
public:
	class URemnantQuestSubQuest*                       TraitBook;                                                 // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestAIDirector*                     Zone_AIDirector;                                           // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Checkpoint;                                                // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           End;                                                       // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           Start;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZone*                           Zone;                                                      // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Dungeon_Base.Quest_Dungeon_Base_C");
		return ptr;
	}


	void DoEncounter(class URemnantQuestZone* Zone, class USpawnTable* SpawnTable, TArray<struct FName>* SpawnTags, class UEncounterInstance** EncounterInstance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
