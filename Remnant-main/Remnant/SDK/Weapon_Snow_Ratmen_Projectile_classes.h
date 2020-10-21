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

// BlueprintGeneratedClass Weapon_Snow_Ratmen_Projectile.Weapon_Snow_Ratmen_Projectile_C
// 0x0008 (FullSize[0x04D0] - InheritedSize[0x04C8])
class AWeapon_Snow_Ratmen_Projectile_C : public ABP_Projectile_Stick_Sphere_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Snow_Ratmen_Projectile.Weapon_Snow_Ratmen_Projectile_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Weapon_Snow_Ratmen_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
