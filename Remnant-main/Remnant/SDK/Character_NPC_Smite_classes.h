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

// BlueprintGeneratedClass Character_NPC_Smite.Character_NPC_Smite_C
// 0x000F (FullSize[0x0C41] - InheritedSize[0x0C32])
class ACharacter_NPC_Smite_C : public ACharacter_NPC_C
{
public:
	unsigned char                                      UnknownData_3TQW[0x6];                                     // 0x0C32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               DoorOpen;                                                  // 0x0C40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_NPC_Smite.Character_NPC_Smite_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Character_NPC_Smite(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
