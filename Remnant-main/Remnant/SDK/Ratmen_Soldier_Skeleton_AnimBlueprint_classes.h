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

// AnimBlueprintGeneratedClass Ratmen_Soldier_Skeleton_AnimBlueprint.Ratmen_Soldier_Skeleton_AnimBlueprint_C
// 0x193C (FullSize[0x2418] - InheritedSize[0x0ADC])
class URatmen_Soldier_Skeleton_AnimBlueprint_C : public URemnantAnimInstance
{
public:
	unsigned char                                      UnknownData_S27U[0x4];                                     // 0x0ADC(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0BE72EBD4497BCA10D09DCBE9101B315;       // 0x0AE8(0x0020)
	unsigned char                                      UnknownData_YZQA[0x8];                                     // 0x0B08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_825BEF6F4E193B8CA6A02495678B3D0D; // 0x0B10(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8B40F4C746BE2F791C7DF89C661031F9; // 0x0E20(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4267F7DB42CA6F74B303F1BA84FC5850; // 0x0E40(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F0C5233E49C9704CE1E44C9CDA522D59; // 0x0E60(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_344585C94725DC05BB76F7A5356AB843; // 0x1170(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D12135B64B14EED01BBB86B65FB36B00; // 0x1480(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_521C977145EAE2F5C0187F8C71DDD1C8; // 0x1790(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_44276CF4476CB15B776B3CB91AC5CA85; // 0x1AA0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A0A95A424CDA6B14064AC5AD7EE53FE7; // 0x1DB0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AA7211284CEE66A3E517319144CC731A; // 0x20C0(0x0310)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_B3DDBCB54329C50F83E098BA354FB0CA;   // 0x23D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ratmen_Soldier_Skeleton_AnimBlueprint.Ratmen_Soldier_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Ratmen_Soldier_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
