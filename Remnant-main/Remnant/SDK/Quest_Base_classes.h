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

// BlueprintGeneratedClass Quest_Base.Quest_Base_C
// 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
class AQuest_Base_C : public ARemnantQuest
{
public:
	bool                                               Quest_Giver_is_Defend_Objective;                           // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OUTB[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacterGunfire*                           Quest_Giver_Actor;                                         // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               RewardTags;                                                // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Base.Quest_Base_C");
		return ptr;
	}


	void GetHost(class AActor** HostTargetPlayer);
	void SetAIPersistent(class AActor* Actor);
	void CleanupSpawnsForEventRegion(class URemnantQuestEventRegion* EventRegion, bool Kill);
	void ShowExitPrompt(class URemnantQuestTile* QuestTile);
	void RemoveKey(const struct FName& Key);
	void SetKey(const struct FName& Key, const struct FName& Value);
	void HasKey(const struct FName& Key, bool* Out);
	void SetInvulnerable(class AActor* Actor, TEnumAsByte<ENUM_InvulnerableType> Invulnerability);
	void TriggerDialogResponseForEventRegion(class URemnantQuestEventRegion* EventRegion, const struct FName& DialogResponse);
	void RegisterDefendObjective(class URemnantQuestEntity* QuestEntity, bool Register);
	void SetRewardTag(const struct FName& Tag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
