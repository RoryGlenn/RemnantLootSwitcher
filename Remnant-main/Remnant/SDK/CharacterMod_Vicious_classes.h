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

// BlueprintGeneratedClass CharacterMod_Vicious.CharacterMod_Vicious_C
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UCharacterMod_Vicious_C : public UCharacterMod_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Vicious.CharacterMod_Vicious_C");
		return ptr;
	}


	void OnComputeStats();
	void ExecuteUbergraph_CharacterMod_Vicious(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
