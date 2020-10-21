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

// BlueprintGeneratedClass MiniMap_Remnant.MiniMap_Remnant_C
// 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
class UMiniMap_Remnant_C : public UMiniMapComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0160(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Remnant.MiniMap_Remnant_C");
		return ptr;
	}


	void AddToActiveMinimap();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void AutoAddToMiniMap();
	void ExecuteUbergraph_MiniMap_Remnant(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
