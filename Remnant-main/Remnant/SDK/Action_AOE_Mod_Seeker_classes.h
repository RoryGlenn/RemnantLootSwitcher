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

// BlueprintGeneratedClass Action_AOE_Mod_Seeker.Action_AOE_Mod_Seeker_C
// 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
class UAction_AOE_Mod_Seeker_C : public UAction_AOE_ForceImpulse_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Mod_Seeker.Action_AOE_Mod_Seeker_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
