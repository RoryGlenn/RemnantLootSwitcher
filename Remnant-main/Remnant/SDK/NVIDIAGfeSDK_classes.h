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

// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsFunctionLibrary");
		return ptr;
	}


	static void STATIC_Poll();
	static void STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots);
};

// Class NVIDIAGfeSDK.InitHighlights
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UInitHighlights : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DNQB[0xB0];                                    // 0x0050(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.InitHighlights");
		return ptr;
	}


	static class UInitHighlights* STATIC_InitHighlights(class UObject* WorldContextObject, const struct FString& InGameName, bool Video, bool Screenshots);
};

// Class NVIDIAGfeSDK.HighlightsConfigureAsync
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OYNU[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsConfigureAsync");
		return ptr;
	}


	static class UHighlightsConfigureAsync* STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams);
};

// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACQY[0x68];                                    // 0x0050(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsOpenGroupAsync");
		return ptr;
	}


	static class UHighlightsOpenGroupAsync* STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params);
};

// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3GCC[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsCloseGroupAsync");
		return ptr;
	}


	static class UHighlightsCloseGroupAsync* STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const struct FString& GroupId, bool DestroyHighlights);
};

// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BI2C[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync");
		return ptr;
	}


	static class UHighlightsSetScreenshotAsync* STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId);
};

// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIYO[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetVideoAsync");
		return ptr;
	}


	static class UHighlightsSetVideoAsync* STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId, int StartDelta, int EndDelta);
};

// Class NVIDIAGfeSDK.HighlightsSummaryAsync
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2NX[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSummaryAsync");
		return ptr;
	}


	static class UHighlightsSummaryAsync* STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params);
};

// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_109V[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsGetNumberAsync");
		return ptr;
	}


	static class UHighlightsGetNumberAsync* STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const struct FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter);
};

// Class NVIDIAGfeSDK.RequestPermissionsAsync
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class URequestPermissionsAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4F2G[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.RequestPermissionsAsync");
		return ptr;
	}


	static class URequestPermissionsAsync* STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
