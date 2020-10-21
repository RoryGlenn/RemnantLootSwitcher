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

// AnimBlueprintGeneratedClass Interactive_City_BacktrackDoor_AnimsBP.Interactive_City_BacktrackDoor_AnimsBP_C
// 0x03E8 (FullSize[0x0E98] - InheritedSize[0x0AB0])
class UInteractive_City_BacktrackDoor_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1336F6BC4B63A88C2150E1A23A700A1D;       // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_2EE5A31242C790F76A27199CF6B966F9; // 0x0AD8(0x03C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_City_BacktrackDoor_AnimsBP.Interactive_City_BacktrackDoor_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_City_BacktrackDoor_AnimsBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
