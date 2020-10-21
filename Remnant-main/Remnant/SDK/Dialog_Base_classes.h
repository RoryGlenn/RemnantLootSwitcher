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

// BlueprintGeneratedClass Dialog_Base.Dialog_Base_C
// 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
class ADialog_Base_C : public ARemnantUIActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Base.Dialog_Base_C");
		return ptr;
	}


	void ToggleInputMode(bool Enabled);
	void UpdateMouse();
	void OnInputDeviceChanged(int ControllerId, EInputDevice CurrentInputDevice);
	void ExecuteUbergraph_Dialog_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
