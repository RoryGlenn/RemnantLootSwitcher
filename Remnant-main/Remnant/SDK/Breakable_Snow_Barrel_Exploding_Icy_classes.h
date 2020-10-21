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

// BlueprintGeneratedClass Breakable_Snow_Barrel_Exploding_Icy.Breakable_Snow_Barrel_Exploding_Icy_C
// 0x0058 (FullSize[0x0508] - InheritedSize[0x04B0])
class ABreakable_Snow_Barrel_Exploding_Icy_C : public ABP_BreakableActor_2States_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DamageLocation;                                            // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStatsComponent*                             Stats;                                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActionComponent*                            Action;                                                    // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Explosion;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Swamp_Crate_01_DM_011;                                  // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Swamp_Crate_01_DM_010;                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Swamp_Crate_01_DM_021;                                  // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Swamp_Crate_01_DM_04;                                   // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Swamp_Crate_01_DM_019;                                  // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Break;                                                 // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Breakable_Snow_Barrel_Exploding_Icy.Breakable_Snow_Barrel_Exploding_Icy_C");
		return ptr;
	}


	void OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo);
	void BndEvt__Stats_K2Node_ComponentBoundEvent_1_ComputeStatsDelegate__DelegateSignature();
	void ExecuteUbergraph_Breakable_Snow_Barrel_Exploding_Icy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
