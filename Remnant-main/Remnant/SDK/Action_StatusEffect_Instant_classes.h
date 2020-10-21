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

// BlueprintGeneratedClass Action_StatusEffect_Instant.Action_StatusEffect_Instant_C
// 0x0013 (FullSize[0x0268] - InheritedSize[0x0255])
class UAction_StatusEffect_Instant_C : public UAction_StatusEffect_C
{
public:
	unsigned char                                      UnknownData_FZPE[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Action;                                                    // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StatusEffect_Instant.Action_StatusEffect_Instant_C");
		return ptr;
	}


	void Do_Action();
	void OnValueChanged(float OldValue, float NewValue);
	void OnActionStart();
	void ExecuteUbergraph_Action_StatusEffect_Instant(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
