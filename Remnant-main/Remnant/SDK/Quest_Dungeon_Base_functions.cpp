// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Quest_Dungeon_Base.Quest_Dungeon_Base_C.DoEncounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestZone*       Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpawnTable*             SpawnTable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           SpawnTags                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UEncounterInstance*      EncounterInstance              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Dungeon_Base_C::DoEncounter(class URemnantQuestZone* Zone, class USpawnTable* SpawnTable, TArray<struct FName>* SpawnTags, class UEncounterInstance** EncounterInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_Base.Quest_Dungeon_Base_C.DoEncounter");

	AQuest_Dungeon_Base_C_DoEncounter_Params params;
	params.Zone = Zone;
	params.SpawnTable = SpawnTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnTags != nullptr)
		*SpawnTags = params.SpawnTags;
	if (EncounterInstance != nullptr)
		*EncounterInstance = params.EncounterInstance;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
