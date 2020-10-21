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

// Class OnlineSubsystemSteamEOS.GunfireCrossplayManager
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGunfireCrossplayManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_VGWC[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamEOS.GunfireCrossplayManager");
		return ptr;
	}


	void LoginPersistenceAuth();
	void LoginEpicFromSteam(bool bCreateHeadlessAccount);
	void LinkEpicFromSteam();
	static class UGunfireCrossplayManager* STATIC_GetGunfireCrossplayManager(class UObject* WorldContextObject);
	void DeletePersistenceAuth();
	void BeginCrossplayLogin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
