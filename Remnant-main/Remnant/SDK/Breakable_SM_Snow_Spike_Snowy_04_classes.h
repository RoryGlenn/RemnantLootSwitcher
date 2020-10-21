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

// BlueprintGeneratedClass Breakable_SM_Snow_Spike_Snowy_04.Breakable_SM_Snow_Spike_Snowy_04_C
// 0x0020 (FullSize[0x04D0] - InheritedSize[0x04B0])
class ABreakable_SM_Snow_Spike_Snowy_04_C : public ABP_BreakableActor_2States_C
{
public:
	class UStaticMeshComponent*                        SM_Snow_Spike_A_DM_01;                                     // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Spike_A_DM_02;                                     // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Spike_A_DM_03;                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Break;                                                 // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Breakable_SM_Snow_Spike_Snowy_04.Breakable_SM_Snow_Spike_Snowy_04_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
