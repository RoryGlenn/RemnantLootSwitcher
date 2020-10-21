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

// BlueprintGeneratedClass Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C
// 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
class AInteractive_Campfire_SpawnPoint_C : public ASpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Campfire_SpawnPoint.Interactive_Campfire_SpawnPoint_C");
		return ptr;
	}


	void SetSpawnPosition(class AActor* Actor);
	void SetSpawnState(class ACharacterGunfire* Character, const struct FName& SpawnState);
	void OnPreSpawn(class AActor* Actor);
	void PossessedBy(class AController* NewController);
	void ExecuteUbergraph_Interactive_Campfire_SpawnPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
