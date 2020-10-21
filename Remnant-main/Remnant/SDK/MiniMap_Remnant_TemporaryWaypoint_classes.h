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

// BlueprintGeneratedClass MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C
// 0x0008 (FullSize[0x0170] - InheritedSize[0x0168])
class UMiniMap_Remnant_TemporaryWaypoint_C : public UMiniMap_Remnant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C");
		return ptr;
	}


	void ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
