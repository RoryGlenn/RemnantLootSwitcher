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

// BlueprintGeneratedClass Interactive_Door_IceSkimmerHull.Interactive_Door_IceSkimmerHull_C
// 0x000F (FullSize[0x0491] - InheritedSize[0x0482])
class AInteractive_Door_IceSkimmerHull_C : public AInteractive_City_SingleDoor_C
{
public:
	unsigned char                                      UnknownData_1MQC[0x6];                                     // 0x0482(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Unlocked;                                                  // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Door_IceSkimmerHull.Interactive_Door_IceSkimmerHull_C");
		return ptr;
	}


	void UnlockedDoor();
	void ExecuteUbergraph_Interactive_Door_IceSkimmerHull(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
