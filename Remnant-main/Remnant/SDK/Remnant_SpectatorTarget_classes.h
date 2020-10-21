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

// BlueprintGeneratedClass Remnant_SpectatorTarget.Remnant_SpectatorTarget_C
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class URemnant_SpectatorTarget_C : public USpectatorTargetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Remnant_SpectatorTarget.Remnant_SpectatorTarget_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Remnant_SpectatorTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
