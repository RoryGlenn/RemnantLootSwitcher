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

// Function Widget_InGameMenu.Widget_InGameMenu_C.InitTabPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InGameMenu_C::InitTabPanel(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.InitTabPanel");

	UWidget_InGameMenu_C_InitTabPanel_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.CreateTabPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  WidgetBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             Out                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InGameMenu_C::CreateTabPanel(const struct FName& Widget, class UClass* WidgetBP, class UUserWidget** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.CreateTabPanel");

	UWidget_InGameMenu_C_CreateTabPanel_Params params;
	params.Widget = Widget;
	params.WidgetBP = WidgetBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsTabFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsTabFocused(const struct FName& Widget, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsTabFocused");

	UWidget_InGameMenu_C_IsTabFocused_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.CreateAndFocusWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  WidgetBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_TabButton_C*     TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InGameMenu_C::CreateAndFocusWidget(const struct FName& Widget, class UClass* WidgetBP, class UWidget_TabButton_C* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.CreateAndFocusWidget");

	UWidget_InGameMenu_C_CreateAndFocusWidget_Params params;
	params.Widget = Widget;
	params.WidgetBP = WidgetBP;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.SetShowAdvancedPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowAdvancedPanel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::SetShowAdvancedPanel(bool ShowAdvancedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.SetShowAdvancedPanel");

	UWidget_InGameMenu_C_SetShowAdvancedPanel_Params params;
	params.ShowAdvancedPanel = ShowAdvancedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.ShowAdvancedPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::ShowAdvancedPanel(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.ShowAdvancedPanel");

	UWidget_InGameMenu_C_ShowAdvancedPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsSellFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsSellFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsSellFocused");

	UWidget_InGameMenu_C_IsSellFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsCraftingFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsCraftingFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsCraftingFocused");

	UWidget_InGameMenu_C_IsCraftingFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsBuyFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsBuyFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsBuyFocused");

	UWidget_InGameMenu_C_IsBuyFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsUpgradeFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsUpgradeFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsUpgradeFocused");

	UWidget_InGameMenu_C_IsUpgradeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusSell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusSell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusSell");

	UWidget_InGameMenu_C_FocusSell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsCharacterFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsCharacterFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsCharacterFocused");

	UWidget_InGameMenu_C_IsCharacterFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsOptionsFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsOptionsFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsOptionsFocused");

	UWidget_InGameMenu_C_IsOptionsFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsQuestFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsQuestFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsQuestFocused");

	UWidget_InGameMenu_C_IsQuestFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsTraitsFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsTraitsFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsTraitsFocused");

	UWidget_InGameMenu_C_IsTraitsFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.IsInventoryFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_InGameMenu_C::IsInventoryFocused(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.IsInventoryFocused");

	UWidget_InGameMenu_C_IsInventoryFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusOptions");

	UWidget_InGameMenu_C_FocusOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_InGameMenu_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.GetVisibility_1");

	UWidget_InGameMenu_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusTraits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusTraits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusTraits");

	UWidget_InGameMenu_C_FocusTraits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusUpgrade");

	UWidget_InGameMenu_C_FocusUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusBuy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusBuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusBuy");

	UWidget_InGameMenu_C_FocusBuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusCrafting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusCrafting");

	UWidget_InGameMenu_C_FocusCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.ShowHideTabs
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::ShowHideTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.ShowHideTabs");

	UWidget_InGameMenu_C_ShowHideTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusQuest");

	UWidget_InGameMenu_C_FocusQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusInventory");

	UWidget_InGameMenu_C_FocusInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusCharacter
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::FocusCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.FocusCharacter");

	UWidget_InGameMenu_C_FocusCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_InGameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.Construct");

	UWidget_InGameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InGameMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.Tick");

	UWidget_InGameMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Inventory
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Inventory");

	UWidget_InGameMenu_C_AnimateLine_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Crafting
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Crafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Crafting");

	UWidget_InGameMenu_C_AnimateLine_Crafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Trait
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Trait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Trait");

	UWidget_InGameMenu_C_AnimateLine_Trait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Quest
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Quest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Quest");

	UWidget_InGameMenu_C_AnimateLine_Quest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Options
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Options");

	UWidget_InGameMenu_C_AnimateLine_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Sell
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Sell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Sell");

	UWidget_InGameMenu_C_AnimateLine_Sell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Buy
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Buy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Buy");

	UWidget_InGameMenu_C_AnimateLine_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Upgrade
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Upgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Upgrade");

	UWidget_InGameMenu_C_AnimateLine_Upgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature
// (BlueprintEvent)
void UWidget_InGameMenu_C::BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature");

	UWidget_InGameMenu_C_BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_InGameMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.Destruct");

	UWidget_InGameMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AdvancedStatsBtnClicked
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AdvancedStatsBtnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AdvancedStatsBtnClicked");

	UWidget_InGameMenu_C_AdvancedStatsBtnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Materials
// (BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::AnimateLine_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Materials");

	UWidget_InGameMenu_C_AnimateLine_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.OnDialogPopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIActor*                Dialog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InGameMenu_C::OnDialogPopped(class AUIActor* Dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.OnDialogPopped");

	UWidget_InGameMenu_C_OnDialogPopped_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.ExecuteUbergraph_Widget_InGameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_InGameMenu_C::ExecuteUbergraph_Widget_InGameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.ExecuteUbergraph_Widget_InGameMenu");

	UWidget_InGameMenu_C_ExecuteUbergraph_Widget_InGameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_InGameMenu.Widget_InGameMenu_C.Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_InGameMenu_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InGameMenu.Widget_InGameMenu_C.Closed__DelegateSignature");

	UWidget_InGameMenu_C_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
