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

// BlueprintGeneratedClass Quest_Boss_RatRider.Quest_Boss_RatRider_C
// 0x0008 (FullSize[0x0698] - InheritedSize[0x0690])
class AQuest_Boss_RatRider_C : public AQuest_POI_Boss_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Boss_RatRider.Quest_Boss_RatRider_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void BndEvt__Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor* Actor);
	void ExecuteUbergraph_Quest_Boss_RatRider(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
