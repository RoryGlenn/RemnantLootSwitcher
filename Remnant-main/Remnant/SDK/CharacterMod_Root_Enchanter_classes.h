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

// BlueprintGeneratedClass CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C
// 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
class UCharacterMod_Root_Enchanter_C : public UCharacterMod_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                TimerHandle;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              Frequency;                                                 // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScatterMin;                                                // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScatterMax;                                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SpawnCount;                                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ARemnantCharacter*>                   PlayerRefs;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C");
		return ptr;
	}


	struct FVector Get_Player_Location(bool* ValidIndex);
	void OnActionStart();
	void OnSpawn(const struct FVector& SpawnLocation);
	void ReturnToTimer();
	void OnStartTimer();
	void OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void OnCharacterEvent(const struct FName& EventName);
	void ExecuteUbergraph_CharacterMod_Root_Enchanter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
