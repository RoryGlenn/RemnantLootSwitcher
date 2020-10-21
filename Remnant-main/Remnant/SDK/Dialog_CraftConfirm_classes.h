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

// BlueprintGeneratedClass Dialog_CraftConfirm.Dialog_CraftConfirm_C
// 0x0000 (FullSize[0x03DD] - InheritedSize[0x03DD])
class ADialog_CraftConfirm_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_CraftConfirm.Dialog_CraftConfirm_C");
		return ptr;
	}


	void Init(const struct FRecipeInfo& RecipeInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
