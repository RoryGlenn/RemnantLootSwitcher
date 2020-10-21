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

// BlueprintGeneratedClass BP_AreaTrigger.BP_AreaTrigger_C
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class ABP_AreaTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DialogTrigger;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AreaTrigger.BP_AreaTrigger_C");
		return ptr;
	}


	void IsTraveling(class AActor* Pawn, bool* Out);
	void GetActorTileID(class AActor* Actor, int* Out);
	void GetTileID(int* Out);
	void GetLocalPawn(class AActor** Pawn);
	void DisableAll();
	void Disable();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AreaTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
