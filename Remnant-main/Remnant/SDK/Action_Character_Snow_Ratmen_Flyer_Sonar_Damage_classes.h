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

// BlueprintGeneratedClass Action_Character_Snow_Ratmen_Flyer_Sonar_Damage.Action_Character_Snow_Ratmen_Flyer_Sonar_Damage_C
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UAction_Character_Snow_Ratmen_Flyer_Sonar_Damage_C : public UAction_Character_Root_Screamer_Damage_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Snow_Ratmen_Flyer_Sonar_Damage.Action_Character_Snow_Ratmen_Flyer_Sonar_Damage_C");
		return ptr;
	}


	void GetTime(float* Time);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
