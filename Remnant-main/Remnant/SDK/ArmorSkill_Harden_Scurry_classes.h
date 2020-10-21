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

// BlueprintGeneratedClass ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C
// 0x0011 (FullSize[0x02D4] - InheritedSize[0x02C3])
class UArmorSkill_Harden_Scurry_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_N7AA[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MoveSpeedMod;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Harden_Scurry.ArmorSkill_Harden_Scurry_C");
		return ptr;
	}


	void OnActionStart();
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_ArmorSkill_Harden_Scurry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
