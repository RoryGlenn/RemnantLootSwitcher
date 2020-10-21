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
// Enums
//---------------------------------------------------------------------------

// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	None                           = 0,
	Orientation                    = 1,
	World                          = 2,
	Face                           = 3,
	Image                          = 4,
	ObjectScanning                 = 5,
	MAX                            = 6,

};

// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	Gravity                        = 0,
	GravityAndHeading              = 1,
	Camera                         = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	Unkown                         = 0,
	Approximate                    = 1,
	Accurate                       = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	Unkown                         = 0,
	Low                            = 1,
	High                           = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	CameraImage                    = 0,
	CameraDepth                    = 1,
	EnvironmentCapture             = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	LeftEye                        = 0,
	RightEye                       = 1,
	MAX                            = 2,

};

// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EyeBlinkLeft                   = 0,
	EyeLookDownLeft                = 1,
	EyeLookInLeft                  = 2,
	EyeLookOutLeft                 = 3,
	EyeLookUpLeft                  = 4,
	EyeSquintLeft                  = 5,
	EyeWideLeft                    = 6,
	EyeBlinkRight                  = 7,
	EyeLookDownRight               = 8,
	EyeLookInRight                 = 9,
	EyeLookOutRight                = 10,
	EyeLookUpRight                 = 11,
	EyeSquintRight                 = 12,
	EyeWideRight                   = 13,
	JawForward                     = 14,
	JawLeft                        = 15,
	JawRight                       = 16,
	JawOpen                        = 17,
	MouthClose                     = 18,
	MouthFunnel                    = 19,
	MouthPucker                    = 20,
	MouthLeft                      = 21,
	MouthRight                     = 22,
	MouthSmileLeft                 = 23,
	MouthSmileRight                = 24,
	MouthFrownLeft                 = 25,
	MouthFrownRight                = 26,
	MouthDimpleLeft                = 27,
	MouthDimpleRight               = 28,
	MouthStretchLeft               = 29,
	MouthStretchRight              = 30,
	MouthRollLower                 = 31,
	MouthRollUpper                 = 32,
	MouthShrugLower                = 33,
	MouthShrugUpper                = 34,
	MouthPressLeft                 = 35,
	MouthPressRight                = 36,
	MouthLowerDownLeft             = 37,
	MouthLowerDownRight            = 38,
	MouthUpperUpLeft               = 39,
	MouthUpperUpRight              = 40,
	BrowDownLeft                   = 41,
	BrowDownRight                  = 42,
	BrowInnerUp                    = 43,
	BrowOuterUpLeft                = 44,
	BrowOuterUpRight               = 45,
	CheekPuff                      = 46,
	CheekSquintLeft                = 47,
	CheekSquintRight               = 48,
	NoseSneerLeft                  = 49,
	NoseSneerRight                 = 50,
	TongueOut                      = 51,
	HeadYaw                        = 52,
	HeadPitch                      = 53,
	HeadRoll                       = 54,
	LeftEyeYaw                     = 55,
	LeftEyePitch                   = 56,
	LeftEyeRoll                    = 57,
	RightEyeYaw                    = 58,
	RightEyePitch                  = 59,
	RightEyeRoll                   = 60,
	MAX                            = 61,

};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	FaceRelative                   = 0,
	FaceMirrored                   = 1,
	MAX                            = 2,

};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	Landscape                      = 0,
	Portrait                       = 1,
	MAX                            = 2,

};

// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	NotAvailable                   = 0,
	StillMappingNotRelocalizable   = 1,
	StillMappingRelocalizable      = 2,
	Mapped                         = 3,
	MAX                            = 4,

};

// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	NotStarted                     = 0,
	Running                        = 1,
	NotSupported                   = 2,
	FatalError                     = 3,
	PermissionNotGranted           = 4,
	UnsupportedConfiguration       = 5,
	Other                          = 6,
	MAX                            = 7,

};

// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	NotTracking                    = 0,
	OrientationOnly                = 1,
	OrientationAndPosition         = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	None                           = 0,
	FeaturePoint                   = 1,
	GroundPlane                    = 2,
	PlaneUsingExtent               = 3,
	PlaneUsingBoundaryPolygon      = 4,
	MAX                            = 5,

};

// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	Unknown                        = 0,
	Tracking                       = 1,
	NotTracking                    = 2,
	StoppedTracking                = 3,
	MAX                            = 4,

};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	CurvesAndGeo                   = 0,
	CurvesOnly                     = 1,
	MAX                            = 2,

};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Automatic                      = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	SyncTickWithCameraImage        = 0,
	SyncTickWithoutCameraImage     = 1,
	MAX                            = 2,

};

// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	None                           = 0,
	AmbientLightEstimate           = 1,
	DirectionalLightEstimate       = 2,
	MAX                            = 3,

};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	None                           = 0,
	HorizontalPlaneDetection       = 1,
	VerticalPlaneDetection         = 2,
	MAX                            = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARTraceResult
// 0x0060
struct FARTraceResult
{
	float                                              DistanceFromCamera;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EARLineTraceChannels                               TraceChannel;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6WEK[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LocalToTrackingTransform;                                  // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UARTrackedGeometry*                          TrackedGeometry;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8R0W[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)

};
// ScriptStruct AugmentedReality.ARVideoFormat
// 0x000C
struct FARVideoFormat
{
	int                                                FPS;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// 0x0008
struct FARSharedWorldReplicationState
{
	int                                                PreviewImageOffset;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldOffset;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AugmentedReality.ARSessionStatus
// 0x0018
struct FARSessionStatus
{
	struct FString                                     AdditionalInfo;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EARSessionStatus                                   Status;                                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0RYA[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
