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

// BlueprintGeneratedClass BP_Readable.BP_Readable_C
// 0x0034 (FullSize[0x045C] - InheritedSize[0x0428])
class ABP_Readable_C : public ABP_Inspectable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URasterWidgetComponent*                      RasterWidget;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               ReadNotify;                                                // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6MY0[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font;                                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Readable.BP_Readable_C");
		return ptr;
	}


	void GetScrollPageWidget(class UWidget_ScrollPage_C** Scroll_Page);
	void GetLore(class ALoreItem** LoreItem);
	void Assign_Render_Texture();
	void ReceiveBeginPlay();
	void InitLore();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature(class UInspectableComponent* Component);
	void ExecuteUbergraph_BP_Readable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
