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

// BlueprintGeneratedClass BPI_Cryptolith.BPI_Cryptolith_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Cryptolith_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Cryptolith.BPI_Cryptolith_C");
		return ptr;
	}


	void SetPhase(int NewPhase);
	void GetPhase(int* Out);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
