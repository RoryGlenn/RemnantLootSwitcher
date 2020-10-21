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

// AnimBlueprintGeneratedClass Interactive_Fusebox_AnimBP.Interactive_Fusebox_AnimBP_C
// 0x03E8 (FullSize[0x0E98] - InheritedSize[0x0AB0])
class UInteractive_Fusebox_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B8B160C34C29455778AD6F80754B3649;       // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_A1808A4D4AF32A4EC0CFE4BACAD237D4; // 0x0AD8(0x03C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_Fusebox_AnimBP.Interactive_Fusebox_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_Fusebox_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
