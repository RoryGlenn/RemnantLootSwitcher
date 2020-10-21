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

// Function Quest_Event_Packmaster.Quest_Event_Packmaster_C.BndEvt__Vignette_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Event_Packmaster_C::BndEvt__Vignette_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Event_Packmaster.Quest_Event_Packmaster_C.BndEvt__Vignette_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature");

	AQuest_Event_Packmaster_C_BndEvt__Vignette_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Event_Packmaster.Quest_Event_Packmaster_C.ExecuteUbergraph_Quest_Event_Packmaster
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Event_Packmaster_C::ExecuteUbergraph_Quest_Event_Packmaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Event_Packmaster.Quest_Event_Packmaster_C.ExecuteUbergraph_Quest_Event_Packmaster");

	AQuest_Event_Packmaster_C_ExecuteUbergraph_Quest_Event_Packmaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
