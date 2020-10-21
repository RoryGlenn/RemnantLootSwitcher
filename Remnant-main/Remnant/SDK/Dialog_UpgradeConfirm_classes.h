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

// BlueprintGeneratedClass Dialog_UpgradeConfirm.Dialog_UpgradeConfirm_C
// 0x0000 (FullSize[0x03DD] - InheritedSize[0x03DD])
class ADialog_UpgradeConfirm_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_UpgradeConfirm.Dialog_UpgradeConfirm_C");
		return ptr;
	}


	void Init(int ItemID, const struct FRecipeInfo& RecipeInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
