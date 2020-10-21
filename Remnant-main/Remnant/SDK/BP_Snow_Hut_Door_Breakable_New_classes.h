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

// BlueprintGeneratedClass BP_Snow_Hut_Door_Breakable_New.BP_Snow_Hut_Door_Breakable_New_C
// 0x0038 (FullSize[0x04E8] - InheritedSize[0x04B0])
class ABP_Snow_Hut_Door_Breakable_New_C : public ABP_BreakableActor_2States_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Snow_Board_A_DM_05;                                     // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Board_A_DM_04;                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Board_A_DM_03;                                     // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Board_A_DM_02;                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Board_A_DM_01;                                     // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Break;                                                 // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Snow_Hut_Door_Breakable_New.BP_Snow_Hut_Door_Breakable_New_C");
		return ptr;
	}


	void BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature(class UBreakableComponent* Breakable);
	void ExecuteUbergraph_BP_Snow_Hut_Door_Breakable_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
