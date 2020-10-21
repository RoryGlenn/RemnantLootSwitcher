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

// BlueprintGeneratedClass Dialog_TravelMenu.Dialog_TravelMenu_C
// 0x000B (FullSize[0x03E8] - InheritedSize[0x03DD])
class ADialog_TravelMenu_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData_66TJ[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Parent;                                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_TravelMenu.Dialog_TravelMenu_C");
		return ptr;
	}


	void SetContext(class AActor* Context, class UUserWidget* ParentWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
