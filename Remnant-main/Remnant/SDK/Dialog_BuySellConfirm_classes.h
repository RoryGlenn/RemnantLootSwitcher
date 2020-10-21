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

// BlueprintGeneratedClass Dialog_BuySellConfirm.Dialog_BuySellConfirm_C
// 0x0000 (FullSize[0x03DD] - InheritedSize[0x03DD])
class ADialog_BuySellConfirm_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_BuySellConfirm.Dialog_BuySellConfirm_C");
		return ptr;
	}


	void GetQuantity(int* Quantity);
	void Init(bool Sell, int ItemID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
