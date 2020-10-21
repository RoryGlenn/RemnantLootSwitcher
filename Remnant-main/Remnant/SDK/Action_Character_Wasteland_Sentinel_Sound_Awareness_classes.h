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

// BlueprintGeneratedClass Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C
// 0x000C (FullSize[0x0240] - InheritedSize[0x0234])
class UAction_Character_Wasteland_Sentinel_Sound_Awareness_C : public UAction_Sound_Awareness_C
{
public:
	unsigned char                                      UnknownData_YFXC[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Action_Character_Wasteland_Sentinel_Sound_Awareness(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
