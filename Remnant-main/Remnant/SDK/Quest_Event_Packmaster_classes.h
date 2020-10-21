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

// BlueprintGeneratedClass Quest_Event_Packmaster.Quest_Event_Packmaster_C
// 0x0010 (FullSize[0x0588] - InheritedSize[0x0578])
class AQuest_Event_Packmaster_C : public AQuest_Event_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UQuestObjective*                             FindMastersTusk;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Event_Packmaster.Quest_Event_Packmaster_C");
		return ptr;
	}


	void BndEvt__Vignette_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void ExecuteUbergraph_Quest_Event_Packmaster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
