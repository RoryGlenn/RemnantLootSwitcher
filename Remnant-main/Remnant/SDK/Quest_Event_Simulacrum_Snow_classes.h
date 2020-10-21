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

// BlueprintGeneratedClass Quest_Event_Simulacrum_Snow.Quest_Event_Simulacrum_Snow_C
// 0x0001 (FullSize[0x0579] - InheritedSize[0x0578])
class AQuest_Event_Simulacrum_Snow_C : public AQuest_Event_C
{
public:
	bool                                               All_Nexuses_Destroyed;                                     // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Event_Simulacrum_Snow.Quest_Event_Simulacrum_Snow_C");
		return ptr;
	}


	void AllDestroyed(bool* All_Nexuses_Destroyed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
