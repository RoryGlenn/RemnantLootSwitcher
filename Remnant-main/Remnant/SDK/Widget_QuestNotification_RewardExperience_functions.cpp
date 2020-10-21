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

// Function Widget_QuestNotification_RewardExperience.Widget_QuestNotification_RewardExperience_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_QuestNotification_RewardExperience_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_RewardExperience.Widget_QuestNotification_RewardExperience_C.Construct");

	UWidget_QuestNotification_RewardExperience_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_RewardExperience.Widget_QuestNotification_RewardExperience_C.ExecuteUbergraph_Widget_QuestNotification_RewardExperience
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_RewardExperience_C::ExecuteUbergraph_Widget_QuestNotification_RewardExperience(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_RewardExperience.Widget_QuestNotification_RewardExperience_C.ExecuteUbergraph_Widget_QuestNotification_RewardExperience");

	UWidget_QuestNotification_RewardExperience_C_ExecuteUbergraph_Widget_QuestNotification_RewardExperience_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
