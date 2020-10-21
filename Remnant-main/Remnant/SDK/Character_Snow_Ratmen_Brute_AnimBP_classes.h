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

// AnimBlueprintGeneratedClass Character_Snow_Ratmen_Brute_AnimBP.Character_Snow_Ratmen_Brute_AnimBP_C
// 0x1DFC (FullSize[0x28D8] - InheritedSize[0x0ADC])
class UCharacter_Snow_Ratmen_Brute_AnimBP_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_CXDL[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E6BC63804EBD1B1AAE5D119F37398075;       // 0x0AE8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_BE6C0A644EFBF77CF1A361A3CCDDCC12; // 0x0B08(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4D8859964363276F8198E4AA752718FB; // 0x0EC8(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C77DB8A948D79D28BEE260A7B52FAF45; // 0x0F80(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46A96D654804FC15DBA447BCC076BEF4; // 0x1038(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C51DD21246E0BA2A16DEF19FB9B42B91; // 0x10D8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_54F4D072478ADFE4CF2396BCA31F7C7F; // 0x1260(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B9A3530541F4045CD64256BF7C136EC4; // 0x1318(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_397F70B841CD4AB242BE699320EBEB9C; // 0x13F8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D01543C041E6429EB869D0A17B3ABDDB; // 0x14D8(0x00E0)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_3BA1EE8A437379EA974D7EB025B596C0; // 0x15B8(0x00C8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6D2156C2431C0A82782D92B9844FA1F4; // 0x1680(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B534DA304364A57FBF801AB6509C717F; // 0x1720(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E865B45847094C55295B5F9B8641916A; // 0x1800(0x00E0)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_F25A17C74B24A163FD1A1EA630C814F3; // 0x18E0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_989A535C4189A8CB7655B1BB9D1911B5; // 0x19A8(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B0B451764AD2AC0E337EE58CBA7B3774; // 0x1A88(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_94B69F03479525D7911446B645EF7660;       // 0x1C10(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AC4EB3ED405CF271B8DE92AE28063102; // 0x1C58(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A768640B49B6BA08A6C110B68E9A6869; // 0x1CF8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0C7792054EC3688ABD40558428E866F8; // 0x1DD8(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7760546C4C882A1ACF297B9AE0D0872D; // 0x1EB8(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86DF1DD245C1B0CD60F6A396F13D4D67; // 0x2040(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_74F4575C4A0E79B7588BDEAFF32CDB33; // 0x20E0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E60A8F95407DF02218E6849B56CAB31E; // 0x21C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B27BADB47F9ED4A5BA727A9713556EF; // 0x22A0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_996019D54D295AEDC84693A477AA837A; // 0x22C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F0DDB695449D6BC73BF03E899CF3B5DB; // 0x22F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F309F61E47A6DA3AEF462592579E8DCD; // 0x2318(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4A1CDF344B4178625826BD889FCD9E81; // 0x2340(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6D954E70490F89A8C25DCFAA514EA2FF; // 0x2368(0x0028)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_1DD3FE8C4EF987AB898906BC23934A09; // 0x2390(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_704554DA4D9B5F9B10B549AC9B93D052; // 0x2458(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2D1C688A4A41006C5961DEBBD9EFDA19;       // 0x2538(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_522AACA74151116159CE448958FB57C2; // 0x2580(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F545F6CB490BE17848EFB48A2F46ADEB; // 0x2620(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D0951AE049F5DC042810B7A740E07CD0; // 0x27A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E8D6B17948E11F2EB9D9C388FAFE7A09; // 0x27D0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_75ED60DA4C8F3DF6DC472FB7FDA6095B; // 0x27F8(0x00E0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Snow_Ratmen_Brute_AnimBP.Character_Snow_Ratmen_Brute_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Snow_Ratmen_Brute_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
