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

// BlueprintGeneratedClass Dialog_KeyInput.Dialog_KeyInput_C
// 0x0030 (FullSize[0x03F0] - InheritedSize[0x03C0])
class ADialog_KeyInput_C : public ADialog_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CooldownTime;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShiftRefCount;                                             // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ControlRefCount;                                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AltRefCount;                                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CommandRefCount;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K9O6[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    KeyInput;                                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_KeyInput.Dialog_KeyInput_C");
		return ptr;
	}


	void IsInvalidInput(const struct FKey& Key, bool* Out);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_RightShift_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_RightShift_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_RightCommand_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_RightCommand_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_LeftCommand_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_LeftCommand_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_KeyInput(int EntryPoint);
	void KeyInput__DelegateSignature(const struct FKey& Key, bool InvalidInput, bool Shift, bool Ctrl, bool Alt, bool Cmd);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
