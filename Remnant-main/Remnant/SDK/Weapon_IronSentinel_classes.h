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

// BlueprintGeneratedClass Weapon_IronSentinel.Weapon_IronSentinel_C
// 0x0010 (FullSize[0x0CE0] - InheritedSize[0x0CD0])
class AWeapon_IronSentinel_C : public AWeapon_Gun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_IronSentinel.Weapon_IronSentinel_C");
		return ptr;
	}


	void OnComputeStats();
	void ExecuteUbergraph_Weapon_IronSentinel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
