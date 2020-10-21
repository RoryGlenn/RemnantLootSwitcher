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

// BlueprintGeneratedClass Dialog_Inventory_SkinSelect.Dialog_Inventory_SkinSelect_C
// 0x0000 (FullSize[0x03DD] - InheritedSize[0x03DD])
class ADialog_Inventory_SkinSelect_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Inventory_SkinSelect.Dialog_Inventory_SkinSelect_C");
		return ptr;
	}


	void Init(int ItemID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
