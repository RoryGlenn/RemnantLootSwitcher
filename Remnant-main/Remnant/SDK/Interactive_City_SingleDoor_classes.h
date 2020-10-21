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

// BlueprintGeneratedClass Interactive_City_SingleDoor.Interactive_City_SingleDoor_C
// 0x005A (FullSize[0x0482] - InheritedSize[0x0428])
class AInteractive_City_SingleDoor_C : public ABP_Inspectable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundSetComponent*                          SoundSet;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistenceComponent*                       Persistence;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoftCollisionCapsuleComponent*              PlayerPusher_SoftCollisionCapsule;                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNamedActorComponent*                        NamedActor;                                                // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             UI_Node_Deadbolt;                                          // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               DoorCollision;                                             // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Key;                                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Locked;                                                    // 0x0470(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T5DL[0x7];                                     // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CachedOther;                                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveKeyFromInventory;                                    // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsInside;                                                  // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_City_SingleDoor.Interactive_City_SingleDoor_C");
		return ptr;
	}


	bool CanUseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass);
	void OnRep_Locked();
	void ReceiveBeginPlay();
	void UseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass);
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature(class UInspectableComponent* Component);
	void OnBeginInspect();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_2_InteractiveDelegate__DelegateSignature(const struct FName& StateName, class AActor* Other);
	void OnOpenDoor();
	void OnOpenedDoor();
	void HandleEndInspect();
	void ExecuteUbergraph_Interactive_City_SingleDoor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
