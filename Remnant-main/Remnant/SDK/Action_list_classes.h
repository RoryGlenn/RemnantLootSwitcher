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

// BlueprintGeneratedClass Action_list.Action_List_C
// 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
class UAction_List_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              Actions;                                                   // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ActionIDs;                                                 // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_list.Action_List_C");
		return ptr;
	}


	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_List(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
