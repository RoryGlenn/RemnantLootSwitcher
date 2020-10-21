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

// BlueprintGeneratedClass BP_InspectableComponent.BP_InspectableComponent_C
// 0x0009 (FullSize[0x0199] - InheritedSize[0x0190])
class UBP_InspectableComponent_C : public UInspectableComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0190(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Hide_Hud;                                                  // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InspectableComponent.BP_InspectableComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InspectableComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
