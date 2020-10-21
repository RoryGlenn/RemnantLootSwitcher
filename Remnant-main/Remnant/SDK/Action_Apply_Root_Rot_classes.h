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

// BlueprintGeneratedClass Action_Apply_Root_Rot.Action_Apply_Root_Rot_C
// 0x004D (FullSize[0x0310] - InheritedSize[0x02C3])
class UAction_Apply_Root_Rot_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_J43W[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACharacterGunfire*                           Character_Reference;                                       // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                Timer;                                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              MinTimeBetweenCoughs;                                      // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeBetweenCoughs;                                      // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayedRootRot;                                             // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IW95[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimationHandle                            RootRotAnimHandle;                                         // 0x02F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Apply_Root_Rot.Action_Apply_Root_Rot_C");
		return ptr;
	}


	void Clear_Timer();
	struct FTransform Get_Owners_Transform();
	void OnActionStart();
	void OnActionStop();
	void ApplyCough();
	void OnRestore();
	void OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void ExecuteUbergraph_Action_Apply_Root_Rot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
