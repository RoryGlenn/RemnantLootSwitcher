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

// BlueprintGeneratedClass Action_Invulnerable.Action_Invulnerable_C
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class UAction_Invulnerable_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Invulnerable.Action_Invulnerable_C");
		return ptr;
	}


	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
