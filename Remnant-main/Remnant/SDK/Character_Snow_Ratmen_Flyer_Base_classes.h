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

// BlueprintGeneratedClass Character_Snow_Ratmen_Flyer_Base.Character_Snow_Ratmen_Flyer_Base_C
// 0x0028 (FullSize[0x0C40] - InheritedSize[0x0C18])
class ACharacter_Snow_Ratmen_Flyer_Base_C : public ABP_Monster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Body_Items;                                                // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             HealthBar;                                                 // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Weapon_Phantom_Legs;                                       // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FlyerProjectile;                                           // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Ratmen_Flyer_Base.Character_Snow_Ratmen_Flyer_Base_C");
		return ptr;
	}


	void OnThrowRight();
	void HideKnifeLeft();
	void HideKnifeRight();
	void OnThrowLeft();
	void ExecuteUbergraph_Character_Snow_Ratmen_Flyer_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
