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

// BlueprintGeneratedClass Ammo_Base.Ammo_Base_C
// 0x0028 (FullSize[0x04F0] - InheritedSize[0x04C8])
class AAmmo_Base_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LootFX;                                                    // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                MaxQuantity;                                               // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AmmoPool;                                                  // 0x04E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mod;                                                       // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_Base.Ammo_Base_C");
		return ptr;
	}


	void SplitAmmoAmongPlayers(float Amount, class AActor* Owner);
	void GetAmmoPickupMod(class ACharacterGunfire* Character, float* Mod);
	bool PreAdd(class UInventoryComponent* Inventory, int Quantity);
	bool ValidateAdd(class UInventoryComponent* Inventory, int DesiredQuantity, int* AllowedQuantity);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Ammo_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
