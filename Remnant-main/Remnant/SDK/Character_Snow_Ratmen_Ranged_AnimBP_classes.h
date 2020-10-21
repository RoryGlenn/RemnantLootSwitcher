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

// AnimBlueprintGeneratedClass Character_Snow_Ratmen_Ranged_AnimBP.Character_Snow_Ratmen_Ranged_AnimBP_C
// 0x1BA4 (FullSize[0x2680] - InheritedSize[0x0ADC])
class UCharacter_Snow_Ratmen_Ranged_AnimBP_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_DFJ6[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EA0827884F82A3DCC8455CBBC58646E9;       // 0x0AE8(0x0020)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_D7EB35C642C89717F194FF92FDD13911; // 0x0B08(0x0098)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_F413C1244084EAA399F09AB886938CD6; // 0x0BA0(0x03C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1D2258AF4CF686BEF7C94F811C401308; // 0x0F60(0x00B8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9E6ABA3A4A979A59004E13B02688C843; // 0x1018(0x0188)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34EEFC2C4BF037CBBB6F4E81EA4630E4; // 0x11A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_701712B642FC4CFC5362A59F6966191A; // 0x11C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A5B02F24955ECA2BF51AAA2D16A5B1E; // 0x11F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9179E10741756C556FA363BB2C7C7F0A; // 0x1218(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B721CA6A49EDD9C5D9DC6AA6F2B258C0; // 0x1240(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22F591944B9F3DA8E61A0AB0F7F1AE7E; // 0x1268(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3EF0B34348C96FF09D37029231F3BF47; // 0x12E0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5E69F62147EF12B32D3E8FB162278360; // 0x1300(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_66EC65CE4E47ACCF9619E78DCF00B98B; // 0x13E0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81F8F6364C982B4BBE885DBFA89C9213; // 0x14C0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_434AADA449B142881389128167DBD442; // 0x1560(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C86CBBA844B9F96D060AED9594499DDE; // 0x1580(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5AFC0B5446913AD0F539F38D7E5A97E3; // 0x15A8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2464C8E64353C347D2DCB38533122F35; // 0x15C8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF4B2E7D435B732652EDF0B408D920B9; // 0x1678(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA77B7CF43287B92FFD7B6B8A887FE5E; // 0x16A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E275735D4973DE0A0AAC1893056ECBE4; // 0x16C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D9AE62E462D8321BB4905BF28169141; // 0x16F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5244949143E2743C1BE2ED9BE924F748; // 0x1718(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_338125264B665E9AEB0C1CBF3CA3676F; // 0x1740(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CF9484BB4863A455A06A40ACFE1C21CC; // 0x17B8(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_651251C8463921B471B7818CCC465679; // 0x17D8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C4384FFE4D42CBDEDB14479EB9C09C97; // 0x18B8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CE92BC244DE659949D6ED997E5331E14; // 0x1998(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2A8193E946119E0C7A30B3816DF08A7C; // 0x1A38(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9220E849404B950594AF22A3EBD0AC2B; // 0x1A58(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A02956FA46A9DC57F7FF74B2885C8324; // 0x1A80(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5A83C9224E1DF4DE998A6B914CBE7943; // 0x1AA0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E9FCB0934F502F6FC2E2C19363E1028B;       // 0x1B50(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_823457B94D6F827A6C3367B2FB54D438;       // 0x1B98(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_83BB87BE4ABEF32F954D72B094BC7632; // 0x1BE0(0x00B8)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_E0E9C9284519455A073853ACED0F43D1; // 0x1C98(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BD7B8E8C431A8379E0FC1194C2C9B6BA; // 0x1D60(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94B92A724095A6444A8DE7A9EE5E1B69; // 0x1D88(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C8A3E4F94CF9C69D45DD29910895ACE6; // 0x1DB0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FB159AAD4716DD51053CDBBD94F7109A; // 0x1E68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D4C50DE147BA8663EA559B94047B4C6D; // 0x1E90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0707EE2641C061A7FE73F784A0CA8C2A; // 0x1EB8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AE9B60D84BB8654CC160B193493A5337; // 0x1EE0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9026A08344B836482ACA08956FBEFE2D; // 0x1FC0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_388164264AE0BEF68710E7AA54B7A322; // 0x1FE8(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F76BB4843CCB9FD2AF8609F01CA1F95; // 0x2170(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_11CC556D4A8522DA0B39FDB6E6D01DB0; // 0x2198(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D6046EA4071E923EC6946A240C83A5D; // 0x2320(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_97F0656F4E0E396CF432F08800236808; // 0x2348(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_02A848C1421744DCE8EE3BA0D16D3DB0; // 0x24D0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_66216C5247D7284CB6753AA4BCD975F5; // 0x24F8(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Snow_Ratmen_Ranged_AnimBP.Character_Snow_Ratmen_Ranged_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Snow_Ratmen_Ranged_AnimBP_AnimGraphNode_TransitionResult_701712B642FC4CFC5362A59F6966191A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Snow_Ratmen_Ranged_AnimBP_AnimGraphNode_TransitionResult_CA77B7CF43287B92FFD7B6B8A887FE5E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Character_Snow_Ratmen_Ranged_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
