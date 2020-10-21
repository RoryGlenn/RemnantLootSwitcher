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

// BlueprintGeneratedClass EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C
// 0x0014 (FullSize[0x007C] - InheritedSize[0x0068])
class UEventTreeNode_RemoveItem_C : public UEventTreeNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ItemBP;                                                    // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Quantity;                                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C");
		return ptr;
	}


	void Begin(class UEventTreeComponent* Component);
	void ExecuteUbergraph_EventTreeNode_RemoveItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
