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

// AnimBlueprintGeneratedClass Character_Snow_Ratmen_Flyer_AnimBP.Character_Snow_Ratmen_Flyer_AnimBP_C
// 0x0F04 (FullSize[0x19E0] - InheritedSize[0x0ADC])
class UCharacter_Snow_Ratmen_Flyer_AnimBP_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_TCFM[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2F88749C4EEB456457320B8042B4E561;       // 0x0AE8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B94F93DF46A4278CFCAA23953514D86F; // 0x0B08(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D1DD28874D98E02EEF31DCA6012DBB0C;       // 0x0BA8(0x0048)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_453460274579245119B092AF3793A45A; // 0x0BF0(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_70F28E0F46D587895AA724857C37D0CC; // 0x0FB0(0x00B8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CA1D0CF842171800607B71BD83FFA909; // 0x1068(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7AD54972441FFB537F9FB0A5CCCBC948; // 0x11F0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD9C7629461DF4CE19FBCEBCF9FCE9BA; // 0x1218(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53C2F88B4F5213A587E81FA7582F383C; // 0x12B8(0x0028)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_82C1CE4E43B4767CCECEA28E3E643420; // 0x12E0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_607C26DA455A3BF24FD9A6980F3A5BE9; // 0x13A8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_506F388842868FD3AC4275A91EDC81E0; // 0x13D0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_136A9703438584BE438CCB9A449C5A36; // 0x1488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F3020B0483421BF794A55966CB258F7; // 0x14B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CA2041D437132854E3359B433BF33FB; // 0x14D8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CF906FB4431F53BCF78A3288E7D85505; // 0x1500(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A90181734721E87D72AD9991D7844FF5; // 0x15E0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_338A326D480248824771E7BE489E7D89; // 0x1600(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B762DFD24A83E0B20EE16D82BEBC30F5; // 0x1678(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_360D4DA5436EE475CD266D818CAA13FF; // 0x1698(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DB1085249BF04E6F96E28B71B662DEB; // 0x1748(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1EA4DAD448035A0B5E386B9D496B52B3; // 0x1770(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B0860B8C49E6B97300B7A2AD1C7BC3D3; // 0x1798(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BFB181D7402A624DD112069E8DC5F571; // 0x1878(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E91A3F744EC61E8CF04D9683CFFDB7CB; // 0x1898(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8907C08E47F16A47B83BAFA26088E324; // 0x1910(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BE40A05B4BB739634DB2F8B1080E04A9; // 0x1930(0x00B0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Snow_Ratmen_Flyer_AnimBP.Character_Snow_Ratmen_Flyer_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Snow_Ratmen_Flyer_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
