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

// BlueprintGeneratedClass Quest_Campaign_Clementine.Quest_Campaign_Clementine_C
// 0x0098 (FullSize[0x05E0] - InheritedSize[0x0548])
class AQuest_Campaign_Clementine_C : public AQuest_RootQuest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UQuestObjective*                             ExploreWardPrime;                                          // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             FinalPortal;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             FindTheWoman;                                              // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             ExploreReisum;                                             // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             SearchForWardPrime;                                        // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       WardPrime_To_Rural;                                        // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Snow_To_WardPrime;                                         // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       WardPrime_To_Snow;                                         // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Rural_To_WardPrime;                                        // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestLink*                           WardPrime_POI;                                             // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestSubQuest*                       Ward13;                                                    // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestSubQuest*                       WardPrime;                                                 // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestLink*                           Snow_End;                                                  // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestLink*                           Snow_Start;                                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestSubQuest*                       Snow;                                                      // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestLink*                           Rural_End;                                                 // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestLink*                           Rural_Start;                                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestSubQuest*                       Rural;                                                     // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_Clementine.Quest_Campaign_Clementine_C");
		return ptr;
	}


	void FoundWardPrime();
	void BeginReisumWorld();
	void StartRuralArea();
	void SeekClementine();
	void FoundClementine();
	void EnterFinalPortal();
	void DefeatedHarsgaard();
	void ExecuteUbergraph_Quest_Campaign_Clementine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
