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

// BlueprintGeneratedClass BPI_TriggerObject.BPI_TriggerObject_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_TriggerObject_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TriggerObject.BPI_TriggerObject_C");
		return ptr;
	}


	void SetTriggerState(bool State);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
