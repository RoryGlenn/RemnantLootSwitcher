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

// BlueprintGeneratedClass Resource_Snow_SteelOfAgony.Resource_Snow_SteelOfAgony_C
// 0x0008 (FullSize[0x04E8] - InheritedSize[0x04E0])
class AResource_Snow_SteelOfAgony_C : public AItem_Material_Base_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Snow_SteelOfAgony.Resource_Snow_SteelOfAgony_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
