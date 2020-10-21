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

// BlueprintGeneratedClass Action_Mod_HiveShot.Action_Mod_HiveShot_C
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UAction_Mod_HiveShot_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_HiveShot.Action_Mod_HiveShot_C");
		return ptr;
	}


	void GetDamage(float* Damage);
	void GetPlayerAsCause(class AActor** Cause);
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_HiveShot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
