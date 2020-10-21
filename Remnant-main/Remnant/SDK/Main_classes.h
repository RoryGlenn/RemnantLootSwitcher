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

// BlueprintGeneratedClass Main.Main_C
// 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
class AMain_C : public ALevelScriptActorGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Skybox_A_C*                              BP_Skybox_A_374_ExecuteUbergraph_Main_RefProperty;         // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Main.Main_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Main(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
