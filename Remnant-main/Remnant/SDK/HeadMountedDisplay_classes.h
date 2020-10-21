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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	static void STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
	static void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	static void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);
	static void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	static void STATIC_SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void STATIC_SetClippingPlanes(float Near, float Far);
	static void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	static bool STATIC_IsSpectatorScreenModeControllable();
	static bool STATIC_IsInLowPersistenceMode();
	static bool STATIC_IsHeadMountedDisplayEnabled();
	static bool STATIC_IsHeadMountedDisplayConnected();
	static bool STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	static bool STATIC_HasValidTrackingPosition();
	static float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	static void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
	static void STATIC_GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int Index);
	static TEnumAsByte<EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	static float STATIC_GetScreenPercentage();
	static void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static float STATIC_GetPixelDensity();
	static void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static int STATIC_GetNumOfTrackingSensors();
	static TEnumAsByte<EHMDWornState> STATIC_GetHMDWornState();
	static struct FName STATIC_GetHMDDeviceName();
	static void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType);
	static void STATIC_EnableLowPersistenceMode(bool bEnable);
	static bool STATIC_EnableHMD(bool bEnable);
	static void STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
};

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00B8 (FullSize[0x0630] - InheritedSize[0x0578])
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_R8S7[0x8];                                     // 0x0578(0x0008) Fix Super Size
	struct FName                                       MotionSource;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                              // 0x0588(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3O23[0x3];                                     // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	ETrackingStatus                                    CurrentTrackingStatus;                                     // 0x058C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayDeviceModel;                                       // 0x058D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6RPI[0x2];                                     // 0x058E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DisplayModelSource;                                        // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 CustomDisplayMesh;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                              // 0x05A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSV8[0x60];                                    // 0x05B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         DisplayComponent;                                          // 0x0610(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_69TJ[0x18];                                    // 0x0618(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	void SetTrackingSource(EControllerHand NewSource);
	void SetTrackingMotionSource(const struct FName& NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	EControllerHand GetTrackingSource();
	float GetParameterValue(const struct FName& InName, bool* bValueFound);
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	static void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool enable);
	static bool STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);
	static bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand hand);
	static bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	static bool STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);
	static int STATIC_GetMotionTrackingEnabledControllerCount();
	static int STATIC_GetMaximumMotionTrackedControllerCount();
	static struct FName STATIC_GetActiveTrackingSystemName();
	static TArray<struct FName> STATIC_EnumerateMotionSources();
	static bool STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	static bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand hand);
	static bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static void STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	static void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand hand);
	static void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	static void STATIC_DisableMotionTrackingOfAllControllers();
	static void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (FullSize[0x0188] - InheritedSize[0x00F8])
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;     // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                    // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                                // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                      // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                                // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                            // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}


};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}


	static class UPrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	static class UPrimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                             // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WA2D[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         SpawnedComponent;                                          // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}


	static class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	static class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
