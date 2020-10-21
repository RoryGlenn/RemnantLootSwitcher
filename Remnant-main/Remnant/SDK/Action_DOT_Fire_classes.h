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

// BlueprintGeneratedClass Action_DOT_Fire.Action_DOT_Fire_C
// 0x000F (FullSize[0x02FC] - InheritedSize[0x02ED])
class UAction_DOT_Fire_C : public UAction_DOT_C
{
public:
	unsigned char                                      UnknownData_UBC7[0x3];                                     // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              NumRollsToPutOutFire;                                      // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Fire.Action_DOT_Fire_C");
		return ptr;
	}


	void OnActionStart();
	void OnCharacterEvent(const struct FName& EventName);
	void OnActionStop();
	void ExecuteUbergraph_Action_DOT_Fire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
