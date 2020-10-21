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

// BlueprintGeneratedClass Action_Trinket_VulcansDetonator.Action_Trinket_VulcansDetonator_C
// 0x0000 (FullSize[0x02C3] - InheritedSize[0x02C3])
class UAction_Trinket_VulcansDetonator_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trinket_VulcansDetonator.Action_Trinket_VulcansDetonator_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
