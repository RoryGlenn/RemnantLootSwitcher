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

// Class GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam
// 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
class UGunfireTechRequirementsImplSteam : public UGunfireTechRequirementsImplWin64
{
public:
	unsigned char                                      UnknownData_E4ZZ[0x28];                                    // 0x0298(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam");
		return ptr;
	}


	void TriggerOnExteralAuthFailed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
