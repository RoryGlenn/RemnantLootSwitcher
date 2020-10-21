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

// BlueprintGeneratedClass Quest_Keycard_WardPrime.Quest_Keycard_WardPrime_C
// 0x0008 (FullSize[0x04E0] - InheritedSize[0x04D8])
class AQuest_Keycard_WardPrime_C : public AQuest_Keycard_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Keycard_WardPrime.Quest_Keycard_WardPrime_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
