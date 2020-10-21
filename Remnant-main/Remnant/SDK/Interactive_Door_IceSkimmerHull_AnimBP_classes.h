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

// AnimBlueprintGeneratedClass Interactive_Door_IceSkimmerHull_AnimBP.Interactive_Door_IceSkimmerHull_AnimBP_C
// 0x03E8 (FullSize[0x0E98] - InheritedSize[0x0AB0])
class UInteractive_Door_IceSkimmerHull_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08AF0CEE4FC6B97A861FA08FB6C41F67;       // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_D232D2704E6852BE3A35DAA3C171E7DC; // 0x0AD8(0x03C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_Door_IceSkimmerHull_AnimBP.Interactive_Door_IceSkimmerHull_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_Door_IceSkimmerHull_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
