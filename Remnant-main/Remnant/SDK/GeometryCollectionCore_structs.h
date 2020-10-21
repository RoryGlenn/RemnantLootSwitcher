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

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None                           = 0,
	Record                         = 1,
	Play                           = 2,
	RecordAndPlay                  = 3,
	MAX                            = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x0038
struct FSolverTrailingData
{
	unsigned char                                      UnknownData_WG1J[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};
// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x0050
struct FSolverCollisionData
{
	unsigned char                                      UnknownData_P44B[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};
// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x0010
struct FRecordedTransformTrack
{
	TArray<struct FRecordedFrame>                      Records;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x0068
struct FRecordedFrame
{
	TArray<struct FTransform>                          Transforms;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        TransformIndices;                                          // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        PreviousTransformIndices;                                  // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       DisabledFlags;                                             // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverCollisionData>                Collisions;                                                // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverTrailingData>                 Trailings;                                                 // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XX5J[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
