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

// BlueprintGeneratedClass Action_AOE_Flop.Action_AOE_Flop_C
// 0x000E (FullSize[0x028C] - InheritedSize[0x027E])
class UAction_AOE_Flop_C : public UAction_AOE_Attack_C
{
public:
	unsigned char                                      UnknownData_S1C1[0x2];                                     // 0x027E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                    // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Flop.Action_AOE_Flop_C");
		return ptr;
	}


	void GetDamageScalar(float* Scalar);
	void GetDamage(float* Damage);
	void OnActionStart();
	void ExecuteUbergraph_Action_AOE_Flop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
