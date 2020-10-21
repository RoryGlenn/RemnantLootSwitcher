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

// BlueprintGeneratedClass Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C
// 0x0040 (FullSize[0x0C58] - InheritedSize[0x0C18])
class ACharacter_Snow_Mole_Rat_C : public ABP_Monster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             HealthBar;                                                 // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Combat_Eye_L1;                                             // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Combat_Eye_R1;                                             // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Summoned_Eye_L;                                            // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Summoned_Eye_R;                                            // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Legs;                                        // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               WeaponPhantom_Head;                                        // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Mole_Rat.Character_Snow_Mole_Rat_C");
		return ptr;
	}


	void FX_Combat_Eyes();
	void FX_Summoned_Eyes();
	void FX_Summ_Eye_Off();
	void FX_Combat_Eyes_Off();
	void FX_DeathFX();
	void ReceiveBeginPlay();
	void OnEnterDown();
	void OnExitDown();
	void OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void CombatEnter();
	void CombatExit();
	void ExecuteUbergraph_Character_Snow_Mole_Rat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
