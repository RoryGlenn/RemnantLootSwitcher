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

// BlueprintGeneratedClass Character_Snow_Mole_Rat_Bomber.Character_Snow_Mole_Rat_Bomber_C
// 0x0061 (FullSize[0x0CB9] - InheritedSize[0x0C58])
class ACharacter_Snow_Mole_Rat_Bomber_C : public ACharacter_Snow_Mole_Rat_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTweenComponent*                             Tween;                                                     // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Bomb_01_Upper;                                             // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Bomb_02_Upper;                                             // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Bomb_01_Lower;                                             // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Bomb_02_Lower;                                             // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            WP_AOE;                                                    // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Explode;                                                   // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KC76[0x7];                                     // 0x0C91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Explode_VFX;                                               // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Explode_SFX;                                               // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ExplosionDamageType;                                       // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplosionMaxRadius;                                        // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExplosionPowerOverride;                                    // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsExploding;                                               // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Mole_Rat_Bomber.Character_Snow_Mole_Rat_Bomber_C");
		return ptr;
	}


	void ExplodeTellTween();
	void ExplodeFX();
	void OnDetonate();
	void OnExplode();
	void OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void ExplodeTellFX();
	void ReceiveBeginPlay();
	void ExplodeTellVFX();
	void InterruptExplode();
	void ExecuteUbergraph_Character_Snow_Mole_Rat_Bomber(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
