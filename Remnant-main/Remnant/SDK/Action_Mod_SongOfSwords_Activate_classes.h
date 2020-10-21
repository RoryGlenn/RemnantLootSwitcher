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

// BlueprintGeneratedClass Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C
// 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
class UAction_Mod_SongOfSwords_Activate_C : public UAction_Aura_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Aura;                                                  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Aura;                                                  // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C");
		return ptr;
	}


	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_SongOfSwords_Activate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
