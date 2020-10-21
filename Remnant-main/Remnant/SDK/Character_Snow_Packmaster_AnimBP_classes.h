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

// AnimBlueprintGeneratedClass Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C
// 0x1004 (FullSize[0x1AE0] - InheritedSize[0x0ADC])
class UCharacter_Snow_Packmaster_AnimBP_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_3SX2[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9CF4FB9F4C0BA62D726F01AF674C5CDC;       // 0x0AE8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_9198404E4C1A6FAFE312A6B79233D418; // 0x0B08(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FC8D5E35402EBA89A7F32A89BE4E58F4; // 0x0EC8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7AA9CCC24A44E5B5B6AA6D9BC1A4003D; // 0x0F80(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3D9B230F4B9BDAE41664138DAD609536; // 0x0FA8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6320134648196BC47065F8B07D01EC32; // 0x0FD0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_114173DD4E213A7072758CBE8C327DE4; // 0x1070(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2AAD428E410127DF6EAEE596225EA6A0; // 0x1150(0x0188)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EA934F264F37C4E11D8325B5B3746DB0; // 0x12D8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2404E9CC4465EE2CA2CFC5B5DFE2FD1C; // 0x13B8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AD7D99CB48A969ADFFD3F584FB287FC8; // 0x1498(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_45FB7095488692FEC41503BBCD3BD5AF; // 0x1578(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F38620364003D1206CA664AE1BE221C1;       // 0x1658(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F5BC23B04A455B47A12EC4879FDC2A69; // 0x16A0(0x00E0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6A41B7354A0950449CE8CB9D0A449AE6; // 0x1780(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3A809E1B45AC4088DEBF92A8521746E4; // 0x1A90(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F1602F694764938376478E80764AB2F5; // 0x1AB0(0x0020)
	bool                                               AttackYawTracking;                                         // 0x1AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EHTS[0x3];                                     // 0x1AD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttackYaw;                                                 // 0x1AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LerpToTarget;                                              // 0x1AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6HSN[0x3];                                     // 0x1AD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreviousAttackYaw;                                         // 0x1ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Snow_Packmaster_AnimBP.Character_Snow_Packmaster_AnimBP_C");
		return ptr;
	}


	void OnCharacterEvent(const struct FName& EventName);
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Character_Snow_Packmaster_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
