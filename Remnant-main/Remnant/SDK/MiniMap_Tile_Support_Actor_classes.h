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

// BlueprintGeneratedClass MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C
// 0x0010 (FullSize[0x0368] - InheritedSize[0x0358])
class AMiniMap_Tile_Support_Actor_C : public AMinimapThumbnail
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMiniMap_Remnant_C*                          MiniMap_Remnant;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MiniMap_Tile_Support_Actor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
