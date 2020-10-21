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

// Function BP_Readable.BP_Readable_C.GetScrollPageWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ScrollPage_C*    Scroll_Page                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Readable_C::GetScrollPageWidget(class UWidget_ScrollPage_C** Scroll_Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.GetScrollPageWidget");

	ABP_Readable_C_GetScrollPageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scroll_Page != nullptr)
		*Scroll_Page = params.Scroll_Page;

}


// Function BP_Readable.BP_Readable_C.GetLore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALoreItem*               LoreItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Readable_C::GetLore(class ALoreItem** LoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.GetLore");

	ABP_Readable_C_GetLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoreItem != nullptr)
		*LoreItem = params.LoreItem;

}


// Function BP_Readable.BP_Readable_C.Assign Render Texture
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Readable_C::Assign_Render_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.Assign Render Texture");

	ABP_Readable_C_Assign_Render_Texture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Readable.BP_Readable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Readable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.ReceiveBeginPlay");

	ABP_Readable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Readable.BP_Readable_C.InitLore
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Readable_C::InitLore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.InitLore");

	ABP_Readable_C_InitLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Readable.BP_Readable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInspectableComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Readable_C::BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature(class UInspectableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature");

	ABP_Readable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Readable.BP_Readable_C.ExecuteUbergraph_BP_Readable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Readable_C::ExecuteUbergraph_BP_Readable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Readable.BP_Readable_C.ExecuteUbergraph_BP_Readable");

	ABP_Readable_C_ExecuteUbergraph_BP_Readable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
