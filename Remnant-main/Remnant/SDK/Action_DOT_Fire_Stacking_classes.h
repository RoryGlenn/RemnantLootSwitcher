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

// BlueprintGeneratedClass Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C
// 0x000C (FullSize[0x0308] - InheritedSize[0x02FC])
class UAction_DOT_Fire_Stacking_C : public UAction_DOT_Fire_C
{
public:
	unsigned char                                      UnknownData_7LMR[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C");
		return ptr;
	}


	void DetermineRollDelta();
	void OnReapplyBuff();
	void OnActionStart();
	void ExecuteUbergraph_Action_DOT_Fire_Stacking(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
