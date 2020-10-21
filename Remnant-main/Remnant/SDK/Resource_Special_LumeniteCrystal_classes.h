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

// BlueprintGeneratedClass Resource_Special_LumeniteCrystal.Resource_Special_LumeniteCrystal_C
// 0x0010 (FullSize[0x04F0] - InheritedSize[0x04E0])
class AResource_Special_LumeniteCrystal_C : public AItem_Material_Base_C
{
public:
	class UAudioComponent*                             Resource_Special_Lumenite_Loop_SC;                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      CrystalMesh;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Special_LumeniteCrystal.Resource_Special_LumeniteCrystal_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
