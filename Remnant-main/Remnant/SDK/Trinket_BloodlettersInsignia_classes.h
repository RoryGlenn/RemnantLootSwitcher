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

// BlueprintGeneratedClass Trinket_BloodlettersInsignia.Trinket_BloodlettersInsignia_C
// 0x0010 (FullSize[0x05F4] - InheritedSize[0x05E4])
class ATrinket_BloodlettersInsignia_C : public AItem_Trinket_TriggerOnEquip_C
{
public:
	unsigned char                                      UnknownData_F3EL[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BleedLifesteal;                                            // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_BloodlettersInsignia.Trinket_BloodlettersInsignia_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
