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

// BlueprintGeneratedClass Item_Flashlight_NPC.Item_Flashlight_NPC_C
// 0x0020 (FullSize[0x05C8] - InheritedSize[0x05A8])
class AItem_Flashlight_NPC_C : public AEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                 // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_LightCone;                                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Flashlight_01;                                             // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Flashlight_NPC.Item_Flashlight_NPC_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Item_Flashlight_NPC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
