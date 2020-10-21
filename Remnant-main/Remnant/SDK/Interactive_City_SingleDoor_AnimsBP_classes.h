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

// AnimBlueprintGeneratedClass Interactive_City_SingleDoor_AnimsBP.Interactive_City_SingleDoor_AnimsBP_C
// 0x03E8 (FullSize[0x0E98] - InheritedSize[0x0AB0])
class UInteractive_City_SingleDoor_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_76CF809946A83BE4554221961CA1F658;       // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_AECD0C68406A8A017919B1A16B000DEE; // 0x0AD8(0x03C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_City_SingleDoor_AnimsBP.Interactive_City_SingleDoor_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_City_SingleDoor_AnimsBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
