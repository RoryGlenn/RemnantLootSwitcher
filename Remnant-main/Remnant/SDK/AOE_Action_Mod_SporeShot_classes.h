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

// BlueprintGeneratedClass AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C
// 0x000A (FullSize[0x0288] - InheritedSize[0x027E])
class UAOE_Action_Mod_SporeShot_C : public UAction_AOE_Attack_C
{
public:
	unsigned char                                      UnknownData_Z4B6[0x2];                                     // 0x027E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_AOE_Action_Mod_SporeShot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
