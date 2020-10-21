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

// BlueprintGeneratedClass Quest_AdventureMode_Snow.Quest_AdventureMode_Snow_C
// 0x0008 (FullSize[0x0550] - InheritedSize[0x0548])
class AQuest_AdventureMode_Snow_C : public AQuest_RootQuest_C
{
public:
	class URemnantQuestSubQuest*                       Quest;                                                     // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_AdventureMode_Snow.Quest_AdventureMode_Snow_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
