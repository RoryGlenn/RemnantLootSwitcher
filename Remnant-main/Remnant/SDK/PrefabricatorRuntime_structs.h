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

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// 0x0050
struct FPrefabricatorComponentData
{
	struct FTransform                                  RelativeTransform;                                         // 0x0000(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ComponentName;                                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>              Properties;                                                // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// 0x0070
struct FPrefabricatorActorData
{
	struct FGuid                                       PrefabItemID;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  RelativeTransform;                                         // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ClassPath;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>              Properties;                                                // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorComponentData>         Components;                                                // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// 0x0030
struct FPrefabricatorAssetCollectionItem
{
	unsigned char                                      PrefabAsset[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PrefabricatorRuntime.PrefabricatorAssetCollectionItem.PrefabAsset
	float                                              Weight;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVQG[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
