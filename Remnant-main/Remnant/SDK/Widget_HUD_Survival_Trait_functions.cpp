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

// Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.AnimationNew
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_HUD_Survival_Trait_C::AnimationNew()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.AnimationNew");

	UWidget_HUD_Survival_Trait_C_AnimationNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_HUD_Survival_Trait_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.Initialize");

	UWidget_HUD_Survival_Trait_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_HUD_Survival_Trait_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.Construct");

	UWidget_HUD_Survival_Trait_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.ExecuteUbergraph_Widget_HUD_Survival_Trait
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_Survival_Trait_C::ExecuteUbergraph_Widget_HUD_Survival_Trait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C.ExecuteUbergraph_Widget_HUD_Survival_Trait");

	UWidget_HUD_Survival_Trait_C_ExecuteUbergraph_Widget_HUD_Survival_Trait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
