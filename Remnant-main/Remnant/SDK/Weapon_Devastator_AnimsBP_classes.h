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

// AnimBlueprintGeneratedClass Weapon_Devastator_AnimsBP.Weapon_Devastator_AnimsBP_C
// 0x03E8 (FullSize[0x0E98] - InheritedSize[0x0AB0])
class UWeapon_Devastator_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7AE5B0F5497740EC31A0F9B97676FE73;       // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_D951DDAF4F7E9D5C2FD0A6B9982E6DAC; // 0x0AD8(0x03C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Devastator_AnimsBP.Weapon_Devastator_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Devastator_AnimsBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
