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

// BlueprintGeneratedClass NPCDialogueComponent.NPCDialogueComponent_C
// 0x0011 (FullSize[0x03E1] - InheritedSize[0x03D0])
class UNPCDialogueComponent_C : public UDialogComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      DialogueInitiator;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DontExitOnHostile;                                         // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCDialogueComponent.NPCDialogueComponent_C");
		return ptr;
	}


	void ExitIfHostile(class AActor* Actor, class AActor* Other);
	void ExitOnCombat();
	void OnInteractive(const struct FName& StateName, class AActor* Other);
	void OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo);
	void OnTargetChanged_Event_1(class AActor* NewTarget);
	void OnTargeted_Event_1(class AActor* Other);
	void OnDialogBegin_Event_1();
	void OnDialogEnd_Event_1();
	void OnTargeted_Event_2(class AActor* Other);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NPCDialogueComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
