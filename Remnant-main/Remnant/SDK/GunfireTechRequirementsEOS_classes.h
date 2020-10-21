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

// Class GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS
// 0x0080 (FullSize[0x0318] - InheritedSize[0x0298])
class UGunfireTechRequirementsImplEOS : public UGunfireTechRequirementsImplWin64
{
public:
	unsigned char                                      UnknownData_Y2DE[0x80];                                    // 0x0298(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS");
		return ptr;
	}


	void DLCEntitlementsUpdated();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
