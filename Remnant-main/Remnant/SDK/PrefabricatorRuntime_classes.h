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

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPrefabricatorAssetInterface : public UObject
{
public:
	class UClass*                                      EventListener;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplicates;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SRL[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetInterface");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (FullSize[0x0350] - InheritedSize[0x0330])
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LastUpdateID;                                              // 0x0338(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02I0[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabActor");
		return ptr;
	}


	void SavePrefab();
	void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);
	void LoadPrefab();
	bool IsPrefabOutdated();
	class UPrefabricatorAsset* GetPrefabAsset();
};

// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class AReplicablePrefabActor : public APrefabActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.ReplicablePrefabActor");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabComponent
// 0x0028 (FullSize[0x0280] - InheritedSize[0x0258])
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      PrefabAssetInterface[0x28];                                // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PrefabricatorRuntime.PrefabComponent.PrefabAssetInterface


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabComponent");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
class APrefabRandomizer : public AActor
{
public:
	bool                                               bRandomizeOnBeginPlay;                                     // 0x0330(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SET5[0x3];                                     // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SeedOffset;                                                // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBuildTimePerFrame;                                      // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84HM[0x1C];                                    // 0x033C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabRandomizer");
		return ptr;
	}


	void Randomize(int InSeed);
};

// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPrefabricatorProperty : public UObject
{
public:
	struct FString                                     PropertyName;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExportedValue;                                             // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorProperty");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>             ActorData;                                                 // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJX6[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       LastUpdateID;                                              // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMV5[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UThumbnailInfo*                              ThumbnailInfo;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8L0U[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAsset");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPrefabricatorEventListener : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorEventListener");
		return ptr;
	}


	void PostSpawn(class APrefabActor* Prefab);
};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem>   Prefabs;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55ZV[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetCollection");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>                 PrefabActor;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ItemID;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetUserData");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary");
		return ptr;
	}


	static class APrefabActor* STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed);
	static void STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);
};

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_NCUC[0x8];                                     // 0x0258(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinkerComponent");
		return ptr;
	}


};

// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>         LinkedActors;                                              // 0x0330(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                       // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinker");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
