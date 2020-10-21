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

// BlueprintGeneratedClass Character_Snow_Ratmen_Brute_WinterForest.Character_Snow_Ratmen_Brute_WinterForest_C
// 0x0017 (FullSize[0x0C88] - InheritedSize[0x0C71])
class ACharacter_Snow_Ratmen_Brute_WinterForest_C : public ACharacter_Snow_Ratmen_Brute_C
{
public:
	unsigned char                                      UnknownData_PCZC[0x7];                                     // 0x0C71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Breath;                                                // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Snow_Ratmen_Brute_WinterForest.Character_Snow_Ratmen_Brute_WinterForest_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void CombatEnter();
	void ExecuteUbergraph_Character_Snow_Ratmen_Brute_WinterForest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
