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

// BlueprintGeneratedClass Quest_SmallD_QueensTemple_CryptolithSigil.Quest_SmallD_QueensTemple_CryptolithSigil_C
// 0x0018 (FullSize[0x04E8] - InheritedSize[0x04D0])
class AQuest_SmallD_QueensTemple_CryptolithSigil_C : public ABP_Quest_Item_Base_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LootFX_1;                                                  // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SmallD_QueensTemple_CryptolithSigil.Quest_SmallD_QueensTemple_CryptolithSigil_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
