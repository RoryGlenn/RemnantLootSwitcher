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

// BlueprintGeneratedClass Resource_TraitBook.Resource_TraitBook_C
// 0x0020 (FullSize[0x04E8] - InheritedSize[0x04C8])
class AResource_TraitBook_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LootFX;                                                    // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             UI_Node;                                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_TraitBook.Resource_TraitBook_C");
		return ptr;
	}


	bool PreAdd(class UInventoryComponent* Inventory, int Quantity);
	void OnPickedUp();
	void ExecuteUbergraph_Resource_TraitBook(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
