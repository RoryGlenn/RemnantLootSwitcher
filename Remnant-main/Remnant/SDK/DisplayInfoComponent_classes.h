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

// BlueprintGeneratedClass DisplayInfoComponent.DisplayInfoComponent_C
// 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
class UDisplayInfoComponent_C : public UActorComponent
{
public:
	struct FText                                       Label;                                                     // 0x00F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                      // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DisplayInfoComponent.DisplayInfoComponent_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
