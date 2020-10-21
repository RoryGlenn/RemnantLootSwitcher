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

// BlueprintGeneratedClass BP_Mod_FrozenMist_ProjectileVisualization.BP_Mod_FrozenMist_ProjectileVisualization_C
// 0x0000 (FullSize[0x03B9] - InheritedSize[0x03B9])
class ABP_Mod_FrozenMist_ProjectileVisualization_C : public ABP_ProjectileVisualization_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mod_FrozenMist_ProjectileVisualization.BP_Mod_FrozenMist_ProjectileVisualization_C");
		return ptr;
	}


	void GetRadius(float* Radius);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
