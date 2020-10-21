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

// BlueprintGeneratedClass EventTreeNode_HideMenu.EventTreeNode_HideMenu_C
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UEventTreeNode_HideMenu_C : public UEventTreeNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_HideMenu.EventTreeNode_HideMenu_C");
		return ptr;
	}


	struct FString GetEditorLabel();
	void Begin(class UEventTreeComponent* Component);
	void ExecuteUbergraph_EventTreeNode_HideMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
