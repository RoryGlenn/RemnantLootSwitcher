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

// AnimBlueprintGeneratedClass Character_NPC_Smite_AnimBP.Character_NPC_Smite_AnimBP_C
// 0x1224 (FullSize[0x1D00] - InheritedSize[0x0ADC])
class UCharacter_NPC_Smite_AnimBP_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_AHHA[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3F62B8724FE2BDD789C144947930E399;       // 0x0AE8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ED5CA054984204A3217D69B9A801E03; // 0x0B08(0x0078)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_4DA710214BA3857AC09C41B360F10E4F; // 0x0B80(0x03C0)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_933AC6244D7D0DD33FB9878D95EEAA54; // 0x0F40(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F5A1DC594E39C649A9F248BFB24FA4EB; // 0x1008(0x00B8)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_761141A8439B006D85EDCD93C16B06EB; // 0x10C0(0x0088)
	struct FAnimNode_CurveSource                       AnimGraphNode_CurveSource_6ECA4443455C8B1401EC1896744ABC0C; // 0x1148(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D6AA6863487339254D840E9B3BAD13E4; // 0x1188(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_1E1C1A814F9234831241BFBACC40BF93; // 0x11B0(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_732E13F7456E968CD4C054927A0135C1; // 0x1338(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3280602A42667143121099AAF1BF8B4A; // 0x13D8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A34B4B5146ACA381889536908E85EB68; // 0x1400(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76E81BC147A97E5258D16D95225BC2A0; // 0x14B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6AE80834EFBE0B2502374A6B15722AC; // 0x14E0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF1039734B82D2BB82ED2B9E587A9FA8; // 0x1508(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_823DCF0340FC09809BE25980368F9F13; // 0x1580(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0A1FB54441B07872271E8800171BB49; // 0x15A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_497607C4499F1C066BE634B2294AAC2F; // 0x1618(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_163CE77B48247CC58A5BE8AFFE1A86E1; // 0x1638(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD1D0F894D2E48877BD51A8696DE12F2; // 0x16E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C6BE1B04BB6D7F41F4A35885EFD917A; // 0x1710(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0CDE17ED4D5563295BB32E833538C72C; // 0x1788(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35B3E2E04D358C49E88509828BF57A69; // 0x17A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_277E866841E4BAD176BDD9B2ECFF89C9; // 0x1820(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6AB8D8704A372C49C1F034953FCFBF40; // 0x1840(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DC1C5D146738AAEDE8A9E84B808BB09; // 0x18F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89C08C0F4DBDFF7C2A5362ABE68C9994; // 0x1918(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_69D294314299A4F5F1DE969A8F613A8B; // 0x1990(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45EA1C354E4985DF54EE2E801F6499D2; // 0x19B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_09108E24486AF81E0695429542791744; // 0x1A28(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DFFB9E1B4F031080BC8993A06C0205E4; // 0x1A48(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B9B5881941073267FF0584930B5B8E76; // 0x1AF8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A09B78F6436B975EDEF63C9236822123; // 0x1B20(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5E625B4E472ECDB8E02D239F06D3695A; // 0x1B98(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6159B924474DBD9595B707869E4FE3DD; // 0x1BB8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0298145B44A31A3B0F9C599B10146085; // 0x1C30(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0462DEB14CC2094E799291A8E0AE1E5C; // 0x1C50(0x00B0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_NPC_Smite_AnimBP.Character_NPC_Smite_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_NPC_Smite_AnimBP_AnimGraphNode_TransitionResult_B9B5881941073267FF0584930B5B8E76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_NPC_Smite_AnimBP_AnimGraphNode_TransitionResult_C6AE80834EFBE0B2502374A6B15722AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_NPC_Smite_AnimBP_AnimGraphNode_TransitionResult_FD1D0F894D2E48877BD51A8696DE12F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_NPC_Smite_AnimBP_AnimGraphNode_TransitionResult_5DC1C5D146738AAEDE8A9E84B808BB09();
	void ExecuteUbergraph_Character_NPC_Smite_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
