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

// BlueprintGeneratedClass Armor_Body_Carapace.Armor_Body_Carapace_C
// 0x0008 (FullSize[0x05D8] - InheritedSize[0x05D0])
class AArmor_Body_Carapace_C : public AArmor_Body_Base_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_Body_Carapace.Armor_Body_Carapace_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
