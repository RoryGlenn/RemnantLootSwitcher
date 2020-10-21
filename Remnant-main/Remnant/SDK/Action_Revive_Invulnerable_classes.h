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

// BlueprintGeneratedClass Action_Revive_Invulnerable.Action_Revive_Invulnerable_C
// 0x0000 (FullSize[0x02C3] - InheritedSize[0x02C3])
class UAction_Revive_Invulnerable_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Revive_Invulnerable.Action_Revive_Invulnerable_C");
		return ptr;
	}


	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
