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

// BlueprintGeneratedClass Weapon_Pan_CurseOfTheJungleGod.Weapon_Pan_CurseOfTheJungleGod_C
// 0x0008 (FullSize[0x0CD8] - InheritedSize[0x0CD0])
class AWeapon_Pan_CurseOfTheJungleGod_C : public AWeapon_HandGun_Base_C
{
public:
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_CurseOfTheJungleGod.Weapon_Pan_CurseOfTheJungleGod_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
