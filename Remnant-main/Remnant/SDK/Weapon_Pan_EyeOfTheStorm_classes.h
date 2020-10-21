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

// BlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C
// 0x0018 (FullSize[0x0CE8] - InheritedSize[0x0CD0])
class AWeapon_Pan_EyeOfTheStorm_C : public AWeapon_LongGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             VFX_Crystal;                                               // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
