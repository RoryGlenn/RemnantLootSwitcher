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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00A8
struct FGeometryCacheMeshData
{
	unsigned char                                      UnknownData_EVE6[0xA8];                                    // 0x0000(0x00A8) MISSED OFFSET (PADDING)

};
// ScriptStruct GeometryCache.TrackRenderData
// 0x0070
struct FTrackRenderData
{
	unsigned char                                      UnknownData_VY5P[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

};
// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0008
struct FGeometryCacheVertexInfo
{
	unsigned char                                      UnknownData_V28V[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C
struct FGeometryCacheMeshBatchInfo
{
	unsigned char                                      UnknownData_FW7D[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
