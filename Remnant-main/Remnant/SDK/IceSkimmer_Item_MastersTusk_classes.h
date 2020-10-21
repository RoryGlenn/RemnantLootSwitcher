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

// BlueprintGeneratedClass IceSkimmer_Item_MastersTusk.IceSkimmer_Item_MastersTusk_C
// 0x0008 (FullSize[0x04D8] - InheritedSize[0x04D0])
class AIceSkimmer_Item_MastersTusk_C : public ABP_Quest_Item_Base_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceSkimmer_Item_MastersTusk.IceSkimmer_Item_MastersTusk_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
