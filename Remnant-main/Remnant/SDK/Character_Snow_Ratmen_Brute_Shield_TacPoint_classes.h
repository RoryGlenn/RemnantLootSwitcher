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

// BlueprintGeneratedClass Character_Snow_Ratmen_Brute_Shield_TacPoint.Character_Snow_Ratmen_Brute_Shield_TacPoint_C
// 0x0010 (FullSize[0x0368] - InheritedSize[0x0358])
class ACharacter_Snow_Ratmen_Brute_Shield_TacPoint_C : public AAICustomTacticalPoint
{
public:
	class UArrowComponent*                             Arrow;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Ratmen_Brute_Shield_TacPoint.Character_Snow_Ratmen_Brute_Shield_TacPoint_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
