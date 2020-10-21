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

// BlueprintGeneratedClass SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C
// 0x0068 (FullSize[0x03E8] - InheritedSize[0x0380])
class ASpawnPoint_Emerge_Pipes_C : public ASpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             ForwardActor;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Emerge_Ceiling;                                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SpawnPointPOS;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cube;                                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender1;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               TestSpawn;                                                 // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4DHF[0x7];                                     // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RootToSpawn[0x28];                                         // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C.RootToSpawn


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Emerge_Pipes.SpawnPoint_Emerge_Pipes_C");
		return ptr;
	}


	void GetSpawnPosition(bool* NewParam);
	void OnLoaded_A7285A1749F52692FA8C46B1C5236273(class UClass* Loaded);
	void ReceiveBeginPlay();
	void OnPostSpawn(class AActor* Actor);
	void ExecuteUbergraph_SpawnPoint_Emerge_Pipes(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
