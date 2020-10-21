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

// BlueprintGeneratedClass Action_Sound_Awareness.Action_Sound_Awareness_C
// 0x000C (FullSize[0x0234] - InheritedSize[0x0228])
class UAction_Sound_Awareness_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              SignalRadius;                                              // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Sound_Awareness.Action_Sound_Awareness_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Action_Sound_Awareness(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
