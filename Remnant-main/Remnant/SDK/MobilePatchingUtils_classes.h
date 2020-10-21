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

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData_U0BZ[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobileInstalledContent");
		return ptr;
	}


	bool Mount(int PakOrder, const struct FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};

// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData_YAZB[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePendingContent");
		return ptr;
	}


	void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	struct FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePatchingLibrary");
		return ptr;
	}


	static void STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	static bool STATIC_HasActiveWiFiConnection();
	static TArray<struct FString> STATIC_GetSupportedPlatformNames();
	static class UMobileInstalledContent* STATIC_GetInstalledContent(const struct FString& InstallDirectory);
	static struct FString STATIC_GetActiveDeviceProfileName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
