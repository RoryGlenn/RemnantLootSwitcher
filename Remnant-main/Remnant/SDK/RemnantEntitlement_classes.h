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

// BlueprintGeneratedClass RemnantEntitlement.RemnantEntitlement_C
// 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
class URemnantEntitlement_C : public UEntitlementComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0128(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RemnantEntitlement.RemnantEntitlement_C");
		return ptr;
	}


	void RevokeLicense();
	void ExecuteUbergraph_RemnantEntitlement(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
