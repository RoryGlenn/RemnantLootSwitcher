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

// AnimBlueprintGeneratedClass Character_Snow_Mole_Rat_AnimBP.Character_Snow_Mole_Rat_AnimBP_C
// 0x0E95 (FullSize[0x1971] - InheritedSize[0x0ADC])
class UCharacter_Snow_Mole_Rat_AnimBP_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_XR50[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A056F5CF498460EAC6BA85B0F21442CC;       // 0x0AE8(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C85729944209E7D2CEE0FFAEA27E85D9;       // 0x0B08(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_39DB87704178D8B3372231901CE0E29B; // 0x0B50(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21828D1349D17A31ACBFD08324DF7524; // 0x0C30(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B85D086D4A7D9E37CEAAD7AC4E8F0407; // 0x0D10(0x00A0)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_705014A64F0A3A4FA277C5BDB10F205D; // 0x0DB0(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_45DF421E4B475B9816C904AE9E1D06BF; // 0x1170(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D370CDD642AC577F5535EF92A2D0D57D; // 0x1228(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_0C70989A456A285A8B3D369323C7205A; // 0x1308(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DEA9B4DD4892FB4E42A2399DBEED0CE4; // 0x1490(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AAF387FA4E89F81E5E3204ADD52DBC78; // 0x14B8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E50F268D4C4013A0CB7CF3A829482FD5; // 0x1558(0x0028)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_C84388684BF6EBC0BD9B309BE71B0CF5; // 0x1580(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A4DDDE9486FF2C0B5AB149C9696B7A2; // 0x1648(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_990B11D34AF4E7A67D012C9F21F6504D; // 0x1670(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_927D13384583976AD552E497AA3D36AA; // 0x1710(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6E57CA174DF9637412BF91BED1AD2995; // 0x17F0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_370A901D43BB482619001CB5845FBFA7; // 0x1890(0x00E0)
	bool                                               HasGroundSlope;                                            // 0x1970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Snow_Mole_Rat_AnimBP.Character_Snow_Mole_Rat_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Character_Snow_Mole_Rat_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
