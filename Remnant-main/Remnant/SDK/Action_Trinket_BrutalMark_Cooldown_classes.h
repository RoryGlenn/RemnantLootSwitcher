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

// BlueprintGeneratedClass Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C
// 0x000D (FullSize[0x02D0] - InheritedSize[0x02C3])
class UAction_Trinket_BrutalMark_Cooldown_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_XQRY[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C");
		return ptr;
	}


	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Trinket_BrutalMark_Cooldown(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
