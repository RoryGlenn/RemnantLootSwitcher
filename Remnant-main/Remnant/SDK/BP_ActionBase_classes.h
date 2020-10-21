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

// BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class UBP_ActionBase_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C");
		return ptr;
	}


	void SetAggroGroup(class ACharacterGunfire* Character);
	void SpawnActor(struct FTransform* InTransform, class UClass* Class);
	class ACharacterGunfire* SpawnCharacter(class UClass* Character, const struct FTransform& Transform, const struct FName& SpawnState, class AActor* Owner, class AActor* Target, float Threat, bool RandomizeHeading);
	void ScatterHorizontal(const struct FVector& Location, float RadiusMin, float RadiusMax, float HeadingMax, struct FVector* Out);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
