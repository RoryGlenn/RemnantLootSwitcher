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

// BlueprintGeneratedClass Character_Base_Ranged_AIController.Character_Base_Ranged_AIController_C
// 0x0008 (FullSize[0x05C0] - InheritedSize[0x05B8])
class ACharacter_Base_Ranged_AIController_C : public AAIControllerGunfire
{
public:
	class UAIPointOfInterestComponent*                 AIPointOfInterest;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Base_Ranged_AIController.Character_Base_Ranged_AIController_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
