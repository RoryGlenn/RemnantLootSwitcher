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

// BlueprintGeneratedClass Item_Material_Base.Item_Material_Base_C
// 0x0018 (FullSize[0x04E0] - InheritedSize[0x04C8])
class AItem_Material_Base_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LootFX;                                                    // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Material_Base.Item_Material_Base_C");
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Item_Material_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
