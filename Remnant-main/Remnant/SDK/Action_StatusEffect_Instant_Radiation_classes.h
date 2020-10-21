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

// BlueprintGeneratedClass Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class UAction_StatusEffect_Instant_Radiation_C : public UAction_StatusEffect_Instant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C");
		return ptr;
	}


	void OnValueChanged(float OldValue, float NewValue);
	void ExecuteUbergraph_Action_StatusEffect_Instant_Radiation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
