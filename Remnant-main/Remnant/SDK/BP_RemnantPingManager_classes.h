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

// BlueprintGeneratedClass BP_RemnantPingManager.BP_RemnantPingManager_C
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UBP_RemnantPingManager_C : public URemnantPingManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantPingManager.BP_RemnantPingManager_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnCharacterPing_Event_1(class AActor* Character, const struct FActionPing& Ping);
	void ExecuteUbergraph_BP_RemnantPingManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
