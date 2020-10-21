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

// BlueprintGeneratedClass Action_ApplyBleed.Action_ApplyBleed_C
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class UAction_ApplyBleed_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRandomStream                               NewVar_1;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_ApplyBleed.Action_ApplyBleed_C");
		return ptr;
	}


	bool NoBleed();
	void OnActionStart();
	void ExecuteUbergraph_Action_ApplyBleed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
