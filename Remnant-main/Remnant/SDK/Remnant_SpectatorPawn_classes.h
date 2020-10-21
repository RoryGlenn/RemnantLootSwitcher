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

// BlueprintGeneratedClass Remnant_SpectatorPawn.Remnant_SpectatorPawn_C
// 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
class ARemnant_SpectatorPawn_C : public ARemnantSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                     // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldSpectateFirstPlayer;                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R5X1[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DialogDeathClass[0x28];                                    // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftClassProperty Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.DialogDeathClass


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Remnant_SpectatorPawn.Remnant_SpectatorPawn_C");
		return ptr;
	}


	void ShowJoinSpectateDialog();
	void GetJoinSpectateDialog(class ADialog_JoinSpectate_C** Dialog);
	void ShouldAutoSpectate(bool* Result);
	void GetDeathScreen(class AUIActor** Dialog);
	void ShowDeathScreen();
	void OnFinishTravel();
	void ReceiveTick(float DeltaSeconds);
	void OnInvalidTarget();
	void OnValidTarget();
	void ExecuteUbergraph_Remnant_SpectatorPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
