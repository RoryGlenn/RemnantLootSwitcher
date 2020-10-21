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

// BlueprintGeneratedClass Snow_Ratmen_Flyer_Projectile.Snow_Ratmen_Flyer_Projectile_C
// 0x0014 (FullSize[0x04E0] - InheritedSize[0x04CC])
class ASnow_Ratmen_Flyer_Projectile_C : public ABP_Projectile_Stick_Box_Base_C
{
public:
	unsigned char                                      UnknownData_N04J[0x4];                                     // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              UniqueActorArray;                                          // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Snow_Ratmen_Flyer_Projectile.Snow_Ratmen_Flyer_Projectile_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
