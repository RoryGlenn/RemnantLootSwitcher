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

// Class GunfireTechRequirements.EntitlementComponent
// 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
class UEntitlementComponent : public UActorComponent
{
public:
	ELicensedContent                                   RequiredLicense;                                           // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERevokeType                                        RevokeType;                                                // 0x00F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZUN[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLicenseChecked;                                          // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLicenseRevokedOverride;                                  // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YP0B[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirements.EntitlementComponent");
		return ptr;
	}


	void ShowRevokedDialog();
	void RevokeLicense();
	static bool STATIC_HasEntitlement(class UObject* WorldContextObject, class UObject* Object, bool NotifyIfUnlicensed);
	static ELicensedContent STATIC_GetRequiredLicense(class UObject* Object);
	void CheckLicense();
};

// Class GunfireTechRequirements.GunfireTechRequirementsImpl
// 0x0218 (FullSize[0x0248] - InheritedSize[0x0030])
class UGunfireTechRequirementsImpl : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_SCRA[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnShowStatusEventMessage;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFullGameAvailable;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerConnectionChanged;                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveControllerSet;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveProfileSet;                                        // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStatusChanged;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOnlineUnavailable;                                       // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOnlinePrivilegeChecked;                                  // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMainMenuLoaded;                                          // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWaitDialog;                                              // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveProfileLost;                                       // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDLCInstallFinished;                                      // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLegalComplete;                                           // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDLCEntitlementsUpdated;                                  // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWaitCustomLoginDialog;                                   // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestCustomLogin;                                      // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoginCompleted;                                          // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnExternalAuthFail;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TRR[0x10];                                    // 0x0158(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<ETechReqStatusChange>                       StatusChangeEvents;                                        // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	ETechReqStatusChange                               NetworkFailReason;                                         // 0x0178(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETechReqStatusChange                               PrivilegeFailReason;                                       // 0x0179(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasSeenLegalScreen;                                       // 0x017A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BMPX[0xCD];                                    // 0x017B(0x00CD) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirements.GunfireTechRequirementsImpl");
		return ptr;
	}


	void ShowSwitchPlatformGameProfile();
	void ShowOfflineMessage();
	void SetVoipEnabled(bool Enabled);
	void SetUsingMultiplayerFeatures(bool IsUsing);
	void SetPresenceLocation(EPresenceContent Location);
	void SetHasSeenLegalScreen();
	void SetActiveController(class APlayerController* Controller);
	void PrepForPressAnyKeyDialog();
	void MuteVOIP(bool bMute);
	void MainMenuLoaded();
	bool IsVoipPTTEnabled();
	bool IsVoipMuted();
	bool IsVoipEnabled();
	bool IsUsingMultiplayerFeatures();
	bool IsProfileValid();
	bool IsPremiumServiceAvailable();
	bool IsFullGameAvailable();
	bool IsControllerConnected();
	bool IsChatRestricted();
	bool HasLicense(ELicensedContent License);
	bool HasCheckedOnlinePrivilege();
	EPresenceContent GetPresenceLocation();
	struct FString GetPlatformGameProfileUserName();
	TArray<ELicensedContent> GetLicensedContent();
	static class UGunfireTechRequirementsImpl* STATIC_GetGunfireTechRequirementsImpl(class UObject* WorldContextObject);
	void EnableVoipPTT(bool Enabled);
	void CustomLogin(EAlternateLoginType Type);
	void CheckOnlinePrivilege();
	void CheckOnlineCommunicationPrivilege();
	bool CanRequestCustomLogin();
	void AnyKeyPressed(class APlayerController* PlayerController);
	void AdjustCameraFoVForAspect(bool bIgnoreFovSlider, class UCameraComponent* CameraComponent);
	void AddStatusChangedEvent(ETechReqStatusChange Event, float Delay);
};

// Class GunfireTechRequirements.GunfireTechRequirementsImplWin64
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
class UGunfireTechRequirementsImplWin64 : public UGunfireTechRequirementsImpl
{
public:
	unsigned char                                      UnknownData_416R[0x50];                                    // 0x0248(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirements.GunfireTechRequirementsImplWin64");
		return ptr;
	}


	void VoipHotkeyReleased(class APlayerController* PlayerController);
	void VoipHotkeyPressed(class APlayerController* PlayerController);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
