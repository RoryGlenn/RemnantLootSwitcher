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

// BlueprintGeneratedClass Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class UAction_Mod_GravityCoreShot_PullForce_Base_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxPlayerForce;                                            // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MaxNonPlayerForce;                                         // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MaxRange;                                                  // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MinRange;                                                  // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MaximumForceRange;                                         // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MinimumForceRange;                                         // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C");
		return ptr;
	}


	void ShouldMoveTarget(class ACharacterGunfire* Target, bool* Out);
	void GetEpicenterLocation(struct FVector* Location);
	void ApplyForce(class ACharacterGunfire* Character, float Distance, float DeltaTime);
	void OnTick(float DeltaSeconds);
	void ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
