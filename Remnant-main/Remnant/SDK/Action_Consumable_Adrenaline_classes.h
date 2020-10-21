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

// BlueprintGeneratedClass Action_Consumable_Adrenaline.Action_Consumable_Adrenaline_C
// 0x000C (FullSize[0x02E0] - InheritedSize[0x02D4])
class UAction_Consumable_Adrenaline_C : public UAction_Buff_DurationMod_C
{
public:
	unsigned char                                      UnknownData_AWWV[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_Adrenaline.Action_Consumable_Adrenaline_C");
		return ptr;
	}


	void OnComputeStats();
	void OnActionStart();
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Consumable_Adrenaline(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
