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

// BlueprintGeneratedClass BP_RemnantTrait.BP_RemnantTrait_C
// 0x0001 (FullSize[0x00F1] - InheritedSize[0x00F0])
class UBP_RemnantTrait_C : public UTrait
{
public:
	bool                                               HideNotification;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantTrait.BP_RemnantTrait_C");
		return ptr;
	}


	void DoActionOnTarget(class UClass* Action, class AActor* Target);
	void IsTargetAggro(class AActor* Target, bool* Out);
	void DoAction(class UClass* ActionBP, int* ActionID);
	void GetCharacter(class ACharacterGunfire** Out);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
